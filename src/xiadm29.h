/*---------------------------------------------------------------------------
 *  xiadm29.h - HTML form definition
 *
 *  Generated 2000/04/01, 16:13:44 by fxgen 2.0
 *  See Studio on-line help pages at <http://www.imatix.com>.
 *---------------------------------------------------------------------------*/

#ifndef __FORM_XIADM29__
#define __FORM_XIADM29__

#include "sfl.h"
#include "formio.h"


/*  Constants defining size of tables, etc.                                  */

#define XIADM29_MESSAGE_TO_USER             0
#define XIADM29_RICH_LOGGING                1
#define XIADM29_L_LOG_TYPE                  2
#define XIADM29_LOG_TYPE                    3
#define XIADM29_L_ENABLED                   4
#define XIADM29_ENABLED                     5
#define XIADM29_L_FILENAME                  6
#define XIADM29_FILENAME                    7
#define XIADM29_L_INC_LOCAL                 8
#define XIADM29_INC_LOCAL                   9
#define XIADM29_L_TRANSLATE                 10
#define XIADM29_TRANSLATE                   11
#define XIADM29_L_FORMAT                    12
#define XIADM29_FORMAT                      13
#define XIADM29_L_CUSTOM                    14
#define XIADM29_CUSTOM                      15
#define XIADM29_L_CYCLE                     16
#define XIADM29_CYCLE                       17
#define XIADM29_L_CYCLE_TIME                18
#define XIADM29_CYCLE_TIME                  19
#define XIADM29_L_CYCLE_DAY                 20
#define XIADM29_CYCLE_DAY                   21
#define XIADM29_L_CYCLE_SIZE                22
#define XIADM29_CYCLE_SIZE                  23
#define XIADM29_L_CYCLE_LINES               24
#define XIADM29_CYCLE_LINES                 25
#define XIADM29_L_CYCLE_HOW                 26
#define XIADM29_CYCLE_HOW                   27
#define XIADM29_L_CYCLE_ARG                 28
#define XIADM29_CYCLE_ARG                   29
#define XIADM29_L_CYCLE_DATA                30

/*  This table contains each block in the form                               */

static byte xiadm29_blocks [] = {
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
    /*  <TD ALIGN=CENTER><FONT SIZE= ...  Log File Properties </FONT>        */
    0, 72, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'C', 'E',
    'N', 'T', 'E', 'R', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z',
    'E', '=', '+', '1', '>', '#', '(', 'c', 'o', 'n', 'f', 'i', 'g',
    ')', 32, 45, 32, 'L', 'o', 'g', 32, 'F', 'i', 'l', 'e', 32, 'P',
    'r', 'o', 'p', 'e', 'r', 't', 'i', 'e', 's', 32, '<', '/', 'F', 'O',
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
    0, 4, 1, 0, 5, 'y',
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 6, 180,
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
    /*  !--FIELD NUMERIC rich_logging SIZE=4 VALUE=1                         */
    0, 28, 11, 5, 1, 0, 4, 0, 4, 0, 0, 0, 0, 0, 0, 'r', 'i', 'c', 'h',
    '_', 'l', 'o', 'g', 'g', 'i', 'n', 'g', 0, '1', 0,
    /*  <TABLE WIDTH="100%">                                                 */
    0, 22, 0, '<', 'T', 'A', 'B', 'L', 'E', 32, 'W', 'I', 'D', 'T', 'H',
    '=', '"', '1', '0', '0', '%', '"', '>', 10,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 39, 0, '<', 'T', 'R', '>', '<', 'T', 'D', 32, 'A', 'L', 'I', 'G',
    'N', '=', 'L', 'E', 'F', 'T', 32, 'V', 'A', 'L', 'I', 'G', 'N', '=',
    'T', 'O', 'P', 32, 'N', 'O', 'W', 'R', 'A', 'P', '>', 10,
    /*  !--FIELD TEXTUAL f420 NAME=L ... e of log file:&nbsp;&nbsp;"         */
    0, 43, 10, 6, 1, 0, 0, 29, 0, 29, 'f', '4', '2', '0', 0, 'T', 'y',
    'p', 'e', 32, 'o', 'f', 32, 'l', 'o', 'g', 32, 'f', 'i', 'l', 'e',
    ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 36, 0, '<', '/', 'T', 'D', '>', '<', 'T', 'D', 32, 'A', 'L', 'I',
    'G', 'N', '=', 'L', 'E', 'F', 'T', 32, 'W', 'I', 'D', 'T', 'H', '=',
    '"', '"', '8', '0', '%', '"', '"', '>', 10,
    /*  !--FIELD TEXTUAL f421 NAME=l ... E=40 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 7, 1, 0, 0, '(', 0, '(', 'f', '4', '2', '1', 0, 0,
    /*  </TD></TR>                                                           */
    0, 12, 0, '<', '/', 'T', 'D', '>', '<', '/', 'T', 'R', '>', 10,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 216,
    /*  !--FIELD TEXTUAL f422 NAME=L ... gging enabled:&nbsp;&nbsp;"         */
    0, 42, 10, 6, 1, 0, 0, 28, 0, 28, 'f', '4', '2', '2', 0, 'L', 'o',
    'g', 'g', 'i', 'n', 'g', 32, 'e', 'n', 'a', 'b', 'l', 'e', 'd', ':',
    '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, '.',
    /*  !--FIELD BOOLEAN f423 NAME=enabled TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '4', '2', '3', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'd',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 216,
    /*  !--FIELD TEXTUAL f424 NAME=L ... Log file name:&nbsp;&nbsp;"         */
    0, 40, 10, 6, 1, 0, 0, 26, 0, 26, 'f', '4', '2', '4', 0, 'L', 'o',
    'g', 32, 'f', 'i', 'l', 'e', 32, 'n', 'a', 'm', 'e', ':', '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, '.',
    /*  !--FIELD TEXTUAL f425 NAME=f ... =40 MAX=80 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '(', 0, 'P', 'f', '4', '2', '5', 0, 0,
    /*  !--IF rich_logging                                                   */
    0, 5, 2, 0, 1, 0, 21,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'd',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 216,
    /*  !--FIELD TEXTUAL f426 NAME=L ... ocal requests?&nbsp;&nbsp;"         */
    0, 49, 10, 6, 1, 0, 0, '#', 0, '#', 'f', '4', '2', '6', 0, 'I', 'n',
    'c', 'l', 'u', 'd', 'e', 32, 'l', 'o', 'c', 'a', 'l', 32, 'r', 'e',
    'q', 'u', 'e', 's', 't', 's', '?', '&', 'n', 'b', 's', 'p', ';',
    '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, '.',
    /*  !--FIELD BOOLEAN f427 NAME=i ... l TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '4', '2', '7', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'd',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 216,
    /*  !--FIELD TEXTUAL f428 NAME=L ...  IP addresses?&nbsp;&nbsp;"         */
    0, 49, 10, 6, 1, 0, 0, '#', 0, '#', 'f', '4', '2', '8', 0, 'T', 'r',
    'a', 'n', 's', 'l', 'a', 't', 'e', 32, 'I', 'P', 32, 'a', 'd', 'd',
    'r', 'e', 's', 's', 'e', 's', '?', '&', 'n', 'b', 's', 'p', ';',
    '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, '.',
    /*  !--FIELD BOOLEAN f429 NAME=t ... e TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '4', '2', '9', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'd',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 216,
    /*  !--FIELD TEXTUAL f430 NAME=L ... g file format:&nbsp;&nbsp;"         */
    0, 42, 10, 6, 1, 0, 0, 28, 0, 28, 'f', '4', '3', '0', 0, 'L', 'o',
    'g', 32, 'f', 'i', 'l', 'e', 32, 'f', 'o', 'r', 'm', 'a', 't', ':',
    '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, '.',
    /*  !--FIELD SELECT f431 NAME=fo ... pe=dynamic 0="No selection"         */
    0, 25, 16, 0, 1, 1, 0, 'f', '4', '3', '1', 0, '0', 0, 'N', 'o', 32,
    's', 'e', 'l', 'e', 'c', 't', 'i', 'o', 'n', 0,
    /*  !--ACTION show  LABEL="Show" ... vent CONFIRM="" TYPE=BUTTON         */
    0, 24, 20, 0, 1, (byte) ((word) show_event / 256), (byte) ((word)
    show_event & 255), 0, 10, 0, 0, 0, 0, 0, 's', 'h', 'o', 'w', 0, 'S',
    'h', 'o', 'w', 0, 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'd',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 216,
    /*  !--FIELD TEXTUAL f432 NAME=L ... format string:&nbsp;&nbsp;"         */
    0, 49, 10, 6, 1, 0, 0, '#', 0, '#', 'f', '4', '3', '2', 0, 'L', 'o',
    'g', 32, 'f', 'i', 'l', 'e', 32, 'f', 'o', 'r', 'm', 'a', 't', 32,
    's', 't', 'r', 'i', 'n', 'g', ':', '&', 'n', 'b', 's', 'p', ';',
    '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, '.',
    /*  !--FIELD TEXTBOX f433 NAME=c ... 0 MAX=1000 UPPER=0 VALUE=""         */
    0, 14, 14, 0, 1, 7, 'F', 0, 3, 232, 'f', '4', '3', '3', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'd',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 216,
    /*  !--FIELD TEXTUAL f434 NAME=L ... ycle log file:&nbsp;&nbsp;"         */
    0, 41, 10, 6, 1, 0, 0, 27, 0, 27, 'f', '4', '3', '4', 0, 'C', 'y',
    'c', 'l', 'e', 32, 'l', 'o', 'g', 32, 'f', 'i', 'l', 'e', ':', '&',
    'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, '.',
    /*  !--FIELD SELECT f435 NAME=cy ... pe=dynamic 0="No selection"         */
    0, 25, 16, 0, 1, 1, 0, 'f', '4', '3', '5', 0, '0', 0, 'N', 'o', 32,
    's', 'e', 'l', 'e', 'c', 't', 'i', 'o', 'n', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'd',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 216,
    /*  !--FIELD TEXTUAL f436 NAME=L ...  time (HH:MM):&nbsp;&nbsp;"         */
    0, 48, 10, 6, 1, 0, 0, '"', 0, '"', 'f', '4', '3', '6', 0, 'C', 'y',
    'c', 'l', 'e', 32, 'a', 't', 32, 't', 'i', 'm', 'e', 32, '(', 'H',
    'H', ':', 'M', 'M', ')', ':', '&', 'n', 'b', 's', 'p', ';', '&',
    'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, '.',
    /*  !--FIELD TEXTUAL f437 NAME=c ... ZE=5 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 5, 0, 5, 'f', '4', '3', '7', 0, 0,
    /*  !--FIELD TEXTUAL f438 NAME=L ... week or month:&nbsp;&nbsp;"         */
    0, 62, 10, 6, 1, 0, 0, '0', 0, '0', 'f', '4', '3', '8', 0, '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 'o', 'n', 32, 'd',
    'a', 'y', 32, 'o', 'f', 32, 'w', 'e', 'e', 'k', 32, 'o', 'r', 32,
    'm', 'o', 'n', 't', 'h', ':', '&', 'n', 'b', 's', 'p', ';', '&',
    'n', 'b', 's', 'p', ';', 0,
    /*  !--FIELD NUMERIC f439 NAME=c ... MMA=0 SIZE=3 MAX=? VALUE=""         */
    0, 19, 11, 0, 1, 0, 3, 0, 3, 0, 0, 0, 0, 0, 0, 'f', '4', '3', '9',
    0, 0,
    /*  0=Sunday, 1=Monday... or 0-31                                        */
    0, 31, 0, '0', '=', 'S', 'u', 'n', 'd', 'a', 'y', ',', 32, '1', '=',
    'M', 'o', 'n', 'd', 'a', 'y', '.', '.', '.', 32, 'o', 'r', 32, '0',
    45, '3', '1', 10,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'd',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 216,
    /*  !--FIELD TEXTUAL f440 NAME=L ...  for log file:&nbsp;&nbsp;"         */
    0, 51, 10, 6, 1, 0, 0, '%', 0, '%', 'f', '4', '4', '0', 0, 'M', 'a',
    'x', '.', 32, 'k', 'b', 'y', 't', 'e', 's', 32, 'f', 'o', 'r', 32,
    'l', 'o', 'g', 32, 'f', 'i', 'l', 'e', ':', '&', 'n', 'b', 's', 'p',
    ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, '.',
    /*  !--FIELD NUMERIC f441 NAME=c ... MMA=0 SIZE=6 MAX=? VALUE=""         */
    0, 19, 11, 0, 1, 0, 6, 0, 6, 0, 0, 0, 0, 0, 0, 'f', '4', '4', '1',
    0, 0,
    /*  !--FIELD TEXTUAL f442 NAME=L ...  for log file:&nbsp;&nbsp;"         */
    0, 62, 10, 6, 1, 0, 0, '0', 0, '0', 'f', '4', '4', '2', 0, '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 'm', 'a', 'x',
    '.', 32, 'l', 'i', 'n', 'e', 's', 32, 'f', 'o', 'r', 32, 'l', 'o',
    'g', 32, 'f', 'i', 'l', 'e', ':', '&', 'n', 'b', 's', 'p', ';', '&',
    'n', 'b', 's', 'p', ';', 0,
    /*  !--FIELD NUMERIC f443 NAME=c ... MMA=0 SIZE=9 MAX=? VALUE=""         */
    0, 19, 11, 0, 1, 0, 9, 0, 9, 0, 0, 0, 0, 0, 0, 'f', '4', '4', '3',
    0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'd',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 216,
    /*  !--FIELD TEXTUAL f444 NAME=L ...  old log file:&nbsp;&nbsp;"         */
    0, 52, 10, 6, 1, 0, 0, '&', 0, '&', 'f', '4', '4', '4', 0, 'H', 'o',
    'w', 32, 't', 'o', 32, 'c', 'y', 'c', 'l', 'e', 32, 'o', 'l', 'd',
    32, 'l', 'o', 'g', 32, 'f', 'i', 'l', 'e', ':', '&', 'n', 'b', 's',
    'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, '.',
    /*  !--FIELD SELECT f445 NAME=cy ... ng command specified below"         */
    0, 209, 16, 0, 1, 1, 4, 'f', '4', '4', '5', 0, '0', 0, 'R', 'e',
    'n', 'a', 'm', 'e', 32, 't', 'o', 32, 'p', 'a', 't', 'h', '/', 'f',
    'i', 'l', 'e', 'n', 'a', 'm', 'e', 32, 'a', 's', 32, 's', 'p', 'e',
    'c', 'i', 'f', 'i', 'e', 'd', 32, 'b', 'e', 'l', 'o', 'w', 0, 'D',
    'e', 'l', 'e', 't', 'e', 32, 'o', 'l', 'd', 32, 'l', 'o', 'g', 32,
    'f', 'i', 'l', 'e', 0, 'M', 'o', 'v', 'e', 32, 'l', 'o', 'g', 32,
    'f', 'i', 'l', 'e', 32, 't', 'o', 32, 'p', 'a', 't', 'h', 32, 's',
    'p', 'e', 'c', 'i', 'f', 'i', 'e', 'd', 32, 'b', 'e', 'l', 'o', 'w',
    0, 'A', 'p', 'p', 'e', 'n', 'd', 32, 'l', 'o', 'g', 32, 'f', 'i',
    'l', 'e', 32, 't', 'o', 32, 'p', 'a', 't', 'h', '/', 'f', 'i', 'l',
    'e', 'n', 'a', 'm', 'e', 32, 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e',
    'd', 32, 'b', 'e', 'l', 'o', 'w', 0, 'P', 'r', 'o', 'c', 'e', 's',
    's', 32, 'l', 'o', 'g', 32, 'f', 'i', 'l', 'e', 32, 'u', 's', 'i',
    'n', 'g', 32, 'c', 'o', 'm', 'm', 'a', 'n', 'd', 32, 's', 'p', 'e',
    'c', 'i', 'f', 'i', 'e', 'd', 32, 'b', 'e', 'l', 'o', 'w', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'd',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 216,
    /*  !--FIELD TEXTUAL f446 NAME=L ... ycle operation&nbsp;&nbsp;"         */
    0, 54, 10, 6, 1, 0, 0, '(', 0, '(', 'f', '4', '4', '6', 0, 'A', 'r',
    'g', 'u', 'm', 'e', 'n', 't', 32, 'f', 'o', 'r', 32, 'c', 'y', 'c',
    'l', 'e', 32, 'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, '.',
    /*  !--FIELD TEXTUAL f447 NAME=c ... =40 MAX=80 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '(', 0, 'P', 'f', '4', '4', '7', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'd',
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 7, 216,
    /*  !--FIELD TEXTUAL f448 NAME=L ... Log file data:&nbsp;&nbsp;"         */
    0, 40, 10, 6, 1, 0, 0, 26, 0, 26, 'f', '4', '4', '8', 0, 'L', 'o',
    'g', 32, 'f', 'i', 'l', 'e', 32, 'd', 'a', 't', 'a', ':', '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, '.',
    /*  !--ACTION cycle_data  LABEL= ... vent CONFIRM="" TYPE=BUTTON         */
    0, 35, 20, 0, 1, (byte) ((word) cycle_event / 256), (byte) ((word)
    cycle_event & 255), 0, 11, 0, 0, 0, 0, 0, 'c', 'y', 'c', 'l', 'e',
    '_', 'd', 'a', 't', 'a', 0, 'C', 'y', 'c', 'l', 'e', 32, 'n', 'o',
    'w', 0, 0, 0,
    /*  !--ACTION clear_data  LABEL= ... vent CONFIRM="" TYPE=BUTTON         */
    0, 38, 20, 0, 1, (byte) ((word) clear_event / 256), (byte) ((word)
    clear_event & 255), 0, 12, 0, 0, 0, 0, 0, 'c', 'l', 'e', 'a', 'r',
    '_', 'd', 'a', 't', 'a', 0, 'W', 'i', 'p', 'e', 32, 'l', 'o', 'g',
    'f', 'i', 'l', 'e', 0, 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 8, 'd',
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 6, 180,
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
    0, 4, 1, 0, 6, 180,
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

static FIELD_DEFN xiadm29_fields [] = {
    { 0, 1814, 80 },                    /*  message_to_user                 */
    { 82, 1954, 4 },                    /*  rich_logging                    */
    { 88, 2049, 29 },                   /*  l_log_type                      */
    { 119, 2132, 40 },                  /*  log_type                        */
    { 161, 2168, 28 },                  /*  l_enabled                       */
    { 191, 2218, 1 },                   /*  enabled                         */
    { 194, 2249, 26 },                  /*  l_filename                      */
    { 222, 2297, 80 },                  /*  filename                        */
    { 304, 2332, 35 },                  /*  l_inc_local                     */
    { 341, 2389, 1 },                   /*  inc_local                       */
    { 344, 2420, 35 },                  /*  l_translate                     */
    { 381, 2477, 1 },                   /*  translate                       */
    { 384, 2508, 28 },                  /*  l_format                        */
    { 414, 2558, 3 },                   /*  format                          */
    { 419, 2623, 35 },                  /*  l_custom                        */
    { 456, 2680, 1000 },                /*  custom                          */
    { 1458, 2708, 27 },                 /*  l_cycle                         */
    { 1487, 2757, 3 },                  /*  cycle                           */
    { 1492, 2796, 34 },                 /*  l_cycle_time                    */
    { 1528, 2852, 5 },                  /*  cycle_time                      */
    { 1535, 2868, 48 },                 /*  l_cycle_day                     */
    { 1585, 2932, 3 },                  /*  cycle_day                       */
    { 1590, 2998, 37 },                 /*  l_cycle_size                    */
    { 1629, 3057, 6 },                  /*  cycle_size                      */
    { 1637, 3078, 48 },                 /*  l_cycle_lines                   */
    { 1687, 3142, 9 },                  /*  cycle_lines                     */
    { 1698, 3175, 38 },                 /*  l_cycle_how                     */
    { 1738, 3235, 3 },                  /*  cycle_how                       */
    { 1743, 3458, 40 },                 /*  l_cycle_arg                     */
    { 1785, 3520, 80 },                 /*  cycle_arg                       */
    { 1867, 3548, 26 },                 /*  l_cycle_data                    */
    { 1895, 0, 0 },                     /*  -- sentinel --                  */
    };

/*  The data of a form is a list of attributes and fields                    */

typedef struct {
    byte   message_to_user_a    ;
    char   message_to_user      [80 + 1];
    byte   rich_logging_a       ;
    char   rich_logging         [4 + 1];
    byte   l_log_type_a         ;
    char   l_log_type           [29 + 1];
    byte   log_type_a           ;
    char   log_type             [40 + 1];
    byte   l_enabled_a          ;
    char   l_enabled            [28 + 1];
    byte   enabled_a            ;
    char   enabled              [1 + 1];
    byte   l_filename_a         ;
    char   l_filename           [26 + 1];
    byte   filename_a           ;
    char   filename             [80 + 1];
    byte   l_inc_local_a        ;
    char   l_inc_local          [35 + 1];
    byte   inc_local_a          ;
    char   inc_local            [1 + 1];
    byte   l_translate_a        ;
    char   l_translate          [35 + 1];
    byte   translate_a          ;
    char   translate            [1 + 1];
    byte   l_format_a           ;
    char   l_format             [28 + 1];
    byte   format_a             ;
    char   format               [3 + 1];
    byte   l_custom_a           ;
    char   l_custom             [35 + 1];
    byte   custom_a             ;
    char   custom               [1000 + 1];
    byte   l_cycle_a            ;
    char   l_cycle              [27 + 1];
    byte   cycle_a              ;
    char   cycle                [3 + 1];
    byte   l_cycle_time_a       ;
    char   l_cycle_time         [34 + 1];
    byte   cycle_time_a         ;
    char   cycle_time           [5 + 1];
    byte   l_cycle_day_a        ;
    char   l_cycle_day          [48 + 1];
    byte   cycle_day_a          ;
    char   cycle_day            [3 + 1];
    byte   l_cycle_size_a       ;
    char   l_cycle_size         [37 + 1];
    byte   cycle_size_a         ;
    char   cycle_size           [6 + 1];
    byte   l_cycle_lines_a      ;
    char   l_cycle_lines        [48 + 1];
    byte   cycle_lines_a        ;
    char   cycle_lines          [9 + 1];
    byte   l_cycle_how_a        ;
    char   l_cycle_how          [38 + 1];
    byte   cycle_how_a          ;
    char   cycle_how            [3 + 1];
    byte   l_cycle_arg_a        ;
    char   l_cycle_arg          [40 + 1];
    byte   cycle_arg_a          ;
    char   cycle_arg            [80 + 1];
    byte   l_cycle_data_a       ;
    char   l_cycle_data         [26 + 1];
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
    byte   show_a;
    byte   cycle_data_a;
    byte   clear_data_a;
    } XIADM29_DATA;

/*  The form definition collects these tables into a header                  */

static FORM_DEFN form_xiadm29 = {
    xiadm29_blocks,
    xiadm29_fields,
    125,                                /*  Number of blocks in form        */
    31,                                 /*  Number of fields in form        */
    13,                                 /*  Number of actions in form       */
    1895,                               /*  Size of fields                  */
    "xiadm29",                          /*  Name of form                    */
    };

#endif                                  /*  End included file               */
