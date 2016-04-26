/*---------------------------------------------------------------------------
 *  xiadm31.h - HTML form definition
 *
 *  Generated 2000/04/01, 16:13:44 by fxgen 2.0
 *  See Studio on-line help pages at <http://www.imatix.com>.
 *---------------------------------------------------------------------------*/

#ifndef __FORM_XIADM31__
#define __FORM_XIADM31__

#include "sfl.h"
#include "formio.h"


/*  Constants defining size of tables, etc.                                  */

#define XIADM31_MESSAGE_TO_USER             0
#define XIADM31_MAIN_CONFIG                 1
#define XIADM31_L_SUPERVISOR                2
#define XIADM31_SUPERVISOR                  3
#define XIADM31_L_CACHE_DEFAULTS            4
#define XIADM31_CACHE_DEFAULTS              5
#define XIADM31_L_HOSTNAME                  6
#define XIADM31_HOSTNAME                    7
#define XIADM31_L_PRIORITY                  8
#define XIADM31_PRIORITY                    9
#define XIADM31_L_PORTBASE                  10
#define XIADM31_PORTBASE                    11
#define XIADM31_L_BASE_HOST                 12
#define XIADM31_BASE_HOST                   13
#define XIADM31_L_IPADDRESS                 14
#define XIADM31_IPADDRESS                   15
#define XIADM31_L_TEMP_DIR                  16
#define XIADM31_TEMP_DIR                    17
#define XIADM31_L_DEBUG_DIR                 18
#define XIADM31_DEBUG_DIR                   19
#define XIADM31_L_LRWP_ENABLED              20
#define XIADM31_LRWP_ENABLED                21
#define XIADM31_L_LRWP_PORT                 22
#define XIADM31_LRWP_PORT                   23
#define XIADM31_L_LRWP_WEBMASK              24
#define XIADM31_LRWP_WEBMASK                25
#define XIADM31_L_PIPEDEF                   26
#define XIADM31_PIPEDEF                     27
#define XIADM31_L_SSL_ENABLED               28
#define XIADM31_SSL_ENABLED                 29
#define XIADM31_L_SSL_FILENAME              30
#define XIADM31_SSL_FILENAME                31
#define XIADM31_L_TEST_URI                  32
#define XIADM31_TEST_URI                    33
#define XIADM31_L_MAPPED_URI                34
#define XIADM31_MAPPED_URI                  35

/*  This table contains each block in the form                               */

static byte xiadm31_blocks [] = {
    /*  <HTML>                                                               */
    0, 8, 0, '<', 'H', 'T', 'M', 'L', '>', 10,
    /*  <HEAD><TITLE>Xitami Administration</TITLE></HEAD>                    */
    0, 51, 0, '<', 'H', 'E', 'A', 'D', '>', '<', 'T', 'I', 'T', 'L',
    'E', '>', 'X', 'i', 't', 'a', 'm', 'i', 32, 'A', 'd', 'm', 'i', 'n',
    'i', 's', 't', 'r', 'a', 't', 'i', 'o', 'n', '<', '/', 'T', 'I',
    'T', 'L', 'E', '>', '<', '/', 'H', 'E', 'A', 'D', '>', 10,
    /*  <BODY onLoad="focus()" BGCOLOR="#87CEFA">                            */
    0, 43, 0, '<', 'B', 'O', 'D', 'Y', 32, 'o', 'n', 'L', 'o', 'a', 'd',
    '=', '"', 'f', 'o', 'c', 'u', 's', '(', ')', '"', 32, 'B', 'G', 'C',
    'O', 'L', 'O', 'R', '=', '"', '#', '8', '7', 'C', 'E', 'F', 'A',
    '"', '>', 10,
    /*  <SCRIPT LANGUAGE="JavaScript"><!--                                   */
    0, 36, 0, '<', 'S', 'C', 'R', 'I', 'P', 'T', 32, 'L', 'A', 'N', 'G',
    'U', 'A', 'G', 'E', '=', '"', 'J', 'a', 'v', 'a', 'S', 'c', 'r',
    'i', 'p', 't', '"', '>', '<', '!', 45, 45, 10,
    /*  function show(img,show) {    ... bmit();    }}// --></SCRIPT>        */
    1, 157, 0, 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', 32, 's', 'h',
    'o', 'w', '(', 'i', 'm', 'g', ',', 's', 'h', 'o', 'w', ')', 32, '{',
    10, 10, 32, 32, 32, 32, 'i', 'f', 32, '(', 'd', 'o', 'c', 'u', 'm',
    'e', 'n', 't', '.', 'i', 'm', 'a', 'g', 'e', 's', ')', 10, 10, 32,
    32, 32, 32, 32, 32, 32, 32, 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't',
    '[', 'i', 'm', 'g', ']', '.', 's', 'r', 'c', 32, '=', 32, 's', 'h',
    'o', 'w', ';', 10, 10, '}', 10, 10, 'f', 'u', 'n', 'c', 't', 'i',
    'o', 'n', 32, 's', 'u', 'b', 'm', 'i', 't', '(', 'a', 'r', 'g', 'u',
    'm', 'e', 'n', 't', 's', ')', 32, '{', 10, 10, 32, 32, 32, 32, 'd',
    'o', 'c', 'u', 'm', 'e', 'n', 't', '.', 'f', 'o', 'r', 'm', 's',
    '[', '0', ']', '.', 'j', 's', 'a', 'c', 't', 'i', 'o', 'n', '.',
    'v', 'a', 'l', 'u', 'e', 32, '=', 32, 'a', 'r', 'g', 'u', 'm', 'e',
    'n', 't', 's', ';', 10, 10, 32, 32, 32, 32, 'd', 'o', 'c', 'u', 'm',
    'e', 'n', 't', '.', 'f', 'o', 'r', 'm', 's', '[', '0', ']', '.',
    's', 'u', 'b', 'm', 'i', 't', '(', ')', ';', 10, 10, '}', 10, 10,
    'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', 32, 's', 'u', 'b', 'c', 'o',
    'n', 'f', '(', 'a', 'r', 'g', 'u', 'm', 'e', 'n', 't', 's', ',',
    'm', 'e', 's', 's', 'a', 'g', 'e', ')', 32, '{', 10, 10, 32, 32, 32,
    32, 'i', 'f', 32, '(', 'm', 'e', 's', 's', 'a', 'g', 'e', 32, '=',
    '=', 32, 39, 39, 32, '|', '|', 32, 'c', 'o', 'n', 'f', 'i', 'r',
    'm', 32, '(', 'm', 'e', 's', 's', 'a', 'g', 'e', ')', ')', 32, '{',
    10, 10, 32, 32, 32, 32, 32, 32, 32, 32, 'd', 'o', 'c', 'u', 'm',
    'e', 'n', 't', '.', 'f', 'o', 'r', 'm', 's', '[', '0', ']', '.',
    'j', 's', 'a', 'c', 't', 'i', 'o', 'n', '.', 'v', 'a', 'l', 'u',
    'e', 32, '=', 32, 'a', 'r', 'g', 'u', 'm', 'e', 'n', 't', 's', ';',
    10, 10, 32, 32, 32, 32, 32, 32, 32, 32, 'd', 'o', 'c', 'u', 'm',
    'e', 'n', 't', '.', 'f', 'o', 'r', 'm', 's', '[', '0', ']', '.',
    's', 'u', 'b', 'm', 'i', 't', '(', ')', ';', 10, 10, 32, 32, 32, 32,
    '}', 10, 10, '}', 10, 10, '/', '/', 32, 45, 45, '>', '<', '/', 'S',
    'C', 'R', 'I', 'P', 'T', '>', 10,
    /*  <TABLE CELLSPACING=0 CELLPADDING=0 WIDTH=100%>                       */
    0, 48, 0, '<', 'T', 'A', 'B', 'L', 'E', 32, 'C', 'E', 'L', 'L', 'S',
    'P', 'A', 'C', 'I', 'N', 'G', '=', '0', 32, 'C', 'E', 'L', 'L', 'P',
    'A', 'D', 'D', 'I', 'N', 'G', '=', '0', 32, 'W', 'I', 'D', 'T', 'H',
    '=', '1', '0', '0', '%', '>', 10,
    /*  <FORM METHOD=POST ACTION="#(proto)#(host)#(uri)">                    */
    0, 51, 0, '<', 'F', 'O', 'R', 'M', 32, 'M', 'E', 'T', 'H', 'O', 'D',
    '=', 'P', 'O', 'S', 'T', 32, 'A', 'C', 'T', 'I', 'O', 'N', '=', '"',
    '#', '(', 'p', 'r', 'o', 't', 'o', ')', '#', '(', 'h', 'o', 's',
    't', ')', '#', '(', 'u', 'r', 'i', ')', '"', '>', 10,
    /*  <INPUT TYPE=HIDDEN NAME=jsaction VALUE="">                           */
    0, 44, 0, '<', 'I', 'N', 'P', 'U', 'T', 32, 'T', 'Y', 'P', 'E', '=',
    'H', 'I', 'D', 'D', 'E', 'N', 32, 'N', 'A', 'M', 'E', '=', 'j', 's',
    'a', 'c', 't', 'i', 'o', 'n', 32, 'V', 'A', 'L', 'U', 'E', '=', '"',
    '"', '>', 10,
    /*  <TR><TD ALIGN=LEFT>                                                  */
    0, 21, 0, '<', 'T', 'R', '>', '<', 'T', 'D', 32, 'A', 'L', 'I', 'G',
    'N', '=', 'L', 'E', 'F', 'T', '>', 10,
    /*  <IMG SRC="/admin/$left.gif" BORDER=0 ALIGN=MIDDLE>                   */
    0, 51, 0, '<', 'I', 'M', 'G', 32, 'S', 'R', 'C', '=', '"', '/', 'a',
    'd', 'm', 'i', 'n', '/', '$', 'l', 'e', 'f', 't', '.', 'g', 'i',
    'f', '"', 32, 'B', 'O', 'R', 'D', 'E', 'R', '=', '0', 32, 'A', 'L',
    'I', 'G', 'N', '=', 'M', 'I', 'D', 'D', 'L', 'E', '>',
    /*  !--ACTION back  LABEL="/admi ...  ROLLOVER="/admin/backa.gif"        */
    0, 52, 20, 2, 1, (byte) ((word) back_event / 256), (byte) ((word)
    back_event & 255), 0, 0, 0, 0, 39, 0, '(', 'b', 'a', 'c', 'k', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'b', 'a', 'c', 'k', '.',
    'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'b', 'a', 'c',
    'k', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  !--ACTION save  LABEL="/admi ...  ROLLOVER="/admin/savea.gif"        */
    0, 52, 20, 2, 1, (byte) ((word) save_event / 256), (byte) ((word)
    save_event & 255), 0, 1, 0, 0, 39, 0, '(', 's', 'a', 'v', 'e', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 's', 'a', 'v', 'e', '.',
    'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 's', 'a', 'v',
    'e', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  !--ACTION default  LABEL="/a ... LLOVER="/admin/defaulta.gif"        */
    0, 61, 20, 2, 1, (byte) ((word) default_event / 256), (byte) ((word)
    default_event & 255), 0, 2, 0, 0, 39, 0, '(', 'd', 'e', 'f', 'a',
    'u', 'l', 't', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'd', 'e',
    'f', 'a', 'u', 'l', 't', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm',
    'i', 'n', '/', 'd', 'e', 'f', 'a', 'u', 'l', 't', 'a', '.', 'g',
    'i', 'f', 0, 0,
    /*  !--ACTION undo  LABEL="/admi ...  ROLLOVER="/admin/undoa.gif"        */
    0, 52, 20, 2, 1, (byte) ((word) undo_event / 256), (byte) ((word)
    undo_event & 255), 0, 3, 0, 0, 39, 0, '(', 'u', 'n', 'd', 'o', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'u', 'n', 'd', 'o', '.',
    'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'u', 'n', 'd',
    'o', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  <A HREF="/xitami/index4.htm# ... " TARGET="Help" TITLE="Help"        */
    0, 73, 0, '<', 'A', 32, 'H', 'R', 'E', 'F', '=', '"', '/', 'x', 'i',
    't', 'a', 'm', 'i', '/', 'i', 'n', 'd', 'e', 'x', '4', '.', 'h',
    't', 'm', '#', 'c', 'o', 'n', 'f', 'i', 'g', '_', 'a', 'd', 'v',
    'a', 'n', 'c', 'e', 'd', '"', 32, 'T', 'A', 'R', 'G', 'E', 'T', '=',
    '"', 'H', 'e', 'l', 'p', '"', 32, 'T', 'I', 'T', 'L', 'E', '=', '"',
    'H', 'e', 'l', 'p', '"', 10,
    /*  onMouseOver="show('Help','/a ... .gif" BORDER=0 ALIGN=MIDDLE>        */
    0, 238, 0, 'o', 'n', 'M', 'o', 'u', 's', 'e', 'O', 'v', 'e', 'r',
    '=', '"', 's', 'h', 'o', 'w', '(', 39, 'H', 'e', 'l', 'p', 39, ',',
    39, '/', 'a', 'd', 'm', 'i', 'n', '/', 'h', 'e', 'l', 'p', 'a', '.',
    'g', 'i', 'f', 39, ')', '"', 10, 10, 'o', 'n', 'M', 'o', 'u', 's',
    'e', 'O', 'u', 't', '=', '"', 's', 'h', 'o', 'w', '(', 39, 'H', 'e',
    'l', 'p', 39, ',', 39, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'h',
    'e', 'l', 'p', '.', 'g', 'i', 'f', 39, ')', '"', '>', '<', 'I', 'M',
    'G', 32, 'S', 'R', 'C', '=', '"', '/', 'a', 'd', 'm', 'i', 'n', '/',
    '$', 'h', 'e', 'l', 'p', '.', 'g', 'i', 'f', '"', 32, 'A', 'L', 'T',
    '=', '"', '"', 32, 'B', 'O', 'R', 'D', 'E', 'R', '=', '0', 32, 'A',
    'L', 'I', 'G', 'N', '=', 'M', 'I', 'D', 'D', 'L', 'E', 32, 'N', 'A',
    'M', 'E', '=', '"', 'H', 'e', 'l', 'p', '"', 10, 10, 'W', 'I', 'D',
    'T', 'H', '=', '4', '0', 32, 'H', 'E', 'I', 'G', 'H', 'T', '=', '3',
    '9', '>', '<', '/', 'A', '>', '<', 'I', 'M', 'G', 32, 'S', 'R', 'C',
    '=', '"', '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'r', 'i', 'g',
    'h', 't', '.', 'g', 'i', 'f', '"', 32, 'B', 'O', 'R', 'D', 'E', 'R',
    '=', '0', 32, 'A', 'L', 'I', 'G', 'N', '=', 'M', 'I', 'D', 'D', 'L',
    'E', '>', 10,
    /*  <TD ALIGN=CENTER><FONT SIZE= ... ed Server Properties </FONT>        */
    0, 79, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'C', 'E',
    'N', 'T', 'E', 'R', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z',
    'E', '=', '+', '1', '>', '#', '(', 'c', 'o', 'n', 'f', 'i', 'g',
    ')', 32, 45, 32, 'A', 'd', 'v', 'a', 'n', 'c', 'e', 'd', 32, 'S',
    'e', 'r', 'v', 'e', 'r', 32, 'P', 'r', 'o', 'p', 'e', 'r', 't', 'i',
    'e', 's', 32, '<', '/', 'F', 'O', 'N', 'T', '>', 10,
    /*  <TD ALIGN=RIGHT>                                                     */
    0, 18, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'R', 'I',
    'G', 'H', 'T', '>', 10,
    /*  <IMG SRC="/admin/$left.gif" BORDER=0 ALIGN=MIDDLE>                   */
    0, 4, 1, 0, 2, 221,
    /*  !--ACTION console  LABEL="/a ... LLOVER="/admin/consolea.gif"        */
    0, 61, 20, 2, 1, (byte) ((word) console_event / 256), (byte) ((word)
    console_event & 255), 0, 4, 0, 0, 39, 0, '(', 'c', 'o', 'n', 's',
    'o', 'l', 'e', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'c', 'o',
    'n', 's', 'o', 'l', 'e', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm',
    'i', 'n', '/', 'c', 'o', 'n', 's', 'o', 'l', 'e', 'a', '.', 'g',
    'i', 'f', 0, 0,
    /*  !--ACTION halt  LABEL="/admi ...  ROLLOVER="/admin/halta.gif"        */
    0, 52, 20, 2, 1, (byte) ((word) halt_event / 256), (byte) ((word)
    halt_event & 255), 0, 5, 0, 0, 39, 0, '(', 'h', 'a', 'l', 't', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'h', 'a', 'l', 't', '.',
    'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'h', 'a', 'l',
    't', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  !--ACTION restart  LABEL="/a ... LLOVER="/admin/restarta.gif"        */
    0, 61, 20, 2, 1, (byte) ((word) restart_event / 256), (byte) ((word)
    restart_event & 255), 0, 6, 0, 0, 39, 0, '(', 'r', 'e', 's', 't',
    'a', 'r', 't', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'r', 'e',
    's', 't', 'a', 'r', 't', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm',
    'i', 'n', '/', 'r', 'e', 's', 't', 'a', 'r', 't', 'a', '.', 'g',
    'i', 'f', 0, 0,
    /*  !--ACTION exit  LABEL="/admi ...  ROLLOVER="/admin/exita.gif"        */
    0, 52, 20, 2, 1, (byte) ((word) exit_event / 256), (byte) ((word)
    exit_event & 255), 0, 7, 0, 0, 39, 0, '(', 'e', 'x', 'i', 't', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'e', 'x', 'i', 't', '.',
    'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'e', 'x', 'i',
    't', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  <IMG SRC="/admin/$right.gif" BORDER=0 ALIGN=MIDDLE>                  */
    0, 53, 0, '<', 'I', 'M', 'G', 32, 'S', 'R', 'C', '=', '"', '/', 'a',
    'd', 'm', 'i', 'n', '/', '$', 'r', 'i', 'g', 'h', 't', '.', 'g',
    'i', 'f', '"', 32, 'B', 'O', 'R', 'D', 'E', 'R', '=', '0', 32, 'A',
    'L', 'I', 'G', 'N', '=', 'M', 'I', 'D', 'D', 'L', 'E', '>', 10,
    /*  </TABLE>                                                             */
    0, 10, 0, '<', '/', 'T', 'A', 'B', 'L', 'E', '>', 10,
    /*  <TABLE WIDTH=100%><TR><TD ALIGN=LEFT>                                */
    0, 39, 0, '<', 'T', 'A', 'B', 'L', 'E', 32, 'W', 'I', 'D', 'T', 'H',
    '=', '1', '0', '0', '%', '>', '<', 'T', 'R', '>', '<', 'T', 'D', 32,
    'A', 'L', 'I', 'G', 'N', '=', 'L', 'E', 'F', 'T', '>', 10,
    /*  !--IF message_to_user                                                */
    0, 5, 2, 0, 0, 0, 3,
    /*  <FONT COLOR="#E00000" SIZE=+1><EM>                                   */
    0, 36, 0, '<', 'F', 'O', 'N', 'T', 32, 'C', 'O', 'L', 'O', 'R', '=',
    '"', '#', 'E', '0', '0', '0', '0', '0', '"', 32, 'S', 'I', 'Z', 'E',
    '=', '+', '1', '>', '<', 'E', 'M', '>', 10,
    /*  !--FIELD TEXTUAL message_to_user SIZE=80                             */
    0, 25, 10, 9, 1, 0, 0, 'P', 0, 'P', 'm', 'e', 's', 's', 'a', 'g',
    'e', '_', 't', 'o', '_', 'u', 's', 'e', 'r', 0, 0,
    /*  </EM></FONT>                                                         */
    0, 14, 0, '<', '/', 'E', 'M', '>', '<', '/', 'F', 'O', 'N', 'T',
    '>', 10,
    /*  <TD ALIGN=RIGHT>                                                     */
    0, 4, 1, 0, 5, '',
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 6, 186,
    /*  <FONT SIZE=-1>                                                       */
    0, 16, 0, '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z', 'E', '=', 45,
    '1', '>', 10,
    /*  !--ACTION ok  LABEL="Ok" EVE ... event CONFIRM="" TYPE=PLAIN         */
    0, 20, 20, 1, 1, (byte) ((word) save_event / 256), (byte) ((word)
    save_event & 255), 0, 8, 0, 0, 0, 0, 0, 'o', 'k', 0, 'O', 'k', 0, 0,
    0,
    /*  !--ACTION cancel  LABEL="Can ... event CONFIRM="" TYPE=PLAIN         */
    0, 28, 20, 1, 1, (byte) ((word) back_event / 256), (byte) ((word)
    back_event & 255), 0, 9, 0, 0, 0, 0, 0, 'c', 'a', 'n', 'c', 'e',
    'l', 0, 'C', 'a', 'n', 'c', 'e', 'l', 0, 0, 0,
    /*  </FONT><HR>                                                          */
    0, 13, 0, '<', '/', 'F', 'O', 'N', 'T', '>', '<', 'H', 'R', '>', 10,
    /*  !--FIELD NUMERIC main_config SIZE=4 VALUE=1                          */
    0, 27, 11, 5, 1, 0, 4, 0, 4, 0, 0, 0, 0, 0, 0, 'm', 'a', 'i', 'n',
    '_', 'c', 'o', 'n', 'f', 'i', 'g', 0, '1', 0,
    /*  <TABLE WIDTH="100%">                                                 */
    0, 22, 0, '<', 'T', 'A', 'B', 'L', 'E', 32, 'W', 'I', 'D', 'T', 'H',
    '=', '"', '1', '0', '0', '%', '"', '>', 10,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 39, 0, '<', 'T', 'R', '>', '<', 'T', 'D', 32, 'A', 'L', 'I', 'G',
    'N', '=', 'L', 'E', 'F', 'T', 32, 'V', 'A', 'L', 'I', 'G', 'N', '=',
    'T', 'O', 'P', 32, 'N', 'O', 'W', 'R', 'A', 'P', '>', 10,
    /*  !--FIELD TEXTUAL f461 NAME=L ... ervisor agent?&nbsp;&nbsp;"         */
    0, 50, 10, 6, 1, 0, 0, '$', 0, '$', 'f', '4', '6', '1', 0, 'E', 'n',
    'a', 'b', 'l', 'e', 32, 's', 'u', 'p', 'e', 'r', 'v', 'i', 's', 'o',
    'r', 32, 'a', 'g', 'e', 'n', 't', '?', '&', 'n', 'b', 's', 'p', ';',
    '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 36, 0, '<', '/', 'T', 'D', '>', '<', 'T', 'D', 32, 'A', 'L', 'I',
    'G', 'N', '=', 'L', 'E', 'F', 'T', 32, 'W', 'I', 'D', 'T', 'H', '=',
    '"', '"', '8', '0', '%', '"', '"', '>', 10,
    /*  !--FIELD BOOLEAN f462 NAME=s ... r TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '4', '6', '2', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 12, 0, '<', '/', 'T', 'D', '>', '<', '/', 'T', 'R', '>', 10,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f463 NAME=L ... default pages?&nbsp;&nbsp;"         */
    0, 46, 10, 6, 1, 0, 0, 32, 0, 32, 'f', '4', '6', '3', 0, 'C', 'a',
    'c', 'h', 'e', 32, 'd', 'e', 'f', 'a', 'u', 'l', 't', 32, 'p', 'a',
    'g', 'e', 's', '?', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b',
    's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD BOOLEAN f464 NAME=c ... s TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '4', '6', '4', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f465 NAME=L ... rect hostname:&nbsp;&nbsp;"         */
    0, 52, 10, 6, 1, 0, 0, '&', 0, '&', 'f', '4', '6', '5', 0, 'D', 'e',
    'f', 'a', 'u', 'l', 't', 32, 'r', 'e', 'd', 'i', 'r', 'e', 'c', 't',
    32, 'h', 'o', 's', 't', 'n', 'a', 'm', 'e', ':', '&', 'n', 'b', 's',
    'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD TEXTUAL f466 NAME=h ... =30 MAX=80 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 30, 0, 'P', 'f', '4', '6', '6', 0, 0,
    /*  !--IF main_config                                                    */
    0, 5, 2, 0, 1, 0, 'B',
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f467 NAME=L ... r performance:&nbsp;&nbsp;"         */
    0, 45, 10, 6, 1, 0, 0, 31, 0, 31, 'f', '4', '6', '7', 0, 'S', 'e',
    'r', 'v', 'e', 'r', 32, 'p', 'e', 'r', 'f', 'o', 'r', 'm', 'a', 'n',
    'c', 'e', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's',
    'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD RADIO f468 NAME=pri ... 0 DETAIL=0 VALUE=0 NULL="?"         */
    0, 25, 17, 0, 1, 0, 0, 'f', '4', '6', '8', 0, '0', 0, 'N', 'o', 32,
    's', 'e', 'l', 'e', 'c', 't', 'i', 'o', 'n', 0,
    /*  !--FIELD RADIO f468 OPTION="Normal"                                  */
    0, 11, 18, 9, 'p', 1, 'N', 'o', 'r', 'm', 'a', 'l', 0,
    /*  !--FIELD RADIO f468 OPTION="Background"                              */
    0, 15, 18, 9, 'p', 2, 'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u', 'n',
    'd', 0,
    /*  !--FIELD RADIO f468 OPTION="Turbo!"                                  */
    0, 11, 18, 9, 'p', 3, 'T', 'u', 'r', 'b', 'o', '!', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f469 NAME=L ... "IP port base:&nbsp;&nbsp;"         */
    0, 39, 10, 6, 1, 0, 0, 25, 0, 25, 'f', '4', '6', '9', 0, 'I', 'P',
    32, 'p', 'o', 'r', 't', 32, 'b', 'a', 's', 'e', ':', '&', 'n', 'b',
    's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD NUMERIC f470 NAME=p ... MMA=0 SIZE=5 MAX=? VALUE=""         */
    0, 19, 11, 0, 1, 0, 5, 0, 5, 0, 0, 0, 0, 0, 0, 'f', '4', '7', '0',
    0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f471 NAME=L ... t config file:&nbsp;&nbsp;"         */
    0, 48, 10, 6, 1, 0, 0, '"', 0, '"', 'f', '4', '7', '1', 0, 'B', 'a',
    's', 'e', 32, 'h', 'o', 's', 't', 32, 'c', 'o', 'n', 'f', 'i', 'g',
    32, 'f', 'i', 'l', 'e', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n',
    'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD TEXTUAL f472 NAME=b ... =30 MAX=80 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 30, 0, 'P', 'f', '4', '7', '2', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f473 NAME=L ... er IP address:&nbsp;&nbsp;"         */
    0, 44, 10, 6, 1, 0, 0, 30, 0, 30, 'f', '4', '7', '3', 0, 'S', 'e',
    'r', 'v', 'e', 'r', 32, 'I', 'P', 32, 'a', 'd', 'd', 'r', 'e', 's',
    's', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p',
    ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD SELECT f474 NAME=ip ... pe=dynamic 0="No selection"         */
    0, 25, 16, 0, 1, 1, 0, 'f', '4', '7', '4', 0, '0', 0, 'N', 'o', 32,
    's', 'e', 'l', 'e', 'c', 't', 'i', 'o', 'n', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f475 NAME=L ... or temp files:&nbsp;&nbsp;"         */
    0, 51, 10, 6, 1, 0, 0, '%', 0, '%', 'f', '4', '7', '5', 0, 'D', 'i',
    'r', 'e', 'c', 't', 'o', 'r', 'y', 32, 'f', 'o', 'r', 32, 't', 'e',
    'm', 'p', 32, 'f', 'i', 'l', 'e', 's', ':', '&', 'n', 'b', 's', 'p',
    ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD TEXTUAL f476 NAME=t ... 30 MAX=100 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 30, 0, 'd', 'f', '4', '7', '6', 0, 0,
    /*  Can be an environment variable                                       */
    0, 32, 0, 'C', 'a', 'n', 32, 'b', 'e', 32, 'a', 'n', 32, 'e', 'n',
    'v', 'i', 'r', 'o', 'n', 'm', 'e', 'n', 't', 32, 'v', 'a', 'r', 'i',
    'a', 'b', 'l', 'e', 10,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f477 NAME=L ... r debug files:&nbsp;&nbsp;"         */
    0, 52, 10, 6, 1, 0, 0, '&', 0, '&', 'f', '4', '7', '7', 0, 'D', 'i',
    'r', 'e', 'c', 't', 'o', 'r', 'y', 32, 'f', 'o', 'r', 32, 'd', 'e',
    'b', 'u', 'g', 32, 'f', 'i', 'l', 'e', 's', ':', '&', 'n', 'b', 's',
    'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD TEXTUAL f478 NAME=d ... 30 MAX=100 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 30, 0, 'd', 'f', '4', '7', '8', 0, 0,
    /*  Can be an environment variable                                       */
    0, 4, 1, 0, 11, 12,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f479 NAME=L ... LRWP protocol?&nbsp;&nbsp;"         */
    0, 47, 10, 6, 1, 0, 0, '!', 0, '!', 'f', '4', '7', '9', 0, 'E', 'n',
    'a', 'b', 'l', 'e', 32, 'L', 'R', 'W', 'P', 32, 'p', 'r', 'o', 't',
    'o', 'c', 'o', 'l', '?', '&', 'n', 'b', 's', 'p', ';', '&', 'n',
    'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD BOOLEAN f480 NAME=l ... d TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '4', '8', '0', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f481 NAME=L ... nnection port:&nbsp;&nbsp;"         */
    0, 47, 10, 6, 1, 0, 0, '!', 0, '!', 'f', '4', '8', '1', 0, 'L', 'R',
    'W', 'P', 32, 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 32,
    'p', 'o', 'r', 't', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n',
    'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD NUMERIC f482 NAME=l ... MMA=0 SIZE=5 MAX=? VALUE=""         */
    0, 19, 11, 0, 1, 0, 5, 0, 5, 0, 0, 0, 0, 0, 0, 'f', '4', '8', '2',
    0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f483 NAME=L ... "LRWP webmask:&nbsp;&nbsp;"         */
    0, 39, 10, 6, 1, 0, 0, 25, 0, 25, 'f', '4', '8', '3', 0, 'L', 'R',
    'W', 'P', 32, 'w', 'e', 'b', 'm', 'a', 's', 'k', ':', '&', 'n', 'b',
    's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD TEXTUAL f484 NAME=l ... =20 MAX=80 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 20, 0, 'P', 'f', '4', '8', '4', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f485 NAME=L ... e definitions:&nbsp;&nbsp;"         */
    0, 52, 10, 6, 1, 0, 0, '&', 0, '&', 'f', '4', '8', '5', 0, 'T', 'h',
    'r', 'o', 't', 't', 'l', 'e', 32, 'p', 'i', 'p', 'e', 32, 'd', 'e',
    'f', 'i', 'n', 'i', 't', 'i', 'o', 'n', 's', ':', '&', 'n', 'b',
    's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD TEXTUAL f486 NAME=p ... =40 MAX=80 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '(', 0, 'P', 'f', '4', '8', '6', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f487 NAME=L ... SL interface?:&nbsp;&nbsp;"         */
    0, 48, 10, 6, 1, 0, 0, '"', 0, '"', 'f', '4', '8', '7', 0, 'E', 'n',
    'a', 'b', 'l', 'e', 32, 'S', 'S', 'L', 32, 'i', 'n', 't', 'e', 'r',
    'f', 'a', 'c', 'e', '?', ':', '&', 'n', 'b', 's', 'p', ';', '&',
    'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD BOOLEAN f488 NAME=s ... d TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '4', '8', '8', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  Xitami/Pro only                                                      */
    0, 17, 0, 'X', 'i', 't', 'a', 'm', 'i', '/', 'P', 'r', 'o', 32, 'o',
    'n', 'l', 'y', 10,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f489 NAME=L ... L config file:&nbsp;&nbsp;"         */
    0, 42, 10, 6, 1, 0, 0, 28, 0, 28, 'f', '4', '8', '9', 0, 'S', 'S',
    'L', 32, 'c', 'o', 'n', 'f', 'i', 'g', 32, 'f', 'i', 'l', 'e', ':',
    '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD TEXTUAL f490 NAME=s ... =30 MAX=80 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 30, 0, 'P', 'f', '4', '9', '0', 0, 0,
    /*  <TR><TD></TD><TD>                                                    */
    0, 19, 0, '<', 'T', 'R', '>', '<', 'T', 'D', '>', '<', '/', 'T',
    'D', '>', '<', 'T', 'D', '>', 10,
    /*  <HR>                                                                 */
    0, 6, 0, '<', 'H', 'R', '>', 10,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f491 NAME=L ... t URI mapping:&nbsp;&nbsp;"         */
    0, 43, 10, 6, 1, 0, 0, 29, 0, 29, 'f', '4', '9', '1', 0, 'T', 'e',
    's', 't', 32, 'U', 'R', 'I', 32, 'm', 'a', 'p', 'p', 'i', 'n', 'g',
    ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD TEXTUAL f492 NAME=t ... E=50 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '2', 0, '2', 'f', '4', '9', '2', 0, 0,
    /*  !--ACTION test  LABEL="Test" ... vent CONFIRM="" TYPE=BUTTON         */
    0, 24, 20, 0, 1, (byte) ((word) test_event / 256), (byte) ((word)
    test_event & 255), 0, 10, 0, 0, 0, 0, 0, 't', 'e', 's', 't', 0, 'T',
    'e', 's', 't', 0, 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 221,
    /*  !--FIELD TEXTUAL f493 NAME=L ... lt of mapping:&nbsp;&nbsp;"         */
    0, 44, 10, 6, 1, 0, 0, 30, 0, 30, 'f', '4', '9', '3', 0, 'R', 'e',
    's', 'u', 'l', 't', 32, 'o', 'f', 32, 'm', 'a', 'p', 'p', 'i', 'n',
    'g', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p',
    ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, ':',
    /*  !--FIELD TEXTUAL f494 NAME=m ... E=50 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 6, 1, 0, 0, '2', 0, '2', 'f', '4', '9', '4', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 's',
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 6, 186,
    /*  </FORM>                                                              */
    0, 9, 0, '<', '/', 'F', 'O', 'R', 'M', '>', 10,
    /*  <HR>                                                                 */
    0, 4, 1, 0, 13, 170,
    /*  <TABLE WIDTH=100%><TR>                                               */
    0, 24, 0, '<', 'T', 'A', 'B', 'L', 'E', 32, 'W', 'I', 'D', 'T', 'H',
    '=', '1', '0', '0', '%', '>', '<', 'T', 'R', '>', 10,
    /*  <TD><IMG SRC="/admin/im0096c.gif"                                    */
    0, 35, 0, '<', 'T', 'D', '>', '<', 'I', 'M', 'G', 32, 'S', 'R', 'C',
    '=', '"', '/', 'a', 'd', 'm', 'i', 'n', '/', 'i', 'm', '0', '0',
    '9', '6', 'c', '.', 'g', 'i', 'f', '"', 10,
    /*  WIDTH=96 HEIGHT=36>                                                  */
    0, 21, 0, 'W', 'I', 'D', 'T', 'H', '=', '9', '6', 32, 'H', 'E', 'I',
    'G', 'H', 'T', '=', '3', '6', '>', 10,
    /*  <TD ALIGN=CENTER><FONT SIZE= ... 9 1996-99 iMatix Corporation        */
    0, 75, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'C', 'E',
    'N', 'T', 'E', 'R', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z',
    'E', '=', 45, '1', '>', 'C', 'o', 'p', 'y', 'r', 'i', 'g', 'h', 't',
    32, '&', '#', '1', '6', '9', 32, '1', '9', '9', '6', 45, '9', '9',
    32, 'i', 'M', 'a', 't', 'i', 'x', 32, 'C', 'o', 'r', 'p', 'o', 'r',
    'a', 't', 'i', 'o', 'n', 10,
    /*  <BR>Powered by iMatix Studio 1.0                                     */
    0, 34, 0, '<', 'B', 'R', '>', 'P', 'o', 'w', 'e', 'r', 'e', 'd', 32,
    'b', 'y', 32, 'i', 'M', 'a', 't', 'i', 'x', 32, 'S', 't', 'u', 'd',
    'i', 'o', 32, '1', '.', '0', 10,
    /*  <TD ALIGN=RIGHT><FONT SIZE=-1>#(date) #(time)                        */
    0, 47, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'R', 'I',
    'G', 'H', 'T', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z', 'E',
    '=', 45, '1', '>', '#', '(', 'd', 'a', 't', 'e', ')', 32, '#', '(',
    't', 'i', 'm', 'e', ')', 10,
    /*  <BR>#(product) v2.5b3                                                */
    0, 23, 0, '<', 'B', 'R', '>', '#', '(', 'p', 'r', 'o', 'd', 'u',
    'c', 't', ')', 32, 'v', '2', '.', '5', 'b', '3', 10,
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 6, 186,
    /*  </BODY></HTML>                                                       */
    0, 16, 0, '<', '/', 'B', 'O', 'D', 'Y', '>', '<', '/', 'H', 'T',
    'M', 'L', '>', 10,
    /*  <SCRIPT LANGUAGE="JavaScript"><!--                                   */
    0, 4, 1, 0, 0, 'l',
    /*  function focus() {    if ("# ... us).focus();}// --></SCRIPT>        */
    0, 122, 0, 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', 32, 'f', 'o',
    'c', 'u', 's', '(', ')', 32, '{', 10, 10, 32, 32, 32, 32, 'i', 'f',
    32, '(', '"', '#', '(', '_', 'f', 'o', 'c', 'u', 's', ')', '"', 32,
    '!', '=', 32, '"', 'j', 's', 'a', 'c', 't', 'i', 'o', 'n', '"', ')',
    10, 10, 32, 32, 32, 32, 32, 32, 32, 32, 'd', 'o', 'c', 'u', 'm',
    'e', 'n', 't', '.', 'f', 'o', 'r', 'm', 's', '[', '0', ']', '.',
    '#', '(', '_', 'f', 'o', 'c', 'u', 's', ')', '.', 'f', 'o', 'c',
    'u', 's', '(', ')', ';', 10, 10, '}', 10, 10, '/', '/', 32, 45, 45,
    '>', '<', '/', 'S', 'C', 'R', 'I', 'P', 'T', '>', 10,
    0, 0, 0
    };

static FIELD_DEFN xiadm31_fields [] = {
    { 0, 1820, 80 },                    /*  message_to_user                 */
    { 82, 1960, 4 },                    /*  main_config                     */
    { 88, 2054, 36 },                   /*  l_supervisor                    */
    { 126, 2144, 1 },                   /*  supervisor                      */
    { 129, 2183, 32 },                  /*  l_cache_defaults                */
    { 163, 2237, 1 },                   /*  cache_defaults                  */
    { 166, 2268, 38 },                  /*  l_hostname                      */
    { 206, 2328, 80 },                  /*  hostname                        */
    { 288, 2363, 31 },                  /*  l_priority                      */
    { 321, 2416, 3 },                   /*  priority                        */
    { 326, 2498, 25 },                  /*  l_portbase                      */
    { 353, 2545, 5 },                   /*  portbase                        */
    { 360, 2578, 34 },                  /*  l_base_host                     */
    { 396, 2634, 80 },                  /*  base_host                       */
    { 478, 2662, 30 },                  /*  l_ipaddress                     */
    { 510, 2714, 3 },                   /*  ipaddress                       */
    { 515, 2753, 37 },                  /*  l_temp_dir                      */
    { 554, 2812, 100 },                 /*  temp_dir                        */
    { 656, 2874, 38 },                  /*  l_debug_dir                     */
    { 696, 2934, 100 },                 /*  debug_dir                       */
    { 798, 2968, 33 },                  /*  l_lrwp_enabled                  */
    { 833, 3023, 1 },                   /*  lrwp_enabled                    */
    { 836, 3054, 33 },                  /*  l_lrwp_port                     */
    { 871, 3109, 5 },                   /*  lrwp_port                       */
    { 878, 3142, 25 },                  /*  l_lrwp_webmask                  */
    { 905, 3189, 80 },                  /*  lrwp_webmask                    */
    { 987, 3217, 38 },                  /*  l_pipedef                       */
    { 1027, 3277, 80 },                 /*  pipedef                         */
    { 1109, 3305, 34 },                 /*  l_ssl_enabled                   */
    { 1145, 3361, 1 },                  /*  ssl_enabled                     */
    { 1148, 3411, 28 },                 /*  l_ssl_filename                  */
    { 1178, 3461, 80 },                 /*  ssl_filename                    */
    { 1260, 3518, 29 },                 /*  l_test_uri                      */
    { 1291, 3569, 50 },                 /*  test_uri                        */
    { 1343, 3623, 30 },                 /*  l_mapped_uri                    */
    { 1375, 3675, 50 },                 /*  mapped_uri                      */
    { 1427, 0, 0 },                     /*  -- sentinel --                  */
    };

/*  The data of a form is a list of attributes and fields                    */

typedef struct {
    byte   message_to_user_a    ;
    char   message_to_user      [80 + 1];
    byte   main_config_a        ;
    char   main_config          [4 + 1];
    byte   l_supervisor_a       ;
    char   l_supervisor         [36 + 1];
    byte   supervisor_a         ;
    char   supervisor           [1 + 1];
    byte   l_cache_defaults_a   ;
    char   l_cache_defaults     [32 + 1];
    byte   cache_defaults_a     ;
    char   cache_defaults       [1 + 1];
    byte   l_hostname_a         ;
    char   l_hostname           [38 + 1];
    byte   hostname_a           ;
    char   hostname             [80 + 1];
    byte   l_priority_a         ;
    char   l_priority           [31 + 1];
    byte   priority_a           ;
    char   priority             [3 + 1];
    byte   l_portbase_a         ;
    char   l_portbase           [25 + 1];
    byte   portbase_a           ;
    char   portbase             [5 + 1];
    byte   l_base_host_a        ;
    char   l_base_host          [34 + 1];
    byte   base_host_a          ;
    char   base_host            [80 + 1];
    byte   l_ipaddress_a        ;
    char   l_ipaddress          [30 + 1];
    byte   ipaddress_a          ;
    char   ipaddress            [3 + 1];
    byte   l_temp_dir_a         ;
    char   l_temp_dir           [37 + 1];
    byte   temp_dir_a           ;
    char   temp_dir             [100 + 1];
    byte   l_debug_dir_a        ;
    char   l_debug_dir          [38 + 1];
    byte   debug_dir_a          ;
    char   debug_dir            [100 + 1];
    byte   l_lrwp_enabled_a     ;
    char   l_lrwp_enabled       [33 + 1];
    byte   lrwp_enabled_a       ;
    char   lrwp_enabled         [1 + 1];
    byte   l_lrwp_port_a        ;
    char   l_lrwp_port          [33 + 1];
    byte   lrwp_port_a          ;
    char   lrwp_port            [5 + 1];
    byte   l_lrwp_webmask_a     ;
    char   l_lrwp_webmask       [25 + 1];
    byte   lrwp_webmask_a       ;
    char   lrwp_webmask         [80 + 1];
    byte   l_pipedef_a          ;
    char   l_pipedef            [38 + 1];
    byte   pipedef_a            ;
    char   pipedef              [80 + 1];
    byte   l_ssl_enabled_a      ;
    char   l_ssl_enabled        [34 + 1];
    byte   ssl_enabled_a        ;
    char   ssl_enabled          [1 + 1];
    byte   l_ssl_filename_a     ;
    char   l_ssl_filename       [28 + 1];
    byte   ssl_filename_a       ;
    char   ssl_filename         [80 + 1];
    byte   l_test_uri_a         ;
    char   l_test_uri           [29 + 1];
    byte   test_uri_a           ;
    char   test_uri             [50 + 1];
    byte   l_mapped_uri_a       ;
    char   l_mapped_uri         [30 + 1];
    byte   mapped_uri_a         ;
    char   mapped_uri           [50 + 1];
    byte   back_a;
    byte   save_a;
    byte   default_a;
    byte   undo_a;
    byte   console_a;
    byte   halt_a;
    byte   restart_a;
    byte   exit_a;
    byte   ok_a;
    byte   cancel_a;
    byte   test_a;
    } XIADM31_DATA;

/*  The form definition collects these tables into a header                  */

static FORM_DEFN form_xiadm31 = {
    xiadm31_blocks,
    xiadm31_fields,
    147,                                /*  Number of blocks in form        */
    36,                                 /*  Number of fields in form        */
    11,                                 /*  Number of actions in form       */
    1427,                               /*  Size of fields                  */
    "xiadm31",                          /*  Name of form                    */
    };

#endif                                  /*  End included file               */
