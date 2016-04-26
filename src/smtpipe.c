/*  ----------------------------------------------------------------<Prolog>-
    Name:       smtpipe.c
    Title:      SMT Operator agent
    Package:    Libero/SMT Kernel 2.x

    Written:    1996/06/16  iMatix SMT kernel team <smt@imatix.com>
    Revised:    2000/02/04

    Synopsis:   Sends error or warning messages to the system operator.

    Copyright:  Copyright (c) 1991-2000 iMatix Corporation
    License:    This is free software; you can redistribute it and/or modify
                it under the terms of the SMT License Agreement as provided
                in the file LICENSE.TXT.  This software is distributed in
                the hope that it will be useful, but without any warranty.
 ------------------------------------------------------------------</Prolog>-*/

#include "smtdefn.h"                    /*  SMT definitions                  */


/*- Definitions -------------------------------------------------------------*/

#define AGENT_NAME      "SMTPIPE"       /*  Our public name                  */
#define SINGLE_THREADED TRUE            /*  Single-threaded agent            */


/*- Global variables used in this source file only --------------------------*/

static QID
    tranq,                              /*  Transfer agent event queue       */
    timeq,                              /*  Timer event queue                */
    operq;                              /*  Operator console event queue     */
static XML_ITEM
    *pipes;                             /*  List of pipe definitions         */
static char
    *filename;                          /*  Pipe definition file, argument   */


#include "smtpipe.d"                    /*  Include dialog data              */

/********************   INITIALISE AGENT - ENTRY POINT   *********************/

/*  ---------------------------------------------------------------------[<]-
    Function: smtpipe_init

    Synopsis: Initialises the SMT pipe agent.  Returns 0 if initialised
    okay, -1 if there was an error.  
    ---------------------------------------------------------------------[>]-*/

int
smtpipe_init (char *p_filename)
{
    AGENT   *agent;                     /*  Handle for our agent             */
    THREAD  *thread;                    /*  Handle for initial thread        */

#   include "smtpipe.i"                 /*  Include dialog interpreter       */

    /*                      Method name     Event value      Priority        */
    /*  Shutdown event comes from Kernel, normal priority so we can show     */
    /*  incoming messages before we shut down.                               */
    method_declare (agent, "SHUTDOWN",      shutdown_event,  0);

    /*  Reply events from timer agent                                        */
    method_declare (agent, "TIME_ALARM",     timer_event, SMT_PRIORITY_LOW);

    /*  Ensure that operator console is running, else start it up            */
    smtoper_init ();
    if ((thread = thread_lookup (SMT_OPERATOR, "")) != NULL)
        operq = thread-> queue-> qid;
    else
        return (-1);

    /*  Ensure that transfer agent is running, else start it up              */
    smttran_init ();
    if ((thread = thread_lookup (SMT_TRANSFER, "")) != NULL)
        tranq = thread-> queue-> qid;
    else
        return (-1);

    /*  Ensure that timer agent is running, else start it up                 */
    smttime_init ();
    if ((thread = thread_lookup (SMT_TIMER, "")) != NULL)
        timeq = thread-> queue-> qid;
    else
        return (-1);

    /*  Create initial, unnamed thread                                       */
    thread = thread_create (AGENT_NAME, "");
    filename = p_filename;              /*  Get name of pipe definition      */
    
    /*  Signal okay to caller that we initialised okay                       */
    return (0);
}


/*************************   INITIALISE THE THREAD   *************************/

MODULE initialise_the_thread (THREAD *thread)
{
    the_next_event = ok_event;
}


/*************************   LOAD PIPE DEFINITIONS   *************************/

MODULE load_pipe_definitions (THREAD *thread)
{
    if (file_where ('r', "PATH", filename, NULL))
      {
        pipes = NULL;
        if (xml_load_file (&pipes, "PATH", filename, FALSE) != XML_NOERROR)
          {
            sendfmt (&operq, "ERROR",
                     "smtpipe: error in '%s': %s", filename, xml_error ());
            raise_exception (exception_event);
          }
      }
    else
      {
        sendfmt (&operq, "ERROR", "smtpipe: '%s' not found", filename);
        senderr (&operq);
        raise_exception (exception_event);
      }
}


/*************************   CREATE TRANSFER PIPES   *************************/

MODULE create_transfer_pipes (THREAD *thread)
{
    XML_ITEM
        *pipe,                          /*  XML pipe item                    */
        *instance;                      /*  XML instance item                */
    XML_ATTR
        *attr;                          /*  XML attribute                    */
    char
        *pipe_name;
    qbyte
        inrate,                         /*  Pipe input rate                  */
        outrate,                        /*  Pipe output rate                 */
        units;                          /*  Transfer rate multiplier         */

    FORCHILDREN (pipe, xml_first_child (pipes))
      {
        pipe_name = xml_get_attr (pipe, "NAME", NULL);
        if (!pipe_name)
          {
            sendfmt (&operq, "ERROR",
                     "smtpipe: syntax error in '%s' - no NAME", filename);
            continue;
          }

        inrate  = atol (xml_get_attr (pipe, "INRATE",  "0"));
        outrate = atol (xml_get_attr (pipe, "OUTRATE", "0"));
        if (inrate  == 0)
            inrate  = atol (xml_get_attr (pipe, "RATE", "0"));
        if (outrate == 0)
            outrate = atol (xml_get_attr (pipe, "RATE", "0"));

        if (inrate == 0 || outrate == 0)
          {
            sendfmt (&operq, "ERROR",
                             "smtpipe: pipe '%s' badly defined", pipe_name);
            continue;
          }
        units    = atol (xml_get_attr (pipe, "UNITS", "1"));
        inrate  *= units;
        outrate *= units;

        /*  Create each pipe instance that is defined                        */
        FORCHILDREN (instance, pipe)
          {
            attr = xml_attr (instance, "NAME");
            if (attr == NULL)
              {
                sendfmt (&operq, "ERROR",
                         "smtpipe: pipe '%s' instance has no name", pipe_name);
                continue;
              }
            send_pipe_create (&tranq, xml_attr_value (attr), inrate, outrate);
          }
      }
}


/***************************   SLEEP FOR A WHILE   ***************************/

MODULE sleep_for_a_while (THREAD *thread)
{
    /*  Ask timer to send us an event after 10 seconds                       */
    send_alarm (&timeq, 0, 1000, 0, NULL);
}


/************************   RELOAD PIPES IF CHANGED   ************************/

MODULE reload_pipes_if_changed (THREAD *thread)
{
    if (xml_refresh (&pipes))
      {
        send_clear_pipes (&tranq);
        create_transfer_pipes (thread);
      }
}


/*************************   DROP PIPE DEFINITIONS   *************************/

MODULE drop_pipe_definitions (THREAD *thread)
{
    if (pipes)
        xml_free (pipes);
}


/*************************   TERMINATE THE THREAD   **************************/

MODULE terminate_the_thread (THREAD *thread)
{
    the_next_event = terminate_event;
}

