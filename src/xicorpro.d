/*  ----------------------------------------------------------------<Prolog>-
    Name:       xicorpro.d
    Title:      Core for Xitami/Pro with SSL support

    Generated:  2000/01/01 from ximodel.gsl, using GSLgen.

    Copyright:  Copyright (c) 1991-2000 iMatix Corporation
    License:    This is free software; you can redistribute it and/or modify
                it under the terms of the SMT License Agreement as provided
                in the file LICENSE.TXT.  This software is distributed in
                the hope that it will be useful, but without any warranty.
 ------------------------------------------------------------------</Prolog>-*/

/*  Define the agents we want to use                                         */
int smtssl_init (void);                 /*  Secure Sockets Layer (SSL)       */
int xilrwp_init (void);                 /*  Long-running web protocol        */
int xiadmin_init (void);                /*  Web-based administration         */
int xisuper_init (void);                /*  Supervisor agent                 */
int xierror_init (void);                /*  Error-simulation agent           */
int xiddns_init (void);                 /*  Dynamic DNS registration         */
int xiimap_init (void);                 /*  server-side image maps           */
int xixlog_init (void);                 /*  Extended logging agent           */
int xixssi_init (void);                 /*  Internal SSI processor           */
int xixxml_init (void);                 /*  Internal XML processor           */
