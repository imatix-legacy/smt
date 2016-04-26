/*---------------------------------------------------------------------------
 *  xiadm27.h - HTML form definition
 *
 *  Generated 2000/04/01, 16:13:44 by fxgen 2.0
 *  See Studio on-line help pages at <http://www.imatix.com>.
 *---------------------------------------------------------------------------*/

#ifndef __FORM_XIADM27__
#define __FORM_XIADM27__

#include "sfl.h"
#include "formio.h"


/*  Constants defining size of tables, etc.                                  */

#define XIADM27_MESSAGE_TO_USER             0
#define XIADM27_L_USER_NAME                 1
#define XIADM27_USER_NAME                   2
#define XIADM27_L_PASSWORD                  3
#define XIADM27_PASSWORD                    4
#define XIADM27_L_ROOTDIR                   5
#define XIADM27_ROOTDIR                     6
#define XIADM27_L_ALIASES                   7
#define XIADM27_ALIASES                     8
#define XIADM27_L_NONAME5                   9
#define XIADM27_L_ACCESS_GET                10
#define XIADM27_ACCESS_GET                  11
#define XIADM27_L_ACCESS_PUT                12
#define XIADM27_ACCESS_PUT                  13
#define XIADM27_L_ACCESS_UPLOAD             14
#define XIADM27_ACCESS_UPLOAD               15
#define XIADM27_L_ACCESS_DELETE             16
#define XIADM27_ACCESS_DELETE               17
#define XIADM27_L_ACCESS_MKDIR              18
#define XIADM27_ACCESS_MKDIR                19
#define XIADM27_L_ACCESS_RMDIR              20
#define XIADM27_ACCESS_RMDIR                21
#define XIADM27_L_CHOOSER                   22
#define XIADM27_CHOOSER                     23
#define XIADM27_L_USE_QUOTAS                24
#define XIADM27_USE_QUOTAS                  25
#define XIADM27_L_SOFT_QUOTA                26
#define XIADM27_SOFT_QUOTA                  27
#define XIADM27_L_HARD_QUOTA                28
#define XIADM27_HARD_QUOTA                  29
#define XIADM27_L_PIPE                      30
#define XIADM27_PIPE                        31

/*  This table contains each block in the form                               */

static byte xiadm27_blocks [] = {
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
    /*  !--ACTION save  LABEL="/admi ...  ROLLOVER="/admin/savea.gif"        */
    0, 52, 20, 2, 1, (byte) ((word) save_event / 256), (byte) ((word)
    save_event & 255), 0, 2, 0, 0, 39, 0, '(', 's', 'a', 'v', 'e', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 's', 'a', 'v', 'e', '.',
    'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 's', 'a', 'v',
    'e', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  !--ACTION delete  LABEL="/ad ... OLLOVER="/admin/deletea.gif"        */
    0, 58, 20, 2, 1, (byte) ((word) delete_event / 256), (byte) ((word)
    delete_event & 255), 0, 3, 0, 0, 39, 0, '(', 'd', 'e', 'l', 'e',
    't', 'e', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'd', 'e', 'l',
    'e', 't', 'e', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n',
    '/', 'd', 'e', 'l', 'e', 't', 'e', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  !--ACTION default  LABEL="/a ... LLOVER="/admin/defaulta.gif"        */
    0, 61, 20, 2, 1, (byte) ((word) default_event / 256), (byte) ((word)
    default_event & 255), 0, 4, 0, 0, 39, 0, '(', 'd', 'e', 'f', 'a',
    'u', 'l', 't', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'd', 'e',
    'f', 'a', 'u', 'l', 't', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm',
    'i', 'n', '/', 'd', 'e', 'f', 'a', 'u', 'l', 't', 'a', '.', 'g',
    'i', 'f', 0, 0,
    /*  !--ACTION undo  LABEL="/admi ...  ROLLOVER="/admin/undoa.gif"        */
    0, 52, 20, 2, 1, (byte) ((word) undo_event / 256), (byte) ((word)
    undo_event & 255), 0, 5, 0, 0, 39, 0, '(', 'u', 'n', 'd', 'o', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'u', 'n', 'd', 'o', '.',
    'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'u', 'n', 'd',
    'o', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  !--ACTION first  LABEL="/adm ... ROLLOVER="/admin/firsta.gif"        */
    0, 55, 20, 2, 1, (byte) ((word) first_event / 256), (byte) ((word)
    first_event & 255), 0, 6, 0, 0, 39, 0, '(', 'f', 'i', 'r', 's', 't',
    0, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'f', 'i', 'r', 's', 't',
    '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'f', 'i',
    'r', 's', 't', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  !--ACTION next  LABEL="/admi ...  ROLLOVER="/admin/nexta.gif"        */
    0, 52, 20, 2, 1, (byte) ((word) next_event / 256), (byte) ((word)
    next_event & 255), 0, 7, 0, 0, 39, 0, '(', 'n', 'e', 'x', 't', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'n', 'e', 'x', 't', '.',
    'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'n', 'e', 'x',
    't', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  <A HREF="/xitami/index4.htm# ... " TARGET="Help" TITLE="Help"        */
    0, 74, 0, '<', 'A', 32, 'H', 'R', 'E', 'F', '=', '"', '/', 'x', 'i',
    't', 'a', 'm', 'i', '/', 'i', 'n', 'd', 'e', 'x', '4', '.', 'h',
    't', 'm', '#', 'c', 'o', 'n', 'f', 'i', 'g', '_', 'f', 't', 'p',
    '_', 'u', 's', 'e', 'r', 's', '"', 32, 'T', 'A', 'R', 'G', 'E', 'T',
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
    /*  <TD ALIGN=CENTER><FONT SIZE= ...  FTP User Properties </FONT>        */
    0, 72, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'C', 'E',
    'N', 'T', 'E', 'R', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z',
    'E', '=', '+', '1', '>', '#', '(', 'c', 'o', 'n', 'f', 'i', 'g',
    ')', 32, 45, 32, 'F', 'T', 'P', 32, 'U', 's', 'e', 'r', 32, 'P',
    'r', 'o', 'p', 'e', 'r', 't', 'i', 'e', 's', 32, '<', '/', 'F', 'O',
    'N', 'T', '>', 10,
    /*  <TD ALIGN=RIGHT>                                                     */
    0, 18, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'R', 'I',
    'G', 'H', 'T', '>', 10,
    /*  <IMG SRC="/admin/$left.gif" BORDER=0 ALIGN=MIDDLE>                   */
    0, 4, 1, 0, 2, 221,
    /*  !--ACTION console  LABEL="/a ... LLOVER="/admin/consolea.gif"        */
    0, 61, 20, 2, 1, (byte) ((word) console_event / 256), (byte) ((word)
    console_event & 255), 0, 8, 0, 0, 39, 0, '(', 'c', 'o', 'n', 's',
    'o', 'l', 'e', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'c', 'o',
    'n', 's', 'o', 'l', 'e', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm',
    'i', 'n', '/', 'c', 'o', 'n', 's', 'o', 'l', 'e', 'a', '.', 'g',
    'i', 'f', 0, 0,
    /*  !--ACTION halt  LABEL="/admi ...  ROLLOVER="/admin/halta.gif"        */
    0, 52, 20, 2, 1, (byte) ((word) halt_event / 256), (byte) ((word)
    halt_event & 255), 0, 9, 0, 0, 39, 0, '(', 'h', 'a', 'l', 't', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'h', 'a', 'l', 't', '.',
    'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'h', 'a', 'l',
    't', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  !--ACTION restart  LABEL="/a ... LLOVER="/admin/restarta.gif"        */
    0, 61, 20, 2, 1, (byte) ((word) restart_event / 256), (byte) ((word)
    restart_event & 255), 0, 10, 0, 0, 39, 0, '(', 'r', 'e', 's', 't',
    'a', 'r', 't', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'r', 'e',
    's', 't', 'a', 'r', 't', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm',
    'i', 'n', '/', 'r', 'e', 's', 't', 'a', 'r', 't', 'a', '.', 'g',
    'i', 'f', 0, 0,
    /*  !--ACTION exit  LABEL="/admi ...  ROLLOVER="/admin/exita.gif"        */
    0, 52, 20, 2, 1, (byte) ((word) exit_event / 256), (byte) ((word)
    exit_event & 255), 0, 11, 0, 0, 39, 0, '(', 'e', 'x', 'i', 't', 0,
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
    0, 4, 1, 0, 6, 'W',
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 7, 146,
    /*  <FONT SIZE=-1>                                                       */
    0, 16, 0, '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z', 'E', '=', 45,
    '1', '>', 10,
    /*  !--ACTION ok  LABEL="Ok" EVE ... event CONFIRM="" TYPE=PLAIN         */
    0, 20, 20, 1, 1, (byte) ((word) save_event / 256), (byte) ((word)
    save_event & 255), 0, 12, 0, 0, 0, 0, 0, 'o', 'k', 0, 'O', 'k', 0,
    0, 0,
    /*  !--ACTION cancel  LABEL="Can ... event CONFIRM="" TYPE=PLAIN         */
    0, 28, 20, 1, 1, (byte) ((word) back_event / 256), (byte) ((word)
    back_event & 255), 0, 13, 0, 0, 0, 0, 0, 'c', 'a', 'n', 'c', 'e',
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
    /*  !--FIELD TEXTUAL f365 NAME=L ... UE="User name:&nbsp;&nbsp;"         */
    0, 36, 10, 6, 1, 0, 0, 22, 0, 22, 'f', '3', '6', '5', 0, 'U', 's',
    'e', 'r', 32, 'n', 'a', 'm', 'e', ':', '&', 'n', 'b', 's', 'p', ';',
    '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 36, 0, '<', '/', 'T', 'D', '>', '<', 'T', 'D', 32, 'A', 'L', 'I',
    'G', 'N', '=', 'L', 'E', 'F', 'T', 32, 'W', 'I', 'D', 'T', 'H', '=',
    '"', '"', '8', '0', '%', '"', '"', '>', 10,
    /*  !--FIELD TEXTUAL f366 NAME=u ... E=40 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '(', 0, '(', 'f', '3', '6', '6', 0, 0,
    /*  </TD></TR>                                                           */
    0, 12, 0, '<', '/', 'T', 'D', '>', '<', '/', 'T', 'R', '>', 10,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 8, 152,
    /*  !--FIELD TEXTUAL f367 NAME=L ... LUE="Password:&nbsp;&nbsp;"         */
    0, 35, 10, 6, 1, 0, 0, 21, 0, 21, 'f', '3', '6', '7', 0, 'P', 'a',
    's', 's', 'w', 'o', 'r', 'd', ':', '&', 'n', 'b', 's', 'p', ';',
    '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 231,
    /*  !--FIELD TEXTUAL f368 NAME=p ... E=40 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '(', 0, '(', 'f', '3', '6', '8', 0, 0,
    /*  Blank=none; -=disabled; *=anonymous                                  */
    0, 37, 0, 'B', 'l', 'a', 'n', 'k', '=', 'n', 'o', 'n', 'e', ';', 32,
    45, '=', 'd', 'i', 's', 'a', 'b', 'l', 'e', 'd', ';', 32, '*', '=',
    'a', 'n', 'o', 'n', 'y', 'm', 'o', 'u', 's', 10,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 29,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 8, 152,
    /*  !--FIELD TEXTUAL f369 NAME=L ... gin directory:&nbsp;&nbsp;"         */
    0, 42, 10, 6, 1, 0, 0, 28, 0, 28, 'f', '3', '6', '9', 0, 'L', 'o',
    'g', 'i', 'n', 32, 'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', ':',
    '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 231,
    /*  !--FIELD TEXTUAL f370 NAME=r ... 40 MAX=100 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '(', 0, 'd', 'f', '3', '7', '0', 0, 0,
    /*  below ftproot, or absolute                                           */
    0, 28, 0, 'b', 'e', 'l', 'o', 'w', 32, 'f', 't', 'p', 'r', 'o', 'o',
    't', ',', 32, 'o', 'r', 32, 'a', 'b', 's', 'o', 'l', 'u', 't', 'e',
    10,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 29,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 8, 152,
    /*  !--FIELD TEXTUAL f371 NAME=L ...  sees aliases?&nbsp;&nbsp;"         */
    0, 44, 10, 6, 1, 0, 0, 30, 0, 30, 'f', '3', '7', '1', 0, 'U', 's',
    'e', 'r', 32, 's', 'e', 'e', 's', 32, 'a', 'l', 'i', 'a', 's', 'e',
    's', '?', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p',
    ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 231,
    /*  !--FIELD BOOLEAN f372 NAME=aliases TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '3', '7', '2', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 29,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 8, 152,
    /*  !--FIELD TEXTUAL f373 NAME=L ... r permissions:&nbsp;&nbsp;"         */
    0, 43, 10, 6, 1, 0, 0, 29, 0, 29, 'f', '3', '7', '3', 0, 'U', 's',
    'e', 'r', 32, 'p', 'e', 'r', 'm', 'i', 's', 's', 'i', 'o', 'n', 's',
    ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 231,
    /*  !--FIELD TEXTUAL f374 NAME=L ... bsp;&nbsp;Get:&nbsp;&nbsp;"         */
    0, 42, 10, 6, 1, 0, 0, 28, 0, 28, 'f', '3', '7', '4', 0, '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 'G', 'e', 't',
    ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  !--FIELD BOOLEAN f375 NAME=a ... t TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '3', '7', '5', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  !--FIELD TEXTUAL f376 NAME=L ... bsp;&nbsp;Put:&nbsp;&nbsp;"         */
    0, 42, 10, 6, 1, 0, 0, 28, 0, 28, 'f', '3', '7', '6', 0, '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 'P', 'u', 't',
    ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  !--FIELD BOOLEAN f377 NAME=a ... t TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '3', '7', '7', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  !--FIELD TEXTUAL f378 NAME=L ... ;&nbsp;Upload:&nbsp;&nbsp;"         */
    0, 45, 10, 6, 1, 0, 0, 31, 0, 31, 'f', '3', '7', '8', 0, '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 'U', 'p', 'l',
    'o', 'a', 'd', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b',
    's', 'p', ';', 0,
    /*  !--FIELD BOOLEAN f379 NAME=a ... d TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '3', '7', '9', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  !--FIELD TEXTUAL f380 NAME=L ... ;&nbsp;Delete:&nbsp;&nbsp;"         */
    0, 45, 10, 6, 1, 0, 0, 31, 0, 31, 'f', '3', '8', '0', 0, '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 'D', 'e', 'l',
    'e', 't', 'e', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b',
    's', 'p', ';', 0,
    /*  !--FIELD BOOLEAN f381 NAME=a ... e TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '3', '8', '1', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  !--FIELD TEXTUAL f382 NAME=L ... p;&nbsp;Mkdir:&nbsp;&nbsp;"         */
    0, 44, 10, 6, 1, 0, 0, 30, 0, 30, 'f', '3', '8', '2', 0, '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 'M', 'k', 'd',
    'i', 'r', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's',
    'p', ';', 0,
    /*  !--FIELD BOOLEAN f383 NAME=a ... r TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '3', '8', '3', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  !--FIELD TEXTUAL f384 NAME=L ... p;&nbsp;Rmdir:&nbsp;&nbsp;"         */
    0, 44, 10, 6, 1, 0, 0, 30, 0, 30, 'f', '3', '8', '4', 0, '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 'R', 'm', 'd',
    'i', 'r', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's',
    'p', ';', 0,
    /*  !--FIELD BOOLEAN f385 NAME=a ... r TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '3', '8', '5', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 29,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 8, 152,
    /*  !--FIELD TEXTUAL f386 NAME=L ... sions chooser:&nbsp;&nbsp;"         */
    0, 46, 10, 6, 1, 0, 0, 32, 0, 32, 'f', '3', '8', '6', 0, 'P', 'e',
    'r', 'm', 'i', 's', 's', 'i', 'o', 'n', 's', 32, 'c', 'h', 'o', 'o',
    's', 'e', 'r', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b',
    's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 231,
    /*  !--FIELD SELECT f387 NAME=ch ... d upload" 5="Download only"         */
    0, 102, 16, 0, 1, 1, 5, 'f', '3', '8', '7', 0, '0', 0, 'L', 'e',
    'a', 'v', 'e', 32, 'u', 'n', 'c', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'F', 'u', 'l', 'l', 32, 'a', 'c', 'c', 'e', 's', 's', 0, 'R', 'e',
    's', 't', 'r', 'i', 'c', 't', 'e', 'd', 32, 'a', 'c', 'c', 'e', 's',
    's', 0, 'F', 'u', 'l', 'l', 32, 'u', 'p', 'l', 'o', 'a', 'd', 0,
    'R', 'e', 's', 't', 'r', 'i', 'c', 't', 'e', 'd', 32, 'u', 'p', 'l',
    'o', 'a', 'd', 0, 'D', 'o', 'w', 'n', 'l', 'o', 'a', 'd', 32, 'o',
    'n', 'l', 'y', 0,
    /*  !--ACTION define  LABEL="Def ... vent CONFIRM="" TYPE=BUTTON         */
    0, 28, 20, 0, 1, (byte) ((word) define_event / 256), (byte) ((word)
    define_event & 255), 0, 14, 0, 0, 0, 0, 0, 'd', 'e', 'f', 'i', 'n',
    'e', 0, 'D', 'e', 'f', 'i', 'n', 'e', 0, 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 29,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 8, 152,
    /*  !--FIELD TEXTUAL f388 NAME=L ... it disk usage?&nbsp;&nbsp;"         */
    0, 43, 10, 6, 1, 0, 0, 29, 0, 29, 'f', '3', '8', '8', 0, 'L', 'i',
    'm', 'i', 't', 32, 'd', 'i', 's', 'k', 32, 'u', 's', 'a', 'g', 'e',
    '?', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 231,
    /*  !--FIELD BOOLEAN f389 NAME=u ... s TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '3', '8', '9', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 29,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 8, 152,
    /*  !--FIELD TEXTUAL f390 NAME=L ... ft quota (Mb):&nbsp;&nbsp;"         */
    0, 45, 10, 6, 1, 0, 0, 31, 0, 31, 'f', '3', '9', '0', 0, 32, 45, 32,
    's', 'o', 'f', 't', 32, 'q', 'u', 'o', 't', 'a', 32, '(', 'M', 'b',
    ')', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p',
    ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 231,
    /*  !--FIELD TEXTUAL f391 NAME=s ... E=8 MAX=10 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 8, 0, 10, 'f', '3', '9', '1', 0, 0,
    /*  !--FIELD TEXTUAL f392 NAME=L ... rd quota (Mb):&nbsp;&nbsp;"         */
    0, 54, 10, 6, 1, 0, 0, '(', 0, '(', 'f', '3', '9', '2', 0, '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 'h', 'a', 'r',
    'd', 32, 'q', 'u', 'o', 't', 'a', 32, '(', 'M', 'b', ')', ':', '&',
    'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  !--FIELD TEXTUAL f393 NAME=h ... E=8 MAX=10 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 8, 0, 10, 'f', '3', '9', '3', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 29,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 8, 152,
    /*  !--FIELD TEXTUAL f394 NAME=L ... Throttle pipe:&nbsp;&nbsp;"         */
    0, 40, 10, 6, 1, 0, 0, 26, 0, 26, 'f', '3', '9', '4', 0, 'T', 'h',
    'r', 'o', 't', 't', 'l', 'e', 32, 'p', 'i', 'p', 'e', ':', '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 8, 231,
    /*  !--FIELD SELECT f395 NAME=pi ... pe=dynamic 0="No selection"         */
    0, 25, 16, 0, 1, 1, 0, 'f', '3', '9', '5', 0, '0', 0, 'N', 'o', 32,
    's', 'e', 'l', 'e', 'c', 't', 'i', 'o', 'n', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 9, 29,
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 7, 146,
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
    0, 4, 1, 0, 7, 146,
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

static FIELD_DEFN xiadm27_fields [] = {
    { 0, 2036, 80 },                    /*  message_to_user                 */
    { 82, 2241, 22 },                   /*  l_user_name                     */
    { 106, 2317, 40 },                  /*  user_name                       */
    { 148, 2353, 21 },                  /*  l_password                      */
    { 171, 2396, 40 },                  /*  password                        */
    { 213, 2463, 28 },                  /*  l_rootdir                       */
    { 243, 2513, 100 },                 /*  rootdir                         */
    { 345, 2571, 30 },                  /*  l_aliases                       */
    { 377, 2623, 1 },                   /*  aliases                         */
    { 380, 2654, 29 },                  /*  l_noname5                       */
    { 411, 2705, 28 },                  /*  l_access_get                    */
    { 441, 2749, 1 },                   /*  access_get                      */
    { 444, 2768, 28 },                  /*  l_access_put                    */
    { 474, 2812, 1 },                   /*  access_put                      */
    { 477, 2831, 31 },                  /*  l_access_upload                 */
    { 510, 2878, 1 },                   /*  access_upload                   */
    { 513, 2897, 31 },                  /*  l_access_delete                 */
    { 546, 2944, 1 },                   /*  access_delete                   */
    { 549, 2963, 30 },                  /*  l_access_mkdir                  */
    { 581, 3009, 1 },                   /*  access_mkdir                    */
    { 584, 3028, 30 },                  /*  l_access_rmdir                  */
    { 616, 3074, 1 },                   /*  access_rmdir                    */
    { 619, 3105, 32 },                  /*  l_chooser                       */
    { 653, 3159, 3 },                   /*  chooser                         */
    { 658, 3305, 29 },                  /*  l_use_quotas                    */
    { 689, 3356, 1 },                   /*  use_quotas                      */
    { 692, 3387, 31 },                  /*  l_soft_quota                    */
    { 725, 3440, 10 },                  /*  soft_quota                      */
    { 737, 3456, 40 },                  /*  l_hard_quota                    */
    { 779, 3512, 10 },                  /*  hard_quota                      */
    { 791, 3540, 26 },                  /*  l_pipe                          */
    { 819, 3588, 3 },                   /*  pipe                            */
    { 824, 0, 0 },                      /*  -- sentinel --                  */
    };

/*  The data of a form is a list of attributes and fields                    */

typedef struct {
    byte   message_to_user_a    ;
    char   message_to_user      [80 + 1];
    byte   l_user_name_a        ;
    char   l_user_name          [22 + 1];
    byte   user_name_a          ;
    char   user_name            [40 + 1];
    byte   l_password_a         ;
    char   l_password           [21 + 1];
    byte   password_a           ;
    char   password             [40 + 1];
    byte   l_rootdir_a          ;
    char   l_rootdir            [28 + 1];
    byte   rootdir_a            ;
    char   rootdir              [100 + 1];
    byte   l_aliases_a          ;
    char   l_aliases            [30 + 1];
    byte   aliases_a            ;
    char   aliases              [1 + 1];
    byte   l_noname5_a          ;
    char   l_noname5            [29 + 1];
    byte   l_access_get_a       ;
    char   l_access_get         [28 + 1];
    byte   access_get_a         ;
    char   access_get           [1 + 1];
    byte   l_access_put_a       ;
    char   l_access_put         [28 + 1];
    byte   access_put_a         ;
    char   access_put           [1 + 1];
    byte   l_access_upload_a    ;
    char   l_access_upload      [31 + 1];
    byte   access_upload_a      ;
    char   access_upload        [1 + 1];
    byte   l_access_delete_a    ;
    char   l_access_delete      [31 + 1];
    byte   access_delete_a      ;
    char   access_delete        [1 + 1];
    byte   l_access_mkdir_a     ;
    char   l_access_mkdir       [30 + 1];
    byte   access_mkdir_a       ;
    char   access_mkdir         [1 + 1];
    byte   l_access_rmdir_a     ;
    char   l_access_rmdir       [30 + 1];
    byte   access_rmdir_a       ;
    char   access_rmdir         [1 + 1];
    byte   l_chooser_a          ;
    char   l_chooser            [32 + 1];
    byte   chooser_a            ;
    char   chooser              [3 + 1];
    byte   l_use_quotas_a       ;
    char   l_use_quotas         [29 + 1];
    byte   use_quotas_a         ;
    char   use_quotas           [1 + 1];
    byte   l_soft_quota_a       ;
    char   l_soft_quota         [31 + 1];
    byte   soft_quota_a         ;
    char   soft_quota           [10 + 1];
    byte   l_hard_quota_a       ;
    char   l_hard_quota         [40 + 1];
    byte   hard_quota_a         ;
    char   hard_quota           [10 + 1];
    byte   l_pipe_a             ;
    char   l_pipe               [26 + 1];
    byte   pipe_a               ;
    char   pipe                 [3 + 1];
    byte   back_a;
    byte   new_a;
    byte   save_a;
    byte   delete_a;
    byte   default_a;
    byte   undo_a;
    byte   first_a;
    byte   next_a;
    byte   console_a;
    byte   halt_a;
    byte   restart_a;
    byte   exit_a;
    byte   ok_a;
    byte   cancel_a;
    byte   define_a;
    } XIADM27_DATA;

/*  The form definition collects these tables into a header                  */

static FORM_DEFN form_xiadm27 = {
    xiadm27_blocks,
    xiadm27_fields,
    116,                                /*  Number of blocks in form        */
    32,                                 /*  Number of fields in form        */
    15,                                 /*  Number of actions in form       */
    824,                                /*  Size of fields                  */
    "xiadm27",                          /*  Name of form                    */
    };

#endif                                  /*  End included file               */
