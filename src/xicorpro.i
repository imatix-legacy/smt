/*  ----------------------------------------------------------------<Prolog>-
    Name:       xicorpro.i
    Title:      Core for Xitami/Pro with SSL support

    Generated:  2000/01/01 from ximodel.gsl, using GSLgen.

    Copyright:  Copyright (c) 1991-2000 iMatix Corporation
    License:    This is free software; you can redistribute it and/or modify
                it under the terms of the SMT License Agreement as provided
                in the file LICENSE.TXT.  This software is distributed in
                the hope that it will be useful, but without any warranty.
 ------------------------------------------------------------------</Prolog>-*/

    /*  Initialise the SMT kernel                                            */
    smt_init ();
    server_name = "Xitami/Pro";

    /*  Load the agents we want to use                                       */
    if (*CONFIG ("ssl-http:enabled"))
        smtssl_init ();                 /*  Secure Sockets Layer (SSL)       */
    if (*CONFIG ("lrwp:enabled"))
        xilrwp_init ();                 /*  Long-running web protocol        */
    if (*CONFIG ("security:admin"))
        xiadmin_init ();                /*  Web-based administration         */
    if (*CONFIG ("server:supervisor"))
        xisuper_init ();                /*  Supervisor agent                 */
    xierror_init ();                    /*  Error-simulation agent           */
    xiddns_init ();                     /*  Dynamic DNS registration         */
    xiimap_init ();                     /*  server-side image maps           */
    xixlog_init ();                     /*  Extended logging agent           */
    xixssi_init ();                     /*  Internal SSI processor           */
    xixxml_init ();                     /*  Internal XML processor           */
    smtpipe_init (CONFIG ("server:pipedef")); /* Transfer pipe agent         */
    smthttp_init (rootdir, cgidir);     /*  HTTP agent, required             */
    smtftpc_init (ftproot);             /*  FTP service agent                */
