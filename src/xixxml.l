!----------------------------------------------------------------------------
!   Name:       xixxml.l
!   Title:      Dialog for Xitami XML processing agent
!   Package:    Xitami
!
!   Written:    1999/09/21  Pieter Hintjens <ph@imatix.com>
!   Revised:    1999/11/26  Pieter Hintjens <ph@imatix.com>
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
    (--) Xml-File                           -> Expect-Request
          + Load-Xml-File
          + Set-Standard-Attributes
          + Process-Xml-File
          + Reply-Wsx-With-Output
          + Free-Xml-File
    (--) Gsl-File                           -> Expect-Request
          + Create-Empty-Xml-File
          + Set-Standard-Attributes
          + Process-Xml-File
          + Reply-Wsx-With-Output
          + Free-Xml-File
    (--) Other                              -> Expect-Request
          + Reply-Illegal-Access

Defaults:
    (--) Not-Found                          -> Expect-Request
          + Reply-Not-Found         
          + Free-Xml-File
    (--) Exception                          -> Expect-Request
          +
    (--) Shutdown                           ->
          + Terminate-The-Thread
