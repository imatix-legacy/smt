/*---------------------------------------------------------------------------*
 *  smthlog.d - LIBERO dialog data definitions for smthlog.c.                *
 *  Generated by LIBERO 2.30 on  5 Dec, 1999, 14:17.                         *
 *  Schema file used: smtschm.c.                                             *
 *---------------------------------------------------------------------------*/

/*- Symbolic constants and event numbers ------------------------------------*/

#define _LR_STOP                        0xFFFFL
#define _LR_NULL_EVENT                  -2
#define _LR_NULL_STATE                  -1
#define terminate_event                 -1
#define debug_mode_event                0
#define empty_event                     1
#define empty_stack_event               2
#define end_event                       3
#define end_of_file_event               4
#define error_event                     5
#define exception_event                 6
#define fatal_event                     7
#define first_request_event             8
#define full_event                      9
#define help_event                      10
#define host_event                      11
#define ip_event                        12
#define log_file_event                  13
#define master_event                    14
#define not_first_event                 15
#define not_full_event                  16
#define ok_event                        17
#define recursive_mode_event            18
#define request_event                   19
#define request_complete_event          20
#define server_ip_event                 21
#define shutdown_event                  22
#define timeout_event                   23
#define verbose_mode_event              24
#define _LR_STATE_after_init            0
#define _LR_STATE_process_argument      1
#define _LR_STATE_after_open_file       2
#define _LR_STATE_after_request_creation 3
#define _LR_STATE_stack_level           4
#define _LR_STATE_master_input          5
#define _LR_STATE_after_request_complete 6
#define _LR_STATE_resolver_feedback     7
#define _LR_STATE_defaults              8
#define _LR_STATE_end_thread            9
#define _LR_defaults_state              8


/*- Function prototypes and macros ------------------------------------------*/

#ifndef MODULE
#define MODULE  static void             /*  Libero dialog modules            */
#endif

MODULE initialise_the_thread        (THREAD *thread);
MODULE initialise_dns_library       (THREAD *thread);
MODULE get_next_argument            (THREAD *thread);
MODULE check_thread_type            (THREAD *thread);
MODULE send_request_to_resolver     (THREAD *thread);
MODULE set_server_ip_value          (THREAD *thread);
MODULE set_debug_mode               (THREAD *thread);
MODULE set_verbose_mode             (THREAD *thread);
MODULE set_recursive_mode           (THREAD *thread);
MODULE check_dns_config             (THREAD *thread);
MODULE open_log_file                (THREAD *thread);
MODULE show_help                    (THREAD *thread);
MODULE read_next_line               (THREAD *thread);
MODULE create_request               (THREAD *thread);
MODULE partial_initialisation       (THREAD *thread);
MODULE create_request_thread        (THREAD *thread);
MODULE check_stack_level            (THREAD *thread);
MODULE write_current_line_to_output (THREAD *thread);
MODULE show_processing_statistics   (THREAD *thread);
MODULE set_end_file_flag            (THREAD *thread);
MODULE check_if_first_request_complete (THREAD *thread);
MODULE store_line_to_output         (THREAD *thread);
MODULE remove_request_form_stack    (THREAD *thread);
MODULE store_host_name              (THREAD *thread);
MODULE set_feedback_to_error        (THREAD *thread);
MODULE set_feedback_to_not_found    (THREAD *thread);
MODULE set_feedback_to_timeout      (THREAD *thread);
MODULE terminate_the_thread         (THREAD *thread);
MODULE shutdown_application         (THREAD *thread);
MODULE display_result_to_console    (THREAD *thread);
MODULE send_request_complete        (THREAD *thread);

#define the_next_event              _the_next_event
#define the_exception_event         _the_exception_event
#define the_external_event          _the_external_event
#define exception_raised            _exception_raised
#define io_completed                _io_completed


/*- Static areas shared by all threads --------------------------------------*/

static word _LR_nextst [10][25] =
{
    { 0,0,0,0,0,9,0,0,0,0,0,0,0,0,1,0,0,0,0,7,0,0,0,0,0 },
    { 1,0,0,9,0,0,0,0,0,0,9,0,0,2,0,0,0,0,1,0,0,1,0,0,1 },
    { 0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0 },
    { 0,0,0,0,5,3,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0 },
    { 0,1,0,0,0,0,0,0,0,5,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0 },
    { 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0 },
    { 0,0,3,0,1,0,0,0,6,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0 },
    { 0,0,0,9,0,9,0,0,0,0,0,9,9,0,0,0,0,0,0,0,0,0,0,9,0 },
    { 0,0,0,0,0,0,9,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,0 },
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,0,0,0,9,0,0,0,0,0 }
};

static word _LR_action [10][25] =
{
    { 0,0,0,0,0,2,0,0,0,0,0,0,0,0,1,0,0,0,0,3,0,0,0,0,0 },
    { 5,0,0,2,0,0,0,0,0,0,9,0,0,8,0,0,0,0,7,0,0,4,0,0,6 },
    { 0,0,0,0,0,11,0,0,0,0,0,0,0,0,0,0,0,10,0,0,0,0,0,0,0 },
    { 0,0,0,0,14,13,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,0,0,0,0 },
    { 0,11,0,0,0,0,0,0,0,15,0,0,0,0,0,0,10,0,0,0,0,0,0,0,0 },
    { 0,0,0,0,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,0,0,0,0 },
    { 0,0,10,0,11,0,0,0,17,0,0,0,0,0,0,18,0,0,0,0,0,0,0,0,0 },
    { 0,0,0,21,0,20,0,0,0,0,0,19,20,0,0,0,0,0,0,0,0,0,0,22,0 },
    { 0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0 },
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,0,0,0,0,24,0,0,0,0,0 }
};

static word _LR_offset [] =
{
    0,
    0,
    3,
    5,
    7,
    10,
    13,
    16,
    19,
    22,
    25,
    28,
    31,
    34,
    38,
    41,
    42,
    44,
    48,
    50,
    53,
    56,
    59,
    62,
    65
};

static word _LR_vector [] =
{
    0,1,_LR_STOP,
    2,_LR_STOP,
    3,_LR_STOP,
    4,1,_LR_STOP,
    5,1,_LR_STOP,
    6,1,_LR_STOP,
    7,1,_LR_STOP,
    8,9,_LR_STOP,
    10,2,_LR_STOP,
    11,12,_LR_STOP,
    13,1,_LR_STOP,
    14,15,_LR_STOP,
    16,11,12,_LR_STOP,
    17,18,_LR_STOP,
    _LR_STOP,
    19,_LR_STOP,
    20,21,19,_LR_STOP,
    15,_LR_STOP,
    22,2,_LR_STOP,
    23,2,_LR_STOP,
    24,2,_LR_STOP,
    25,2,_LR_STOP,
    26,27,_LR_STOP,
    28,29,26,_LR_STOP
};

static HOOK *_LR_module [30] = {
    initialise_dns_library,
    get_next_argument,
    check_thread_type,
    send_request_to_resolver,
    set_server_ip_value,
    set_debug_mode,
    set_verbose_mode,
    set_recursive_mode,
    check_dns_config,
    open_log_file,
    show_help,
    read_next_line,
    create_request,
    partial_initialisation,
    create_request_thread,
    check_stack_level,
    write_current_line_to_output,
    show_processing_statistics,
    set_end_file_flag,
    check_if_first_request_complete,
    store_line_to_output,
    remove_request_form_stack,
    store_host_name,
    set_feedback_to_error,
    set_feedback_to_not_found,
    set_feedback_to_timeout,
    terminate_the_thread,
    shutdown_application,
    display_result_to_console,
    send_request_complete
};

#if (defined (DEBUG))
static char *_LR_mname [30] =
{
     "Initialise-Dns-Library",
     "Get-Next-Argument",
     "Check-Thread-Type",
     "Send-Request-To-Resolver",
     "Set-Server-Ip-Value",
     "Set-Debug-Mode",
     "Set-Verbose-Mode",
     "Set-Recursive-Mode",
     "Check-Dns-Config",
     "Open-Log-File",
     "Show-Help",
     "Read-Next-Line",
     "Create-Request",
     "Partial-Initialisation",
     "Create-Request-Thread",
     "Check-Stack-Level",
     "Write-Current-Line-To-Output",
     "Show-Processing-Statistics",
     "Set-End-File-Flag",
     "Check-If-First-Request-Complete",
     "Store-Line-To-Output",
     "Remove-Request-Form-Stack",
     "Store-Host-Name",
     "Set-Feedback-To-Error",
     "Set-Feedback-To-Not-Found",
     "Set-Feedback-To-Timeout",
     "Terminate-The-Thread",
     "Shutdown-Application",
     "Display-Result-To-Console",
     "Send-Request-Complete"
};

static char *_LR_sname [10] =
{
     "After-Init",
     "Process-Argument",
     "After-Open-File",
     "After-Request-Creation",
     "Stack-Level",
     "Master-Input",
     "After-Request-Complete",
     "Resolver-Feedback",
     "Defaults",
     "End-Thread"
};

static char *_LR_ename [25] =
{
     "Debug-Mode-Event",
     "Empty-Event",
     "Empty-Stack-Event",
     "End-Event",
     "End-Of-File-Event",
     "Error-Event",
     "Exception-Event",
     "Fatal-Event",
     "First-Request-Event",
     "Full-Event",
     "Help-Event",
     "Host-Event",
     "Ip-Event",
     "Log-File-Event",
     "Master-Event",
     "Not-First-Event",
     "Not-Full-Event",
     "Ok-Event",
     "Recursive-Mode-Event",
     "Request-Event",
     "Request-Complete-Event",
     "Server-Ip-Event",
     "Shutdown-Event",
     "Timeout-Event",
     "Verbose-Mode-Event"
};
#else
static char *_LR_mname [30] =
{
     "0",
     "1",
     "2",
     "3",
     "4",
     "5",
     "6",
     "7",
     "8",
     "9",
     "10",
     "11",
     "12",
     "13",
     "14",
     "15",
     "16",
     "17",
     "18",
     "19",
     "20",
     "21",
     "22",
     "23",
     "24",
     "25",
     "26",
     "27",
     "28",
     "29"
};

static char *_LR_sname [10] =
{
     "0",
     "1",
     "2",
     "3",
     "4",
     "5",
     "6",
     "7",
     "8",
     "9"
};

static char *_LR_ename [25] =
{
     "0",
     "1",
     "2",
     "3",
     "4",
     "5",
     "6",
     "7",
     "8",
     "9",
     "10",
     "11",
     "12",
     "13",
     "14",
     "15",
     "16",
     "17",
     "18",
     "19",
     "20",
     "21",
     "22",
     "23",
     "24"
};
#endif