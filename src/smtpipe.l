!----------------------------------------------------------------------------
!   Name:       smtpipe.l
!   Title:      Dialog for SMT transfer pipe agent
!   Package:    Libero SMT 2.x
!
!   Written:    1999/08/23  iMatix SMT kernel team <smt@imatix.com>
!   Revised:    1999/12/15
!
!   Copyright:  Copyright (c) 1991-2000 iMatix Corporation
!   License:    This is free software; you can redistribute it and/or modify
!               it under the terms of the SMT License Agreement as provided
!               in the file LICENSE.TXT.  This software is distributed in
!               the hope that it will be useful, but without any warranty.
!----------------------------------------------------------------------------
-schema=smtschm.c

After-Init:
    (--) Ok                                 -> After-Waking
          + Load-Pipe-Definitions
          + Create-Transfer-Pipes
          + Sleep-For-A-While
    (--) Error                              ->
          + Terminate-The-Thread

After-Waking:
    (--) Timer                              -> After-Waking
          + Reload-Pipes-If-Changed
          + Sleep-For-A-While

Defaults:
    (--) Exception                          ->
          + Drop-Pipe-Definitions
          + Terminate-The-Thread
    (--) Shutdown                           ->
          + Drop-Pipe-Definitions
          + Terminate-The-Thread
    (--) $other                             ->
          +
