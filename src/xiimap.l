!----------------------------------------------------------------------------
!   Name:       xiimap.l
!   Title:      Dialog for Xitami image map WSX agent
!   Package:    Xitami
!
!   Written:    1999/06/25  Pieter Hintjens <ph@imatix.com>
!   Revised:    1999/06/25  Pieter Hintjens <ph@imatix.com>
!
!   Copyright:  Copyright (c) 1991-2000 iMatix Corporation
!   License:    This is free software; you can redistribute it and/or modify
!               it under the terms of the SMT License Agreement as provided
!               in the file LICENSE.TXT.  This software is distributed in
!               the hope that it will be useful, but without any warranty.
!----------------------------------------------------------------------------
-schema=smtschm.c

After-Init:
    (--) Ok                                 -> Expect-Request
          +

Expect-Request:
    (--) Request                            -> Have-Request
          + Decode-Wsx-Request

Have-Request:
    (--) Ok                                 -> Expect-Request
          + Return-Url-From-Image-Map
          + Free-Wsx-Request

Defaults:
    (--) Exception                          -> Expect-Request
          +
    (--) Shutdown                           ->
          + Terminate-The-Thread
