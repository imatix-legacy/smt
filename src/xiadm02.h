/*---------------------------------------------------------------------------
 *  xiadm02.h - HTML form definition
 *
 *  Generated 2000/04/01, 16:13:44 by fxgen 2.0
 *  See Studio on-line help pages at <http://www.imatix.com>.
 *---------------------------------------------------------------------------*/

#ifndef __FORM_XIADM02__
#define __FORM_XIADM02__

#include "sfl.h"
#include "formio.h"


/*  Constants defining size of tables, etc.                                  */

#define CONFIG_LIST_MAX                     15
#define XIADM02_MESSAGE_TO_USER             0
#define XIADM02_L_FILENAME                  1
#define XIADM02_L_FILEDATE                  2
#define XIADM02_L_FILESIZE                  3
#define XIADM02_FILENAME                    4
#define XIADM02_FILEDATE                    5
#define XIADM02_FILETIME                    6
#define XIADM02_FILESIZE                    7
#define XIADM02_CONFIG_LIST                 8

/*  This table contains each block in the form                               */

static byte xiadm02_blocks [] = {
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
    /*  !--ACTION new  LABEL="/admin ... " ROLLOVER="/admin/newa.gif"        */
    0, 49, 20, 2, 1, (byte) ((word) new_event / 256), (byte) ((word)
    new_event & 255), 0, 1, 0, 0, 39, 0, '(', 'n', 'e', 'w', 0, '/',
    'a', 'd', 'm', 'i', 'n', '/', '$', 'n', 'e', 'w', '.', 'g', 'i',
    'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'n', 'e', 'w', 'a', '.',
    'g', 'i', 'f', 0, 0,
    /*  !--ACTION first  LABEL="/adm ... ROLLOVER="/admin/firsta.gif"        */
    0, 55, 20, 2, 1, (byte) ((word) first_event / 256), (byte) ((word)
    first_event & 255), 0, 2, 0, 0, 39, 0, '(', 'f', 'i', 'r', 's', 't',
    0, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'f', 'i', 'r', 's', 't',
    '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'f', 'i',
    'r', 's', 't', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  !--ACTION next  LABEL="/admi ...  ROLLOVER="/admin/nexta.gif"        */
    0, 52, 20, 2, 1, (byte) ((word) next_event / 256), (byte) ((word)
    next_event & 255), 0, 3, 0, 0, 39, 0, '(', 'n', 'e', 'x', 't', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'n', 'e', 'x', 't', '.',
    'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'n', 'e', 'x',
    't', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  <A HREF="/xitami/index4.htm# ... " TARGET="Help" TITLE="Help"        */
    0, 71, 0, '<', 'A', 32, 'H', 'R', 'E', 'F', '=', '"', '/', 'x', 'i',
    't', 'a', 'm', 'i', '/', 'i', 'n', 'd', 'e', 'x', '4', '.', 'h',
    't', 'm', '#', 'v', 'i', 'r', 't', 'u', 'a', 'l', '_', 'h', 'o',
    's', 't', 's', '"', 32, 'T', 'A', 'R', 'G', 'E', 'T', '=', '"', 'H',
    'e', 'l', 'p', '"', 32, 'T', 'I', 'T', 'L', 'E', '=', '"', 'H', 'e',
    'l', 'p', '"', 10,
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
    /*  <TD ALIGN=CENTER><FONT SIZE= ...  Hosts Configuration </FONT>        */
    0, 68, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'C', 'E',
    'N', 'T', 'E', 'R', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z',
    'E', '=', '+', '1', '>', 'V', 'i', 'r', 't', 'u', 'a', 'l', 32, 'H',
    'o', 's', 't', 's', 32, 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a',
    't', 'i', 'o', 'n', 32, '<', '/', 'F', 'O', 'N', 'T', '>', 10,
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
    0, 4, 1, 0, 5, 'i',
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 6, 164,
    /*  <P>Select a configuration:<BR>                                       */
    0, 32, 0, '<', 'P', '>', 'S', 'e', 'l', 'e', 'c', 't', 32, 'a', 32,
    'c', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 't', 'i', 'o', 'n',
    ':', '<', 'B', 'R', '>', 10,
    /*  <TABLE WIDTH="90%"  CELLPADDING=0 CELLSPACING=0>                     */
    0, 50, 0, '<', 'T', 'A', 'B', 'L', 'E', 32, 'W', 'I', 'D', 'T', 'H',
    '=', '"', '9', '0', '%', '"', 32, 32, 'C', 'E', 'L', 'L', 'P', 'A',
    'D', 'D', 'I', 'N', 'G', '=', '0', 32, 'C', 'E', 'L', 'L', 'S', 'P',
    'A', 'C', 'I', 'N', 'G', '=', '0', '>', 10,
    /*  <TR>                                                                 */
    0, 6, 0, '<', 'T', 'R', '>', 10,
    /*  <TH ALIGN=CENTER VALIGN=TOP>                                         */
    0, 30, 0, '<', 'T', 'H', 32, 'A', 'L', 'I', 'G', 'N', '=', 'C', 'E',
    'N', 'T', 'E', 'R', 32, 'V', 'A', 'L', 'I', 'G', 'N', '=', 'T', 'O',
    'P', '>', 10,
    /*  !--FIELD TEXTUAL f1 NAME=L_filename VALUE="Name:"                    */
    0, 17, 10, 6, 1, 0, 0, 5, 0, 5, 'f', '1', 0, 'N', 'a', 'm', 'e',
    ':', 0,
    /*  </TH>                                                                */
    0, 7, 0, '<', '/', 'T', 'H', '>', 10,
    /*  <TH ALIGN=CENTER VALIGN=TOP COLSPAN=2>                               */
    0, 40, 0, '<', 'T', 'H', 32, 'A', 'L', 'I', 'G', 'N', '=', 'C', 'E',
    'N', 'T', 'E', 'R', 32, 'V', 'A', 'L', 'I', 'G', 'N', '=', 'T', 'O',
    'P', 32, 'C', 'O', 'L', 'S', 'P', 'A', 'N', '=', '2', '>', 10,
    /*  !--FIELD TEXTUAL f2 NAME=L_filedate VALUE="Last modified:"           */
    0, 26, 10, 6, 1, 0, 0, 14, 0, 14, 'f', '2', 0, 'L', 'a', 's', 't',
    32, 'm', 'o', 'd', 'i', 'f', 'i', 'e', 'd', ':', 0,
    /*  </TH>                                                                */
    0, 4, 1, 0, 7, 206,
    /*  <TH ALIGN=CENTER VALIGN=TOP>                                         */
    0, 4, 1, 0, 7, 155,
    /*  !--FIELD TEXTUAL f3 NAME=L_filesize VALUE="Size, lines:"             */
    0, 24, 10, 6, 1, 0, 0, 12, 0, 12, 'f', '3', 0, 'S', 'i', 'z', 'e',
    ',', 32, 'l', 'i', 'n', 'e', 's', ':', 0,
    /*  </TH>                                                                */
    0, 4, 1, 0, 7, 206,
    /*  !--REPEAT config_list  ROWS=15                                       */
    0, 7, 4, 0, 8, 0, 15, 0, 15,
    /*  </TR>                                                                */
    0, 7, 0, '<', '/', 'T', 'R', '>', 10,
    /*  <TR>                                                                 */
    0, 4, 1, 0, 7, 147,
    /*  <TD ALIGN=LEFT VALIGN=TOP>                                           */
    0, 28, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'L', 'E',
    'F', 'T', 32, 'V', 'A', 'L', 'I', 'G', 'N', '=', 'T', 'O', 'P', '>',
    10,
    /*  !--FIELD TEXTUAL f4 NAME=fil ... =40 MAX=80 UPPER=0 VALUE=""         */
    0, 12, 10, 10, 15, 0, 0, '(', 0, 'P', 'f', '4', 0, 0,
    /*  </TD>                                                                */
    0, 7, 0, '<', '/', 'T', 'D', '>', 10,
    /*  <TD ALIGN=LEFT VALIGN=TOP>                                           */
    0, 4, 1, 0, 8, 'a',
    /*  !--FIELD DATE f5 NAME=fileda ... AR=? MONTH=? DAY=? VALUE=""         */
    0, 15, 12, 6, 15, 0, 15, 0, 1, 0, 0, 0, 'f', '5', 0, 0, 0,
    /*  </TD>                                                                */
    0, 4, 1, 0, 8, 141,
    /*  <TD ALIGN=LEFT VALIGN=TOP>                                           */
    0, 4, 1, 0, 8, 'a',
    /*  !--FIELD TIME f6 NAME=fileti ... ss" SIZE=12 MAX=20 VALUE=""         */
    0, 18, 13, 6, 15, 0, 12, 'f', '6', 0, 0, 'h', 'h', ':', 'm', 'm',
    ':', 's', 's', 0,
    /*  </TD>                                                                */
    0, 4, 1, 0, 8, 141,
    /*  <TD ALIGN=LEFT VALIGN=TOP>                                           */
    0, 4, 1, 0, 8, 'a',
    /*  !--FIELD NUMERIC f7 NAME=fil ... MMA=0 SIZE=5 MAX=? VALUE=""         */
    0, 17, 11, 6, 15, 0, 5, 0, 5, 0, 0, 0, 0, 0, 0, 'f', '7', 0, 0,
    /*  </TD>                                                                */
    0, 4, 1, 0, 8, 141,
    /*  </TR>                                                                */
    0, 4, 1, 0, 8, 'R',
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 6, 164,
    /*  <BR>                                                                 */
    0, 6, 0, '<', 'B', 'R', '>', 10,
    /*  !--ACTION defaults  LABEL="D ... vent CONFIRM="" TYPE=BUTTON         */
    0, 35, 20, 0, 1, (byte) ((word) default_event / 256), (byte) ((word)
    default_event & 255), 0, 8, 0, 0, 0, 0, 0, 'd', 'e', 'f', 'a', 'u',
    'l', 't', 's', 0, 'D', 'e', 'f', 'a', 'u', 'l', 't', 's', '.', '.',
    '.', 0, 0, 0,
    /*   for all virtual hosts<BR>                                           */
    0, 28, 0, 32, 'f', 'o', 'r', 32, 'a', 'l', 'l', 32, 'v', 'i', 'r',
    't', 'u', 'a', 'l', 32, 'h', 'o', 's', 't', 's', '<', 'B', 'R', '>',
    10,
    /*  !--ACTION basehost  LABEL="B ... vent CONFIRM="" TYPE=BUTTON         */
    0, 36, 20, 0, 1, (byte) ((word) basehost_event / 256), (byte)
    ((word) basehost_event & 255), 0, 9, 0, 0, 0, 0, 0, 'b', 'a', 's',
    'e', 'h', 'o', 's', 't', 0, 'B', 'a', 's', 'e', 32, 'h', 'o', 's',
    't', '.', '.', '.', 0, 0, 0,
    /*   for unresolved virtual hosts                                        */
    0, 31, 0, 32, 'f', 'o', 'r', 32, 'u', 'n', 'r', 'e', 's', 'o', 'l',
    'v', 'e', 'd', 32, 'v', 'i', 'r', 't', 'u', 'a', 'l', 32, 'h', 'o',
    's', 't', 's', 10,
    /*  !--FIELD NUMERIC config_list SIZE=4 VALUE=15                         */
    0, 28, 11, 5, 1, 0, 4, 0, 4, 0, 0, 0, 0, 0, 0, 'c', 'o', 'n', 'f',
    'i', 'g', '_', 'l', 'i', 's', 't', 0, '1', '5', 0,
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
    0, 4, 1, 0, 6, 164,
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

static FIELD_DEFN xiadm02_fields [] = {
    { 0, 1798, 80 },                    /*  message_to_user                 */
    { 82, 1979, 5 },                    /*  l_filename                      */
    { 89, 2049, 14 },                   /*  l_filedate                      */
    { 105, 2089, 12 },                  /*  l_filesize                      */
    { 119, 2175, 80 },                  /*  filename                        */
    { 1349, 2204, 8 },                  /*  filedate                        */
    { 1499, 2233, 8 },                  /*  filetime                        */
    { 1649, 2265, 5 },                  /*  filesize                        */
    { 1754, 2448, 4 },                  /*  config_list                     */
    { 1760, 0, 0 },                     /*  -- sentinel --                  */
    };

/*  The data of a form is a list of attributes and fields                    */

typedef struct {
    byte   message_to_user_a    ;
    char   message_to_user      [80 + 1];
    byte   l_filename_a         ;
    char   l_filename           [5 + 1];
    byte   l_filedate_a         ;
    char   l_filedate           [14 + 1];
    byte   l_filesize_a         ;
    char   l_filesize           [12 + 1];
    byte   filename_a           [15] ;
    char   filename             [15] [80 + 1];
    byte   filedate_a           [15] ;
    char   filedate             [15] [8 + 1];
    byte   filetime_a           [15] ;
    char   filetime             [15] [8 + 1];
    byte   filesize_a           [15] ;
    char   filesize             [15] [5 + 1];
    byte   config_list_a        ;
    char   config_list          [4 + 1];
    byte   back_a;
    byte   new_a;
    byte   first_a;
    byte   next_a;
    byte   console_a;
    byte   halt_a;
    byte   restart_a;
    byte   exit_a;
    byte   defaults_a;
    byte   basehost_a;
    } XIADM02_DATA;

/*  The form definition collects these tables into a header                  */

static FORM_DEFN form_xiadm02 = {
    xiadm02_blocks,
    xiadm02_fields,
    80,                                 /*  Number of blocks in form        */
    9,                                  /*  Number of fields in form        */
    10,                                 /*  Number of actions in form       */
    1760,                               /*  Size of fields                  */
    "xiadm02",                          /*  Name of form                    */
    };

#endif                                  /*  End included file               */
