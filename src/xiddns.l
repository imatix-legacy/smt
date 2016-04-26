!----------------------------------------------------------------------------
!   Name:       xiddns.l
!   Title:      Dialog for Xitami dynamic-DNS registration agent
!   Package:    Xitami
!
!   Written:    1999/06/17  Xitami Team <xitami@imatix.com>
!   Revised:    2000/02/16
!
!   Copyright:  Copyright (c) 1991-2000 iMatix Corporation
!----------------------------------------------------------------------------
-schema=smtschm.c
-idle

After-Init:
    (--) Ok                                 -> After-Startup
          + Check-If-Automatic-Signon
    (--) Error                              ->
          + Terminate-The-Thread

After-Startup:
    (--) Ok                                 -> Before-Signon
          + Initialise-Signon-Timer
          + Load-Ddns-Services-List
          + Get-First-Ddns-Profile
    (--) Ignore                             -> Server-Running
          +
          
Server-Running:
    (--) Signon                             -> Before-Signon
          + Load-Ddns-Services-List
          + Get-First-Ddns-Profile
    (--) Signoff                            -> Before-Signoff
          + Load-Ddns-Services-List
          + Get-First-Ddns-Profile
      
Before-Signon:
    (--) Ok                                 -> Signon-Connect
          + Connect-To-Ddns-Server
    (--) No-More                            -> Server-Running
          + Drop-Ddns-Services-List
    (--) Error                              -> 
          + Get-Next-Ddns-Profile

Signon-Connect:
    (--) Ok                                 -> Signon-Sent
          + Get-Connected-Socket
          + Send-Ddns-Signon-Request
    (--) Ignore                             -> Before-Signon
          + Close-Ddns-Socket
          + Get-Next-Ddns-Profile
    (--) Sock-Error                         -> Before-Signon
          + Signal-Connection-Failed
          + Get-Next-Ddns-Profile

Signon-Sent:
    (--) Ok                                 -> Signon-Answer
          + Get-Ddns-Server-Response

Signon-Answer:
    (--) Ok                                 -> Before-Signon
          + Check-Ddns-Confirmation
          + Close-Ddns-Socket
          + Get-Next-Ddns-Profile

Before-Signoff:
    (--) Ok                                 -> Signoff-Connect
          + Connect-To-Ddns-Server
    (--) No-More                            -> Server-Running
          + Drop-Ddns-Services-List
    (--) Error                              -> 
          + Get-Next-Ddns-Profile

Signoff-Connect:
    (--) Ok                                 -> Signoff-Sent
          + Get-Connected-Socket
          + Send-Ddns-Signoff-Request
    (--) Ignore                             -> Before-Signoff
          + Close-Ddns-Socket
          + Get-Next-Ddns-Profile
    (--) Sock-Error                         -> Before-Signoff
          + Signal-Connection-Failed
          + Get-Next-Ddns-Profile

Signoff-Sent:
    (--) Ok                                 -> Signoff-Answer
          + Get-Ddns-Server-Response

Signoff-Answer:
    (--) Ok                                 -> Before-Signoff
          + Check-Ddns-Confirmation
          + Close-Ddns-Socket
          + Get-Next-Ddns-Profile

Defaults:
    (--) Sock-Timeout                       -> 
          + Signal-Ddns-Sock-Timeout
          + Terminate-The-Thread
    (--) Sock-Error                         -> 
          + Signal-Ddns-Sock-Error
          + Terminate-The-Thread
    (--) Exception                          -> 
          + Terminate-The-Thread
    (--) Shutdown                           ->
          + Terminate-The-Thread
    (--) Signon                             -> 
          + 
    (--) Signoff                            -> 
          + 

