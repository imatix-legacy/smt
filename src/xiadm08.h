/*---------------------------------------------------------------------------
 *  xiadm08.h - HTML form definition
 *
 *  Generated 2000/04/01, 16:13:44 by fxgen 2.0
 *  See Studio on-line help pages at <http://www.imatix.com>.
 *---------------------------------------------------------------------------*/

#ifndef __FORM_XIADM08__
#define __FORM_XIADM08__

#include "sfl.h"
#include "formio.h"


/*  Constants defining size of tables, etc.                                  */

#define XIADM08_MESSAGE_TO_USER             0
#define XIADM08_MAIN_CONFIG                 1
#define XIADM08_L_LOG_DIR                   2
#define XIADM08_LOG_DIR                     3
#define XIADM08_L_DEFINE_SERVER_LOG         4
#define XIADM08_SERVER_MSGS                 5
#define XIADM08_L_DEFINE_ACCESS_LOG         6
#define XIADM08_HTTP_ACCESS                 7
#define XIADM08_L_DEFINE_ERROR_LOG          8
#define XIADM08_HTTP_ERROR                  9
#define XIADM08_L_DEFINE_FTP_LOG            10
#define XIADM08_FTP_ACCESS                  11
#define XIADM08_L_DEFINE_FTPERR_LOG         12
#define XIADM08_FTP_ERROR                   13
#define XIADM08_L_PRIMARY                   14
#define XIADM08_PRIMARY                     15
#define XIADM08_L_SECONDARY                 16
#define XIADM08_SECONDARY                   17
#define XIADM08_L_RECURSE                   18
#define XIADM08_RECURSE                     19
#define XIADM08_L_DEBUG                     20
#define XIADM08_DEBUG                       21

/*  This table contains each block in the form                               */

static byte xiadm08_blocks [] = {
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
    0, 74, 0, '<', 'A', 32, 'H', 'R', 'E', 'F', '=', '"', '/', 'x', 'i',
    't', 'a', 'm', 'i', '/', 'i', 'n', 'd', 'e', 'x', '4', '.', 'h',
    't', 'm', '#', 'c', 'o', 'n', 'f', 'i', 'g', '_', 's', 'e', 'r',
    'v', 'e', 'r', 'l', 'o', 'g', '"', 32, 'T', 'A', 'R', 'G', 'E', 'T',
    '=', '"', 'H', 'e', 'l', 'p', '"', 32, 'T', 'I', 'T', 'L', 'E', '=',
    '"', 'H', 'e', 'l', 'p', '"', 10,
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
    /*  <TD ALIGN=CENTER><FONT SIZE=+1>#(config) - Log Files </FONT>         */
    0, 62, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'C', 'E',
    'N', 'T', 'E', 'R', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z',
    'E', '=', '+', '1', '>', '#', '(', 'c', 'o', 'n', 'f', 'i', 'g',
    ')', 32, 45, 32, 'L', 'o', 'g', 32, 'F', 'i', 'l', 'e', 's', 32,
    '<', '/', 'F', 'O', 'N', 'T', '>', 10,
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
    0, 4, 1, 0, 5, 'o',
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 6, 170,
    /*  <TABLE CELLSPACING=0 CELLPADDING=0 WIDTH=100%><TR>                   */
    0, 52, 0, '<', 'T', 'A', 'B', 'L', 'E', 32, 'C', 'E', 'L', 'L', 'S',
    'P', 'A', 'C', 'I', 'N', 'G', '=', '0', 32, 'C', 'E', 'L', 'L', 'P',
    'A', 'D', 'D', 'I', 'N', 'G', '=', '0', 32, 'W', 'I', 'D', 'T', 'H',
    '=', '1', '0', '0', '%', '>', '<', 'T', 'R', '>', 10,
    /*  <TD ALIGN=LEFT><FONT SIZE=-1>                                        */
    0, 31, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'L', 'E',
    'F', 'T', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z', 'E', '=',
    45, '1', '>', 10,
    /*  !--ACTION serverlog  LABEL=" ... event CONFIRM="" TYPE=PLAIN         */
    0, 34, 20, 1, 1, (byte) ((word) serverlog_event / 256), (byte)
    ((word) serverlog_event & 255), 0, 8, 0, 0, 0, 0, 0, 's', 'e', 'r',
    'v', 'e', 'r', 'l', 'o', 'g', 0, 'S', 'e', 'r', 'v', 'e', 'r', 'L',
    'o', 'g', 0, 0, 0,
    /*  !--ACTION accesslog  LABEL=" ... event CONFIRM="" TYPE=PLAIN         */
    0, 34, 20, 1, 1, (byte) ((word) accesslog_event / 256), (byte)
    ((word) accesslog_event & 255), 0, 9, 0, 0, 0, 0, 0, 'a', 'c', 'c',
    'e', 's', 's', 'l', 'o', 'g', 0, 'A', 'c', 'c', 'e', 's', 's', 'L',
    'o', 'g', 0, 0, 0,
    /*  !--ACTION errorlog  LABEL="E ... event CONFIRM="" TYPE=PLAIN         */
    0, 32, 20, 1, 1, (byte) ((word) errorlog_event / 256), (byte)
    ((word) errorlog_event & 255), 0, 10, 0, 0, 0, 0, 0, 'e', 'r', 'r',
    'o', 'r', 'l', 'o', 'g', 0, 'E', 'r', 'r', 'o', 'r', 'L', 'o', 'g',
    0, 0, 0,
    /*  !--ACTION ftplog  LABEL="Ftp ... event CONFIRM="" TYPE=PLAIN         */
    0, 28, 20, 1, 1, (byte) ((word) ftplog_event / 256), (byte) ((word)
    ftplog_event & 255), 0, 11, 0, 0, 0, 0, 0, 'f', 't', 'p', 'l', 'o',
    'g', 0, 'F', 't', 'p', 'L', 'o', 'g', 0, 0, 0,
    /*  !--ACTION ftperrors  LABEL=" ... event CONFIRM="" TYPE=PLAIN         */
    0, 34, 20, 1, 1, (byte) ((word) ftperrors_event / 256), (byte)
    ((word) ftperrors_event & 255), 0, 12, 0, 0, 0, 0, 0, 'f', 't', 'p',
    'e', 'r', 'r', 'o', 'r', 's', 0, 'F', 't', 'p', 'E', 'r', 'r', 'o',
    'r', 's', 0, 0, 0,
    /*  <TD ALIGN=RIGHT><FONT SIZE=-1>                                       */
    0, 32, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'R', 'I',
    'G', 'H', 'T', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z', 'E',
    '=', 45, '1', '>', 10,
    /*  !--ACTION server  LABEL="Ser ... event CONFIRM="" TYPE=PLAIN         */
    0, 28, 20, 1, 1, (byte) ((word) server_event / 256), (byte) ((word)
    server_event & 255), 0, 13, 0, 0, 0, 0, 0, 's', 'e', 'r', 'v', 'e',
    'r', 0, 'S', 'e', 'r', 'v', 'e', 'r', 0, 0, 0,
    /*  !--ACTION vhosts  LABEL="Vho ... event CONFIRM="" TYPE=PLAIN         */
    0, 28, 20, 1, 1, (byte) ((word) vhosts_event / 256), (byte) ((word)
    vhosts_event & 255), 0, 14, 0, 0, 0, 0, 0, 'v', 'h', 'o', 's', 't',
    's', 0, 'V', 'h', 'o', 's', 't', 's', 0, 0, 0,
    /*  !--ACTION cgi  LABEL="CGI" E ... event CONFIRM="" TYPE=PLAIN         */
    0, 22, 20, 1, 1, (byte) ((word) cgi_event / 256), (byte) ((word)
    cgi_event & 255), 0, 15, 0, 0, 0, 0, 0, 'c', 'g', 'i', 0, 'C', 'G',
    'I', 0, 0, 0,
    /*  !--ACTION security  LABEL="S ... event CONFIRM="" TYPE=PLAIN         */
    0, 32, 20, 1, 1, (byte) ((word) security_event / 256), (byte)
    ((word) security_event & 255), 0, 16, 0, 0, 0, 0, 0, 's', 'e', 'c',
    'u', 'r', 'i', 't', 'y', 0, 'S', 'e', 'c', 'u', 'r', 'i', 't', 'y',
    0, 0, 0,
    /*  <EM>Logging</EM>                                                     */
    0, 18, 0, '<', 'E', 'M', '>', 'L', 'o', 'g', 'g', 'i', 'n', 'g',
    '<', '/', 'E', 'M', '>', 10,
    /*  !--ACTION ftp  LABEL="FTP" E ... event CONFIRM="" TYPE=PLAIN         */
    0, 22, 20, 1, 1, (byte) ((word) ftp_event / 256), (byte) ((word)
    ftp_event & 255), 0, 17, 0, 0, 0, 0, 0, 'f', 't', 'p', 0, 'F', 'T',
    'P', 0, 0, 0,
    /*  </FONT></TABLE><HR>                                                  */
    0, 21, 0, '<', '/', 'F', 'O', 'N', 'T', '>', '<', '/', 'T', 'A',
    'B', 'L', 'E', '>', '<', 'H', 'R', '>', 10,
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
    /*  !--FIELD TEXTUAL f121 NAME=L ... ile directory:&nbsp;&nbsp;"         */
    0, 45, 10, 6, 1, 0, 0, 31, 0, 31, 'f', '1', '2', '1', 0, 'L', 'o',
    'g', 32, 'f', 'i', 'l', 'e', 32, 'd', 'i', 'r', 'e', 'c', 't', 'o',
    'r', 'y', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's',
    'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 36, 0, '<', '/', 'T', 'D', '>', '<', 'T', 'D', 32, 'A', 'L', 'I',
    'G', 'N', '=', 'L', 'E', 'F', 'T', 32, 'W', 'I', 'D', 'T', 'H', '=',
    '"', '"', '8', '0', '%', '"', '"', '>', 10,
    /*  !--FIELD TEXTUAL f122 NAME=l ... E=50 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '2', 0, '2', 'f', '1', '2', '2', 0, 0,
    /*  !--IF main_config                                                    */
    0, 5, 2, 0, 1, 0, 6,
    /*  </TD></TR>                                                           */
    0, 12, 0, '<', '/', 'T', 'D', '>', '<', '/', 'T', 'R', '>', 10,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 9, 'V',
    /*  !--FIELD TEXTUAL f123 NAME=L ... rver messages:&nbsp;&nbsp;"         */
    0, 42, 10, 6, 1, 0, 0, 28, 0, 28, 'f', '1', '2', '3', 0, 'S', 'e',
    'r', 'v', 'e', 'r', 32, 'm', 'e', 's', 's', 'a', 'g', 'e', 's', ':',
    '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 9, 174,
    /*  !--ACTION define_server_log  ... LOVER="/admin/propertya.gif"        */
    0, 72, 20, 2, 1, (byte) ((word) serverlog_event / 256), (byte)
    ((word) serverlog_event & 255), 0, 18, 0, 0, 0, 0, 0, 'd', 'e', 'f',
    'i', 'n', 'e', '_', 's', 'e', 'r', 'v', 'e', 'r', '_', 'l', 'o',
    'g', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'p', 'r', 'o', 'p', 'e',
    'r', 't', 'y', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n',
    '/', 'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'a', '.', 'g', 'i',
    'f', 0, 0,
    /*  !--FIELD TEXTUAL f124 NAME=s ... E=40 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 6, 1, 0, 0, '(', 0, '(', 'f', '1', '2', '4', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 235,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 9, 'V',
    /*  !--FIELD TEXTUAL f125 NAME=L ... TP access log:&nbsp;&nbsp;"         */
    0, 42, 10, 6, 1, 0, 0, 28, 0, 28, 'f', '1', '2', '5', 0, 'H', 'T',
    'T', 'P', 32, 'a', 'c', 'c', 'e', 's', 's', 32, 'l', 'o', 'g', ':',
    '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 9, 174,
    /*  !--ACTION define_access_log  ... LOVER="/admin/propertya.gif"        */
    0, 72, 20, 2, 1, (byte) ((word) accesslog_event / 256), (byte)
    ((word) accesslog_event & 255), 0, 19, 0, 0, 0, 0, 0, 'd', 'e', 'f',
    'i', 'n', 'e', '_', 'a', 'c', 'c', 'e', 's', 's', '_', 'l', 'o',
    'g', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'p', 'r', 'o', 'p', 'e',
    'r', 't', 'y', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n',
    '/', 'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'a', '.', 'g', 'i',
    'f', 0, 0,
    /*  !--FIELD TEXTUAL f126 NAME=h ... E=40 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 6, 1, 0, 0, '(', 0, '(', 'f', '1', '2', '6', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 235,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 9, 'V',
    /*  !--FIELD TEXTUAL f127 NAME=L ... TTP error log:&nbsp;&nbsp;"         */
    0, 41, 10, 6, 1, 0, 0, 27, 0, 27, 'f', '1', '2', '7', 0, 'H', 'T',
    'T', 'P', 32, 'e', 'r', 'r', 'o', 'r', 32, 'l', 'o', 'g', ':', '&',
    'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 9, 174,
    /*  !--ACTION define_error_log   ... LOVER="/admin/propertya.gif"        */
    0, 71, 20, 2, 1, (byte) ((word) errorlog_event / 256), (byte)
    ((word) errorlog_event & 255), 0, 20, 0, 0, 0, 0, 0, 'd', 'e', 'f',
    'i', 'n', 'e', '_', 'e', 'r', 'r', 'o', 'r', '_', 'l', 'o', 'g', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', 'p', 'r', 'o', 'p', 'e', 'r',
    't', 'y', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/',
    'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'a', '.', 'g', 'i', 'f', 0,
    0,
    /*  !--FIELD TEXTUAL f128 NAME=h ... E=40 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 6, 1, 0, 0, '(', 0, '(', 'f', '1', '2', '8', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 235,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 9, 'V',
    /*  !--FIELD TEXTUAL f129 NAME=L ... TP access log:&nbsp;&nbsp;"         */
    0, 41, 10, 6, 1, 0, 0, 27, 0, 27, 'f', '1', '2', '9', 0, 'F', 'T',
    'P', 32, 'a', 'c', 'c', 'e', 's', 's', 32, 'l', 'o', 'g', ':', '&',
    'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 9, 174,
    /*  !--ACTION define_ftp_log  LA ... LOVER="/admin/propertya.gif"        */
    0, 69, 20, 2, 1, (byte) ((word) ftplog_event / 256), (byte) ((word)
    ftplog_event & 255), 0, 21, 0, 0, 0, 0, 0, 'd', 'e', 'f', 'i', 'n',
    'e', '_', 'f', 't', 'p', '_', 'l', 'o', 'g', 0, '/', 'a', 'd', 'm',
    'i', 'n', '/', 'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', '.', 'g',
    'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'p', 'r', 'o', 'p',
    'e', 'r', 't', 'y', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  !--FIELD TEXTUAL f130 NAME=f ... E=40 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 6, 1, 0, 0, '(', 0, '(', 'f', '1', '3', '0', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 235,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 9, 'V',
    /*  !--FIELD TEXTUAL f131 NAME=L ... FTP error log:&nbsp;&nbsp;"         */
    0, 40, 10, 6, 1, 0, 0, 26, 0, 26, 'f', '1', '3', '1', 0, 'F', 'T',
    'P', 32, 'e', 'r', 'r', 'o', 'r', 32, 'l', 'o', 'g', ':', '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 9, 174,
    /*  !--ACTION define_ftperr_log  ... LOVER="/admin/propertya.gif"        */
    0, 72, 20, 2, 1, (byte) ((word) ftperrors_event / 256), (byte)
    ((word) ftperrors_event & 255), 0, 22, 0, 0, 0, 0, 0, 'd', 'e', 'f',
    'i', 'n', 'e', '_', 'f', 't', 'p', 'e', 'r', 'r', '_', 'l', 'o',
    'g', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'p', 'r', 'o', 'p', 'e',
    'r', 't', 'y', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n',
    '/', 'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'a', '.', 'g', 'i',
    'f', 0, 0,
    /*  !--FIELD TEXTUAL f132 NAME=f ... E=40 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 6, 1, 0, 0, '(', 0, '(', 'f', '1', '3', '2', 0, 0,
    /*  !--IF main_config                                                    */
    0, 5, 2, 0, 1, 0, 19,
    /*  <TR><TD></TD><TD>                                                    */
    0, 19, 0, '<', 'T', 'R', '>', '<', 'T', 'D', '>', '<', '/', 'T',
    'D', '>', '<', 'T', 'D', '>', 10,
    /*  <HR>                                                                 */
    0, 6, 0, '<', 'H', 'R', '>', 10,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 235,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 9, 'V',
    /*  !--FIELD TEXTUAL f133 NAME=L ... ers - primary:&nbsp;&nbsp;"         */
    0, 48, 10, 6, 1, 0, 0, '"', 0, '"', 'f', '1', '3', '3', 0, 'D', 'N',
    'S', 32, 's', 'e', 'r', 'v', 'e', 'r', 's', 32, 45, 32, 'p', 'r',
    'i', 'm', 'a', 'r', 'y', ':', '&', 'n', 'b', 's', 'p', ';', '&',
    'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 9, 174,
    /*  !--FIELD TEXTUAL f134 NAME=p ... E=20 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 20, 0, 20, 'f', '1', '3', '4', 0, 0,
    /*  !--FIELD TEXTUAL f135 NAME=L ... bsp;secondary:&nbsp;&nbsp;"         */
    0, 48, 10, 6, 1, 0, 0, '"', 0, '"', 'f', '1', '3', '5', 0, '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 's', 'e', 'c',
    'o', 'n', 'd', 'a', 'r', 'y', ':', '&', 'n', 'b', 's', 'p', ';',
    '&', 'n', 'b', 's', 'p', ';', 0,
    /*  !--FIELD TEXTUAL f136 NAME=s ... E=20 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 20, 0, 20, 'f', '1', '3', '6', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 235,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 9, 'V',
    /*  !--FIELD TEXTUAL f137 NAME=L ... rsive queries?&nbsp;&nbsp;"         */
    0, 50, 10, 6, 1, 0, 0, '$', 0, '$', 'f', '1', '3', '7', 0, 'A', 'l',
    'l', 'o', 'w', 32, 'r', 'e', 'c', 'u', 'r', 's', 'i', 'v', 'e', 32,
    'q', 'u', 'e', 'r', 'i', 'e', 's', '?', '&', 'n', 'b', 's', 'p',
    ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 9, 174,
    /*  !--FIELD BOOLEAN f138 NAME=recurse TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '1', '3', '8', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 235,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 9, 'V',
    /*  !--FIELD TEXTUAL f139 NAME=L ... e-DNS queries?&nbsp;&nbsp;"         */
    0, 52, 10, 6, 1, 0, 0, '&', 0, '&', 'f', '1', '3', '9', 0, 'D', 'e',
    'b', 'u', 'g', 32, 'r', 'e', 'v', 'e', 'r', 's', 'e', 45, 'D', 'N',
    'S', 32, 'q', 'u', 'e', 'r', 'i', 'e', 's', '?', '&', 'n', 'b', 's',
    'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 9, 174,
    /*  !--FIELD BOOLEAN f140 NAME=debug TRUE=yes FALSE=no VALUE=0           */
    0, 17, 15, 0, 1, 'f', '1', '4', '0', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 235,
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 6, 170,
    /*  </FORM>                                                              */
    0, 9, 0, '<', '/', 'F', 'O', 'R', 'M', '>', 10,
    /*  <HR>                                                                 */
    0, 4, 1, 0, 12, 255,
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
    0, 4, 1, 0, 6, 170,
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

static FIELD_DEFN xiadm08_fields [] = {
    { 0, 1804, 80 },                    /*  message_to_user                 */
    { 82, 2337, 4 },                    /*  main_config                     */
    { 88, 2431, 31 },                   /*  l_log_dir                       */
    { 121, 2516, 50 },                  /*  log_dir                         */
    { 173, 2559, 28 },                  /*  l_define_server_log             */
    { 203, 2683, 40 },                  /*  server_msgs                     */
    { 245, 2711, 28 },                  /*  l_define_access_log             */
    { 275, 2835, 40 },                  /*  http_access                     */
    { 317, 2863, 27 },                  /*  l_define_error_log              */
    { 346, 2985, 40 },                  /*  http_error                      */
    { 388, 3013, 27 },                  /*  l_define_ftp_log                */
    { 417, 3133, 40 },                  /*  ftp_access                      */
    { 459, 3161, 26 },                  /*  l_define_ftperr_log             */
    { 487, 3283, 40 },                  /*  ftp_error                       */
    { 529, 3347, 34 },                  /*  l_primary                       */
    { 565, 3403, 20 },                  /*  primary                         */
    { 587, 3419, 34 },                  /*  l_secondary                     */
    { 623, 3469, 20 },                  /*  secondary                       */
    { 645, 3497, 36 },                  /*  l_recurse                       */
    { 683, 3555, 1 },                   /*  recurse                         */
    { 686, 3586, 38 },                  /*  l_debug                         */
    { 726, 3646, 1 },                   /*  debug                           */
    { 729, 0, 0 },                      /*  -- sentinel --                  */
    };

/*  The data of a form is a list of attributes and fields                    */

typedef struct {
    byte   message_to_user_a    ;
    char   message_to_user      [80 + 1];
    byte   main_config_a        ;
    char   main_config          [4 + 1];
    byte   l_log_dir_a          ;
    char   l_log_dir            [31 + 1];
    byte   log_dir_a            ;
    char   log_dir              [50 + 1];
    byte   l_define_server_log_a ;
    char   l_define_server_log  [28 + 1];
    byte   server_msgs_a        ;
    char   server_msgs          [40 + 1];
    byte   l_define_access_log_a ;
    char   l_define_access_log  [28 + 1];
    byte   http_access_a        ;
    char   http_access          [40 + 1];
    byte   l_define_error_log_a ;
    char   l_define_error_log   [27 + 1];
    byte   http_error_a         ;
    char   http_error           [40 + 1];
    byte   l_define_ftp_log_a   ;
    char   l_define_ftp_log     [27 + 1];
    byte   ftp_access_a         ;
    char   ftp_access           [40 + 1];
    byte   l_define_ftperr_log_a ;
    char   l_define_ftperr_log  [26 + 1];
    byte   ftp_error_a          ;
    char   ftp_error            [40 + 1];
    byte   l_primary_a          ;
    char   l_primary            [34 + 1];
    byte   primary_a            ;
    char   primary              [20 + 1];
    byte   l_secondary_a        ;
    char   l_secondary          [34 + 1];
    byte   secondary_a          ;
    char   secondary            [20 + 1];
    byte   l_recurse_a          ;
    char   l_recurse            [36 + 1];
    byte   recurse_a            ;
    char   recurse              [1 + 1];
    byte   l_debug_a            ;
    char   l_debug              [38 + 1];
    byte   debug_a              ;
    char   debug                [1 + 1];
    byte   back_a;
    byte   save_a;
    byte   default_a;
    byte   undo_a;
    byte   console_a;
    byte   halt_a;
    byte   restart_a;
    byte   exit_a;
    byte   serverlog_a;
    byte   accesslog_a;
    byte   errorlog_a;
    byte   ftplog_a;
    byte   ftperrors_a;
    byte   server_a;
    byte   vhosts_a;
    byte   cgi_a;
    byte   security_a;
    byte   ftp_a;
    byte   define_server_log_a;
    byte   define_access_log_a;
    byte   define_error_log_a;
    byte   define_ftp_log_a;
    byte   define_ftperr_log_a;
    } XIADM08_DATA;

/*  The form definition collects these tables into a header                  */

static FORM_DEFN form_xiadm08 = {
    xiadm08_blocks,
    xiadm08_fields,
    119,                                /*  Number of blocks in form        */
    22,                                 /*  Number of fields in form        */
    23,                                 /*  Number of actions in form       */
    729,                                /*  Size of fields                  */
    "xiadm08",                          /*  Name of form                    */
    };

#endif                                  /*  End included file               */
