!----------------------------------------------------------------------------
!   Name:       xisuper.l
!   Title:      Dialog for Xitami Supervisor
!   Package:    Xitami
!
!   Written:    1999/04/14  Xitami Team <xitami@imatix.com>
!   Revised:    1999/07/17
!
!   Copyright:  Copyright (c) 1991-2000 iMatix Corporation
!----------------------------------------------------------------------------
-schema=smtschm.c
-idle

After-Init:
    (--) Ok                                 -> Have-Alarm
          + Sleep-For-An-Hour-Or-So
    (--) Error                              ->
          + Terminate-The-Thread

Have-Alarm:
    (--) Ok                                 -> Ready-To-Go
          + Check-Whether-Xitami-Busy

Ready-To-Go:
    (--) Busy                               -> Have-Alarm
          + Check-Whether-Overdue
          + Sleep-For-An-Hour-Or-So
    (--) Not-Busy                           -> Have-Alarm
          + Clean-Up-Temporary-Files
          + Clean-Up-Log-Files
          + Sleep-For-An-Hour-Or-So

Defaults:
    (--) Exception                          -> Ready-To-Go
          + Sleep-For-An-Hour-Or-So
          + Check-Whether-Xitami-Busy
    (--) Shutdown                           ->
          + Terminate-The-Thread

