/*---------------------------------------------------------------------------
 *  xiadm28.h - HTML form definition
 *
 *  Generated 2000/04/01, 16:13:44 by fxgen 2.0
 *  See Studio on-line help pages at <http://www.imatix.com>.
 *---------------------------------------------------------------------------*/

#ifndef __FORM_XIADM28__
#define __FORM_XIADM28__

#include "sfl.h"
#include "formio.h"


/*  Constants defining size of tables, etc.                                  */

#define XIADM28_MESSAGE_TO_USER             0
#define XIADM28_L_ENABLED                   1
#define XIADM28_ENABLED                     2
#define XIADM28_L_FILEEXT1                  3
#define XIADM28_FILEEXT1                    4
#define XIADM28_L_FILEEXT2                  5
#define XIADM28_FILEEXT2                    6
#define XIADM28_L_FILEEXT3                  7
#define XIADM28_FILEEXT3                    8
#define XIADM28_L_FILEEXT4                  9
#define XIADM28_FILEEXT4                    10
#define XIADM28_L_FILEEXT5                  11
#define XIADM28_FILEEXT5                    12
#define XIADM28_L_FILEEXT6                  13
#define XIADM28_FILEEXT6                    14
#define XIADM28_L_EXEC                      15
#define XIADM28_EXEC                        16
#define XIADM28_L_TIMEFMT                   17
#define XIADM28_TIMEFMT                     18
#define XIADM28_L_SIZEFMT                   19
#define XIADM28_SIZEFMT                     20
#define XIADM28_L_ERRMSG                    21
#define XIADM28_ERRMSG                      22
#define XIADM28_L_TIMEOUT                   23
#define XIADM28_TIMEOUT                     24

/*  This table contains each block in the form                               */

static byte xiadm28_blocks [] = {
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
    0, 68, 0, '<', 'A', 32, 'H', 'R', 'E', 'F', '=', '"', '/', 'x', 'i',
    't', 'a', 'm', 'i', '/', 'i', 'n', 'd', 'e', 'x', '4', '.', 'h',
    't', 'm', '#', 'c', 'o', 'n', 'f', 'i', 'g', '_', 's', 's', 'i',
    '"', 32, 'T', 'A', 'R', 'G', 'E', 'T', '=', '"', 'H', 'e', 'l', 'p',
    '"', 32, 'T', 'I', 'T', 'L', 'E', '=', '"', 'H', 'e', 'l', 'p', '"',
    10,
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
    /*  <TD ALIGN=CENTER><FONT SIZE= ... Includes) Properties </FONT>        */
    0, 90, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'C', 'E',
    'N', 'T', 'E', 'R', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z',
    'E', '=', '+', '1', '>', '#', '(', 'c', 'o', 'n', 'f', 'i', 'g',
    ')', 32, 45, 32, 'S', 'S', 'I', 32, '(', 'S', 'e', 'r', 'v', 'e',
    'r', 45, 'S', 'i', 'd', 'e', 32, 'I', 'n', 'c', 'l', 'u', 'd', 'e',
    's', ')', 32, 'P', 'r', 'o', 'p', 'e', 'r', 't', 'i', 'e', 's', 32,
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
    0, 4, 1, 0, 5, 133,
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 6, 192,
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
    /*  <TABLE WIDTH="100%">                                                 */
    0, 22, 0, '<', 'T', 'A', 'B', 'L', 'E', 32, 'W', 'I', 'D', 'T', 'H',
    '=', '"', '1', '0', '0', '%', '"', '>', 10,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 39, 0, '<', 'T', 'R', '>', '<', 'T', 'D', 32, 'A', 'L', 'I', 'G',
    'N', '=', 'L', 'E', 'F', 'T', 32, 'V', 'A', 'L', 'I', 'G', 'N', '=',
    'T', 'O', 'P', 32, 'N', 'O', 'W', 'R', 'A', 'P', '>', 10,
    /*  !--FIELD TEXTUAL f396 NAME=L ... ="SSI enabled?&nbsp;&nbsp;"         */
    0, 38, 10, 6, 1, 0, 0, 24, 0, 24, 'f', '3', '9', '6', 0, 'S', 'S',
    'I', 32, 'e', 'n', 'a', 'b', 'l', 'e', 'd', '?', '&', 'n', 'b', 's',
    'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 36, 0, '<', '/', 'T', 'D', '>', '<', 'T', 'D', 32, 'A', 'L', 'I',
    'G', 'N', '=', 'L', 'E', 'F', 'T', 32, 'W', 'I', 'D', 'T', 'H', '=',
    '"', '"', '8', '0', '%', '"', '"', '>', 10,
    /*  !--FIELD BOOLEAN f397 NAME=enabled TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '3', '9', '7', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 12, 0, '<', '/', 'T', 'D', '>', '<', '/', 'T', 'R', '>', 10,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 198,
    /*  !--FIELD TEXTUAL f398 NAME=L ... le extensions:&nbsp;&nbsp;"         */
    0, 52, 10, 6, 1, 0, 0, '&', 0, '&', 'f', '3', '9', '8', 0, 'F', 'o',
    'r', 32, 't', 'h', 'e', 's', 'e', 32, 'f', 'i', 'l', 'e', 32, 'e',
    'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', ':', '&', 'n', 'b',
    's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 23,
    /*  !--FIELD TEXTUAL f399 NAME=f ... ZE=6 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 6, 0, 6, 'f', '3', '9', '9', 0, 0,
    /*  !--FIELD TEXTUAL f400 NAME=L_fileext2 VALUE="&nbsp;"                 */
    0, 20, 10, 6, 1, 0, 0, 6, 0, 6, 'f', '4', '0', '0', 0, '&', 'n',
    'b', 's', 'p', ';', 0,
    /*  !--FIELD TEXTUAL f401 NAME=f ... ZE=6 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 6, 0, 6, 'f', '4', '0', '1', 0, 0,
    /*  !--FIELD TEXTUAL f402 NAME=L_fileext3 VALUE="&nbsp;"                 */
    0, 20, 10, 6, 1, 0, 0, 6, 0, 6, 'f', '4', '0', '2', 0, '&', 'n',
    'b', 's', 'p', ';', 0,
    /*  !--FIELD TEXTUAL f403 NAME=f ... ZE=6 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 6, 0, 6, 'f', '4', '0', '3', 0, 0,
    /*  !--FIELD TEXTUAL f404 NAME=L_fileext4 VALUE="&nbsp;"                 */
    0, 20, 10, 6, 1, 0, 0, 6, 0, 6, 'f', '4', '0', '4', 0, '&', 'n',
    'b', 's', 'p', ';', 0,
    /*  !--FIELD TEXTUAL f405 NAME=f ... ZE=6 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 6, 0, 6, 'f', '4', '0', '5', 0, 0,
    /*  !--FIELD TEXTUAL f406 NAME=L_fileext5 VALUE="&nbsp;"                 */
    0, 20, 10, 6, 1, 0, 0, 6, 0, 6, 'f', '4', '0', '6', 0, '&', 'n',
    'b', 's', 'p', ';', 0,
    /*  !--FIELD TEXTUAL f407 NAME=f ... ZE=6 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 6, 0, 6, 'f', '4', '0', '7', 0, 0,
    /*  !--FIELD TEXTUAL f408 NAME=L_fileext6 VALUE="&nbsp;"                 */
    0, 20, 10, 6, 1, 0, 0, 6, 0, 6, 'f', '4', '0', '8', 0, '&', 'n',
    'b', 's', 'p', ';', 0,
    /*  !--FIELD TEXTUAL f409 NAME=f ... ZE=6 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 6, 0, 6, 'f', '4', '0', '9', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'P',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 198,
    /*  !--FIELD TEXTUAL f410 NAME=L ... #exec command?&nbsp;&nbsp;"         */
    0, 51, 10, 6, 1, 0, 0, '%', 0, '%', 'f', '4', '1', '0', 0, 'P', 'e',
    'r', 'm', 'i', 't', 32, 'S', 'S', 'I', 32, '#', 'e', 'x', 'e', 'c',
    32, 'c', 'o', 'm', 'm', 'a', 'n', 'd', '?', '&', 'n', 'b', 's', 'p',
    ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 23,
    /*  !--FIELD BOOLEAN f411 NAME=exec TRUE=yes FALSE=no VALUE=0            */
    0, 17, 15, 0, 1, 'f', '4', '1', '1', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'P',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 198,
    /*  !--FIELD TEXTUAL f412 NAME=L ... r time fields:&nbsp;&nbsp;"         */
    0, 49, 10, 6, 1, 0, 0, '#', 0, '#', 'f', '4', '1', '2', 0, 'F', 'o',
    'r', 'm', 'a', 't', 32, 'f', 'o', 'r', 32, 't', 'i', 'm', 'e', 32,
    'f', 'i', 'e', 'l', 'd', 's', ':', '&', 'n', 'b', 's', 'p', ';',
    '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 23,
    /*  !--FIELD TEXTUAL f413 NAME=t ... =40 MAX=80 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '(', 0, 'P', 'f', '4', '1', '3', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'P',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 198,
    /*  !--FIELD TEXTUAL f414 NAME=L ... r size fields:&nbsp;&nbsp;"         */
    0, 49, 10, 6, 1, 0, 0, '#', 0, '#', 'f', '4', '1', '4', 0, 'F', 'o',
    'r', 'm', 'a', 't', 32, 'f', 'o', 'r', 32, 's', 'i', 'z', 'e', 32,
    'f', 'i', 'e', 'l', 'd', 's', ':', '&', 'n', 'b', 's', 'p', ';',
    '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 23,
    /*  !--FIELD TEXTUAL f415 NAME=s ... E=10 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 10, 0, 10, 'f', '4', '1', '5', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'P',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 198,
    /*  !--FIELD TEXTUAL f416 NAME=L ... error message:&nbsp;&nbsp;"         */
    0, 44, 10, 6, 1, 0, 0, 30, 0, 30, 'f', '4', '1', '6', 0, 'S', 'S',
    'I', 32, 'e', 'r', 'r', 'o', 'r', 32, 'm', 'e', 's', 's', 'a', 'g',
    'e', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p',
    ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 23,
    /*  !--FIELD TEXTUAL f417 NAME=e ... =40 MAX=80 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '(', 0, 'P', 'f', '4', '1', '7', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'P',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 198,
    /*  !--FIELD TEXTUAL f418 NAME=L ... r #exec calls:&nbsp;&nbsp;"         */
    0, 50, 10, 6, 1, 0, 0, '$', 0, '$', 'f', '4', '1', '8', 0, 'T', 'i',
    'm', 'e', 'o', 'u', 't', 32, 'f', 'o', 'r', 32, '#', 'e', 'x', 'e',
    'c', 32, 'c', 'a', 'l', 'l', 's', ':', '&', 'n', 'b', 's', 'p', ';',
    '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 23,
    /*  !--FIELD NUMERIC f419 NAME=t ... MMA=0 SIZE=8 MAX=? VALUE=""         */
    0, 19, 11, 0, 1, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, 'f', '4', '1', '9',
    0, 0,
    /*  seconds                                                              */
    0, 9, 0, 's', 'e', 'c', 'o', 'n', 'd', 's', 10,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'P',
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 6, 192,
    /*  </FORM>                                                              */
    0, 9, 0, '<', '/', 'F', 'O', 'R', 'M', '>', 10,
    /*  <HR>                                                                 */
    0, 6, 0, '<', 'H', 'R', '>', 10,
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
    0, 4, 1, 0, 6, 192,
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

static FIELD_DEFN xiadm28_fields [] = {
    { 0, 1826, 80 },                    /*  message_to_user                 */
    { 82, 2031, 24 },                   /*  l_enabled                       */
    { 108, 2109, 1 },                   /*  enabled                         */
    { 111, 2148, 38 },                  /*  l_fileext1                      */
    { 151, 2208, 6 },                   /*  fileext1                        */
    { 159, 2224, 6 },                   /*  l_fileext2                      */
    { 167, 2246, 6 },                   /*  fileext2                        */
    { 175, 2262, 6 },                   /*  l_fileext3                      */
    { 183, 2284, 6 },                   /*  fileext3                        */
    { 191, 2300, 6 },                   /*  l_fileext4                      */
    { 199, 2322, 6 },                   /*  fileext4                        */
    { 207, 2338, 6 },                   /*  l_fileext5                      */
    { 215, 2360, 6 },                   /*  fileext5                        */
    { 223, 2376, 6 },                   /*  l_fileext6                      */
    { 231, 2398, 6 },                   /*  fileext6                        */
    { 239, 2426, 37 },                  /*  l_exec                          */
    { 278, 2485, 1 },                   /*  exec                            */
    { 281, 2516, 35 },                  /*  l_timefmt                       */
    { 318, 2573, 80 },                  /*  timefmt                         */
    { 400, 2601, 35 },                  /*  l_sizefmt                       */
    { 437, 2658, 10 },                  /*  sizefmt                         */
    { 449, 2686, 30 },                  /*  l_errmsg                        */
    { 481, 2738, 80 },                  /*  errmsg                          */
    { 563, 2766, 36 },                  /*  l_timeout                       */
    { 601, 2824, 8 },                   /*  timeout                         */
    { 611, 0, 0 },                      /*  -- sentinel --                  */
    };

/*  The data of a form is a list of attributes and fields                    */

typedef struct {
    byte   message_to_user_a    ;
    char   message_to_user      [80 + 1];
    byte   l_enabled_a          ;
    char   l_enabled            [24 + 1];
    byte   enabled_a            ;
    char   enabled              [1 + 1];
    byte   l_fileext1_a         ;
    char   l_fileext1           [38 + 1];
    byte   fileext1_a           ;
    char   fileext1             [6 + 1];
    byte   l_fileext2_a         ;
    char   l_fileext2           [6 + 1];
    byte   fileext2_a           ;
    char   fileext2             [6 + 1];
    byte   l_fileext3_a         ;
    char   l_fileext3           [6 + 1];
    byte   fileext3_a           ;
    char   fileext3             [6 + 1];
    byte   l_fileext4_a         ;
    char   l_fileext4           [6 + 1];
    byte   fileext4_a           ;
    char   fileext4             [6 + 1];
    byte   l_fileext5_a         ;
    char   l_fileext5           [6 + 1];
    byte   fileext5_a           ;
    char   fileext5             [6 + 1];
    byte   l_fileext6_a         ;
    char   l_fileext6           [6 + 1];
    byte   fileext6_a           ;
    char   fileext6             [6 + 1];
    byte   l_exec_a             ;
    char   l_exec               [37 + 1];
    byte   exec_a               ;
    char   exec                 [1 + 1];
    byte   l_timefmt_a          ;
    char   l_timefmt            [35 + 1];
    byte   timefmt_a            ;
    char   timefmt              [80 + 1];
    byte   l_sizefmt_a          ;
    char   l_sizefmt            [35 + 1];
    byte   sizefmt_a            ;
    char   sizefmt              [10 + 1];
    byte   l_errmsg_a           ;
    char   l_errmsg             [30 + 1];
    byte   errmsg_a             ;
    char   errmsg               [80 + 1];
    byte   l_timeout_a          ;
    char   l_timeout            [36 + 1];
    byte   timeout_a            ;
    char   timeout              [8 + 1];
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
    } XIADM28_DATA;

/*  The form definition collects these tables into a header                  */

static FORM_DEFN form_xiadm28 = {
    xiadm28_blocks,
    xiadm28_fields,
    97,                                 /*  Number of blocks in form        */
    25,                                 /*  Number of fields in form        */
    10,                                 /*  Number of actions in form       */
    611,                                /*  Size of fields                  */
    "xiadm28",                          /*  Name of form                    */
    };

#endif                                  /*  End included file               */
