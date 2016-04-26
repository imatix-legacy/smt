/*---------------------------------------------------------------------------
 *  xiadm10.h - HTML form definition
 *
 *  Generated 2000/04/01, 16:13:44 by fxgen 2.0
 *  See Studio on-line help pages at <http://www.imatix.com>.
 *---------------------------------------------------------------------------*/

#ifndef __FORM_XIADM10__
#define __FORM_XIADM10__

#include "sfl.h"
#include "formio.h"


/*  Constants defining size of tables, etc.                                  */

#define XIADM10_MESSAGE_TO_USER             0
#define XIADM10_L_USE_ERROR_SCRIPT          1
#define XIADM10_USE_ERROR_SCRIPT            2
#define XIADM10_L_ERROR_SCRIPT              3
#define XIADM10_ERROR_SCRIPT                4
#define XIADM10_L_NONAME2                   5
#define XIADM10_FILLER                      6
#define XIADM10_L_ERROR_HEADER              7
#define XIADM10_ERROR_HEADER                8
#define XIADM10_L_TEXT_400                  9
#define XIADM10_TEXT_400                    10
#define XIADM10_L_TEXT_401                  11
#define XIADM10_TEXT_401                    12
#define XIADM10_L_TEXT_402                  13
#define XIADM10_TEXT_402                    14
#define XIADM10_L_TEXT_403                  15
#define XIADM10_TEXT_403                    16
#define XIADM10_L_TEXT_404                  17
#define XIADM10_TEXT_404                    18
#define XIADM10_L_TEXT_412                  19
#define XIADM10_TEXT_412                    20
#define XIADM10_L_TEXT_413                  21
#define XIADM10_TEXT_413                    22
#define XIADM10_L_TEXT_500                  23
#define XIADM10_TEXT_500                    24
#define XIADM10_L_TEXT_501                  25
#define XIADM10_TEXT_501                    26
#define XIADM10_L_TEXT_502                  27
#define XIADM10_TEXT_502                    28
#define XIADM10_L_ERROR_FOOTER              29
#define XIADM10_ERROR_FOOTER                30

/*  This table contains each block in the form                               */

static byte xiadm10_blocks [] = {
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
    0, 69, 0, '<', 'A', 32, 'H', 'R', 'E', 'F', '=', '"', '/', 'x', 'i',
    't', 'a', 'm', 'i', '/', 'i', 'n', 'd', 'e', 'x', '4', '.', 'h',
    't', 'm', '#', 'c', 'o', 'n', 'f', 'i', 'g', '_', 'm', 'i', 'm',
    'e', '"', 32, 'T', 'A', 'R', 'G', 'E', 'T', '=', '"', 'H', 'e', 'l',
    'p', '"', 32, 'T', 'I', 'T', 'L', 'E', '=', '"', 'H', 'e', 'l', 'p',
    '"', 10,
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
    /*  <TD ALIGN=CENTER><FONT SIZE= ...  HTTP Error Messages </FONT>        */
    0, 72, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'C', 'E',
    'N', 'T', 'E', 'R', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z',
    'E', '=', '+', '1', '>', '#', '(', 'c', 'o', 'n', 'f', 'i', 'g',
    ')', 32, 45, 32, 'H', 'T', 'T', 'P', 32, 'E', 'r', 'r', 'o', 'r',
    32, 'M', 'e', 's', 's', 'a', 'g', 'e', 's', 32, '<', '/', 'F', 'O',
    'N', 'T', '>', 10,
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
    0, 4, 1, 0, 5, 't',
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 6, 175,
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
    /*  !--FIELD TEXTUAL f146 NAME=L ... mplate script?&nbsp;&nbsp;"         */
    0, 54, 10, 6, 1, 0, 0, '(', 0, '(', 'f', '1', '4', '6', 0, 'U', 's',
    'e', 32, 'm', 'e', 's', 's', 'a', 'g', 'e', 32, 't', 'e', 'm', 'p',
    'l', 'a', 't', 'e', 32, 's', 'c', 'r', 'i', 'p', 't', '?', '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 36, 0, '<', '/', 'T', 'D', '>', '<', 'T', 'D', 32, 'A', 'L', 'I',
    'G', 'N', '=', 'L', 'E', 'F', 'T', 32, 'W', 'I', 'D', 'T', 'H', '=',
    '"', '"', '8', '0', '%', '"', '"', '>', 10,
    /*  !--FIELD BOOLEAN f147 NAME=u ... t TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '1', '4', '7', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  !--FIELD TEXTUAL f148 NAME=L ... p;Script file:&nbsp;&nbsp;"         */
    0, 50, 10, 6, 1, 0, 0, '$', 0, '$', 'f', '1', '4', '8', 0, '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 'S', 'c', 'r',
    'i', 'p', 't', 32, 'f', 'i', 'l', 'e', ':', '&', 'n', 'b', 's', 'p',
    ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  !--FIELD TEXTUAL f149 NAME=e ... =30 MAX=80 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 30, 0, 'P', 'f', '1', '4', '9', 0, 0,
    /*  <TR><TD></TD><TD>                                                    */
    0, 19, 0, '<', 'T', 'R', '>', '<', 'T', 'D', '>', '<', '/', 'T',
    'D', '>', '<', 'T', 'D', '>', 10,
    /*  <HR>                                                                 */
    0, 6, 0, '<', 'H', 'R', '>', 10,
    /*  </TD></TR>                                                           */
    0, 12, 0, '<', '/', 'T', 'D', '>', '<', '/', 'T', 'R', '>', 10,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 181,
    /*  !--FIELD TEXTUAL f150 NAME=L ... e these texts:&nbsp;&nbsp;"         */
    0, 53, 10, 6, 1, 0, 0, 39, 0, 39, 'f', '1', '5', '0', 0, 'O', 't',
    'h', 'e', 'r', 'w', 'i', 's', 'e', ',', 32, 'u', 's', 'e', 32, 't',
    'h', 'e', 's', 'e', 32, 't', 'e', 'x', 't', 's', ':', '&', 'n', 'b',
    's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 22,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  <TR><TD></TD><TD ALIGN=LEFT WIDTH=""80%"">                           */
    0, 44, 0, '<', 'T', 'R', '>', '<', 'T', 'D', '>', '<', '/', 'T',
    'D', '>', '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'L', 'E',
    'F', 'T', 32, 'W', 'I', 'D', 'T', 'H', '=', '"', '"', '8', '0', '%',
    '"', '"', '>', 10,
    /*  !--FIELD TEXTUAL f151 NAME=f ... E="HTML text or @filename:"         */
    0, 37, 10, 7, 1, 0, 0, 23, 0, 23, 'f', '1', '5', '1', 0, 'H', 'T',
    'M', 'L', 32, 't', 'e', 'x', 't', 32, 'o', 'r', 32, '@', 'f', 'i',
    'l', 'e', 'n', 'a', 'm', 'e', ':', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 181,
    /*  !--FIELD TEXTUAL f152 NAME=L ... er for errors:&nbsp;&nbsp;"         */
    0, 44, 10, 6, 1, 0, 0, 30, 0, 30, 'f', '1', '5', '2', 0, 'H', 'e',
    'a', 'd', 'e', 'r', 32, 'f', 'o', 'r', 32, 'e', 'r', 'r', 'o', 'r',
    's', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p',
    ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 22,
    /*  !--FIELD TEXTBOX f153 NAME=e ... 60 MAX=240 UPPER=0 VALUE=""         */
    0, 14, 14, 0, 1, 2, '<', 0, 0, 240, 'f', '1', '5', '3', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 181,
    /*  !--FIELD TEXTUAL f154 NAME=L ... - Bad request:&nbsp;&nbsp;"         */
    0, 44, 10, 6, 1, 0, 0, 30, 0, 30, 'f', '1', '5', '4', 0, '4', '0',
    '0', 32, 45, 32, 'B', 'a', 'd', 32, 'r', 'e', 'q', 'u', 'e', 's',
    't', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p',
    ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 22,
    /*  !--FIELD TEXTUAL f155 NAME=t ... E=60 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '<', 0, '<', 'f', '1', '5', '5', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 181,
    /*  !--FIELD TEXTUAL f156 NAME=L ...  Unauthorized:&nbsp;&nbsp;"         */
    0, 45, 10, 6, 1, 0, 0, 31, 0, 31, 'f', '1', '5', '6', 0, '4', '0',
    '1', 32, 45, 32, 'U', 'n', 'a', 'u', 't', 'h', 'o', 'r', 'i', 'z',
    'e', 'd', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's',
    'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 22,
    /*  !--FIELD TEXTUAL f157 NAME=t ... E=60 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '<', 0, '<', 'f', '1', '5', '7', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 181,
    /*  !--FIELD TEXTUAL f158 NAME=L ... ment required:&nbsp;&nbsp;"         */
    0, 49, 10, 6, 1, 0, 0, '#', 0, '#', 'f', '1', '5', '8', 0, '4', '0',
    '2', 32, 45, 32, 'P', 'a', 'y', 'm', 'e', 'n', 't', 32, 'r', 'e',
    'q', 'u', 'i', 'r', 'e', 'd', ':', '&', 'n', 'b', 's', 'p', ';',
    '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 22,
    /*  !--FIELD TEXTUAL f159 NAME=t ... E=60 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '<', 0, '<', 'f', '1', '5', '9', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 181,
    /*  !--FIELD TEXTUAL f160 NAME=L ... 3 - Forbidden:&nbsp;&nbsp;"         */
    0, 42, 10, 6, 1, 0, 0, 28, 0, 28, 'f', '1', '6', '0', 0, '4', '0',
    '3', 32, 45, 32, 'F', 'o', 'r', 'b', 'i', 'd', 'd', 'e', 'n', ':',
    '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 22,
    /*  !--FIELD TEXTUAL f161 NAME=t ... E=60 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '<', 0, '<', 'f', '1', '6', '1', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 181,
    /*  !--FIELD TEXTUAL f162 NAME=L ... 4 - Not found:&nbsp;&nbsp;"         */
    0, 42, 10, 6, 1, 0, 0, 28, 0, 28, 'f', '1', '6', '2', 0, '4', '0',
    '4', 32, 45, 32, 'N', 'o', 't', 32, 'f', 'o', 'u', 'n', 'd', ':',
    '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 22,
    /*  !--FIELD TEXTUAL f163 NAME=t ... E=60 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '<', 0, '<', 'f', '1', '6', '3', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 181,
    /*  !--FIELD TEXTUAL f164 NAME=L ... dition failed:&nbsp;&nbsp;"         */
    0, 52, 10, 6, 1, 0, 0, '&', 0, '&', 'f', '1', '6', '4', 0, '4', '1',
    '2', 32, 45, 32, 'P', 'r', 'e', 'c', 'o', 'n', 'd', 'i', 't', 'i',
    'o', 'n', 32, 'f', 'a', 'i', 'l', 'e', 'd', ':', '&', 'n', 'b', 's',
    'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 22,
    /*  !--FIELD TEXTUAL f165 NAME=t ... E=60 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '<', 0, '<', 'f', '1', '6', '5', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 181,
    /*  !--FIELD TEXTUAL f166 NAME=L ... ity too large:&nbsp;&nbsp;"         */
    0, 57, 10, 6, 1, 0, 0, '+', 0, '+', 'f', '1', '6', '6', 0, '4', '1',
    '3', 32, 45, 32, 'R', 'e', 'q', 'u', 'e', 's', 't', 32, 'e', 'n',
    't', 'i', 't', 'y', 32, 't', 'o', 'o', 32, 'l', 'a', 'r', 'g', 'e',
    ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 22,
    /*  !--FIELD TEXTUAL f167 NAME=t ... E=60 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '<', 0, '<', 'f', '1', '6', '7', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 181,
    /*  !--FIELD TEXTUAL f168 NAME=L ... nternal error:&nbsp;&nbsp;"         */
    0, 47, 10, 6, 1, 0, 0, '!', 0, '!', 'f', '1', '6', '8', 0, '5', '0',
    '0', 32, 45, 32, 'I', 'n', 't', 'e', 'r', 'n', 'a', 'l', 32, 'e',
    'r', 'r', 'o', 'r', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n',
    'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 22,
    /*  !--FIELD TEXTUAL f169 NAME=t ... E=60 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '<', 0, '<', 'f', '1', '6', '9', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 181,
    /*  !--FIELD TEXTUAL f170 NAME=L ... t implemented:&nbsp;&nbsp;"         */
    0, 48, 10, 6, 1, 0, 0, '"', 0, '"', 'f', '1', '7', '0', 0, '5', '0',
    '1', 32, 45, 32, 'N', 'o', 't', 32, 'i', 'm', 'p', 'l', 'e', 'm',
    'e', 'n', 't', 'e', 'd', ':', '&', 'n', 'b', 's', 'p', ';', '&',
    'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 22,
    /*  !--FIELD TEXTUAL f171 NAME=t ... E=60 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '<', 0, '<', 'f', '1', '7', '1', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 181,
    /*  !--FIELD TEXTUAL f172 NAME=L ... y unavailable:&nbsp;&nbsp;"         */
    0, 64, 10, 6, 1, 0, 0, '2', 0, '2', 'f', '1', '7', '2', 0, '5', '0',
    '2', 32, 45, 32, 'S', 'e', 'r', 'v', 'i', 'c', 'e', 32, 't', 'e',
    'm', 'p', 'o', 'r', 'a', 'r', 'i', 'l', 'y', 32, 'u', 'n', 'a', 'v',
    'a', 'i', 'l', 'a', 'b', 'l', 'e', ':', '&', 'n', 'b', 's', 'p',
    ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 22,
    /*  !--FIELD TEXTUAL f173 NAME=t ... E=60 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '<', 0, '<', 'f', '1', '7', '3', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 181,
    /*  !--FIELD TEXTUAL f174 NAME=L ... er for errors:&nbsp;&nbsp;"         */
    0, 44, 10, 6, 1, 0, 0, 30, 0, 30, 'f', '1', '7', '4', 0, 'F', 'o',
    'o', 't', 'e', 'r', 32, 'f', 'o', 'r', 32, 'e', 'r', 'r', 'o', 'r',
    's', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p',
    ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 22,
    /*  !--FIELD TEXTBOX f175 NAME=e ... 60 MAX=240 UPPER=0 VALUE=""         */
    0, 14, 14, 0, 1, 2, '<', 0, 0, 240, 'f', '1', '7', '5', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 176,
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 6, 175,
    /*  </FORM>                                                              */
    0, 9, 0, '<', '/', 'F', 'O', 'R', 'M', '>', 10,
    /*  <HR>                                                                 */
    0, 4, 1, 0, 8, 168,
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
    0, 4, 1, 0, 6, 175,
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

static FIELD_DEFN xiadm10_fields [] = {
    { 0, 1809, 80 },                    /*  message_to_user                 */
    { 82, 2014, 40 },                   /*  l_use_error_script              */
    { 124, 2108, 1 },                   /*  use_error_script                */
    { 127, 2127, 36 },                  /*  l_error_script                  */
    { 165, 2179, 80 },                  /*  error_script                    */
    { 247, 2244, 39 },                  /*  l_noname2                       */
    { 288, 2357, 23 },                  /*  filler                          */
    { 313, 2408, 30 },                  /*  l_error_header                  */
    { 345, 2460, 240 },                 /*  error_header                    */
    { 587, 2488, 30 },                  /*  l_text_400                      */
    { 619, 2540, 60 },                  /*  text_400                        */
    { 681, 2568, 31 },                  /*  l_text_401                      */
    { 714, 2621, 60 },                  /*  text_401                        */
    { 776, 2649, 35 },                  /*  l_text_402                      */
    { 813, 2706, 60 },                  /*  text_402                        */
    { 875, 2734, 28 },                  /*  l_text_403                      */
    { 905, 2784, 60 },                  /*  text_403                        */
    { 967, 2812, 28 },                  /*  l_text_404                      */
    { 997, 2862, 60 },                  /*  text_404                        */
    { 1059, 2890, 38 },                 /*  l_text_412                      */
    { 1099, 2950, 60 },                 /*  text_412                        */
    { 1161, 2978, 43 },                 /*  l_text_413                      */
    { 1206, 3043, 60 },                 /*  text_413                        */
    { 1268, 3071, 33 },                 /*  l_text_500                      */
    { 1303, 3126, 60 },                 /*  text_500                        */
    { 1365, 3154, 34 },                 /*  l_text_501                      */
    { 1401, 3210, 60 },                 /*  text_501                        */
    { 1463, 3238, 50 },                 /*  l_text_502                      */
    { 1515, 3310, 60 },                 /*  text_502                        */
    { 1577, 3338, 30 },                 /*  l_error_footer                  */
    { 1609, 3390, 240 },                /*  error_footer                    */
    { 1851, 0, 0 },                     /*  -- sentinel --                  */
    };

/*  The data of a form is a list of attributes and fields                    */

typedef struct {
    byte   message_to_user_a    ;
    char   message_to_user      [80 + 1];
    byte   l_use_error_script_a ;
    char   l_use_error_script   [40 + 1];
    byte   use_error_script_a   ;
    char   use_error_script     [1 + 1];
    byte   l_error_script_a     ;
    char   l_error_script       [36 + 1];
    byte   error_script_a       ;
    char   error_script         [80 + 1];
    byte   l_noname2_a          ;
    char   l_noname2            [39 + 1];
    byte   filler_a             ;
    char   filler               [23 + 1];
    byte   l_error_header_a     ;
    char   l_error_header       [30 + 1];
    byte   error_header_a       ;
    char   error_header         [240 + 1];
    byte   l_text_400_a         ;
    char   l_text_400           [30 + 1];
    byte   text_400_a           ;
    char   text_400             [60 + 1];
    byte   l_text_401_a         ;
    char   l_text_401           [31 + 1];
    byte   text_401_a           ;
    char   text_401             [60 + 1];
    byte   l_text_402_a         ;
    char   l_text_402           [35 + 1];
    byte   text_402_a           ;
    char   text_402             [60 + 1];
    byte   l_text_403_a         ;
    char   l_text_403           [28 + 1];
    byte   text_403_a           ;
    char   text_403             [60 + 1];
    byte   l_text_404_a         ;
    char   l_text_404           [28 + 1];
    byte   text_404_a           ;
    char   text_404             [60 + 1];
    byte   l_text_412_a         ;
    char   l_text_412           [38 + 1];
    byte   text_412_a           ;
    char   text_412             [60 + 1];
    byte   l_text_413_a         ;
    char   l_text_413           [43 + 1];
    byte   text_413_a           ;
    char   text_413             [60 + 1];
    byte   l_text_500_a         ;
    char   l_text_500           [33 + 1];
    byte   text_500_a           ;
    char   text_500             [60 + 1];
    byte   l_text_501_a         ;
    char   l_text_501           [34 + 1];
    byte   text_501_a           ;
    char   text_501             [60 + 1];
    byte   l_text_502_a         ;
    char   l_text_502           [50 + 1];
    byte   text_502_a           ;
    char   text_502             [60 + 1];
    byte   l_error_footer_a     ;
    char   l_error_footer       [30 + 1];
    byte   error_footer_a       ;
    char   error_footer         [240 + 1];
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
    } XIADM10_DATA;

/*  The form definition collects these tables into a header                  */

static FORM_DEFN form_xiadm10 = {
    xiadm10_blocks,
    xiadm10_fields,
    127,                                /*  Number of blocks in form        */
    31,                                 /*  Number of fields in form        */
    10,                                 /*  Number of actions in form       */
    1851,                               /*  Size of fields                  */
    "xiadm10",                          /*  Name of form                    */
    };

#endif                                  /*  End included file               */
