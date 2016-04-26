/*---------------------------------------------------------------------------
 *  xiadm25.h - HTML form definition
 *
 *  Generated 2000/04/01, 16:13:44 by fxgen 2.0
 *  See Studio on-line help pages at <http://www.imatix.com>.
 *---------------------------------------------------------------------------*/

#ifndef __FORM_XIADM25__
#define __FORM_XIADM25__

#include "sfl.h"
#include "formio.h"


/*  Constants defining size of tables, etc.                                  */

#define XIADM25_MESSAGE_TO_USER             0
#define XIADM25_L_HOST_FILE                 1
#define XIADM25_HOST_FILE                   2
#define XIADM25_L_OVERWRITE                 3
#define XIADM25_OVERWRITE                   4
#define XIADM25_L_HOST_ADDR                 5
#define XIADM25_HOST_ADDR                   6
#define XIADM25_L_HOST_NAME                 7
#define XIADM25_HOST_NAME                   8
#define XIADM25_L_WEBPAGES                  9
#define XIADM25_WEBPAGES                    10
#define XIADM25_L_CGI_BIN                   11
#define XIADM25_CGI_BIN                     12
#define XIADM25_L_FTPROOT                   13
#define XIADM25_FTPROOT                     14
#define XIADM25_L_MAKEDIRS                  15
#define XIADM25_MAKEDIRS                    16
#define XIADM25_L_SUPERUSER                 17
#define XIADM25_SUPERUSER                   18
#define XIADM25_L_SHARELOGS                 19
#define XIADM25_SHARELOGS                   20
#define XIADM25_L_USE_ADMIN                 21
#define XIADM25_USE_ADMIN                   22
#define XIADM25_L_ADMIN_USER                23
#define XIADM25_ADMIN_USER                  24
#define XIADM25_L_ADMIN_PASS                25
#define XIADM25_ADMIN_PASS                  26
#define XIADM25_L_USE_VHWBA                 27
#define XIADM25_USE_VHWBA                   28
#define XIADM25_L_VHWBA_USER                29
#define XIADM25_VHWBA_USER                  30
#define XIADM25_L_VHWBA_PASS                31
#define XIADM25_VHWBA_PASS                  32

/*  This table contains each block in the form                               */

static byte xiadm25_blocks [] = {
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
    /*  <A HREF="/xitami/index4.htm# ... " TARGET="Help" TITLE="Help"        */
    0, 72, 0, '<', 'A', 32, 'H', 'R', 'E', 'F', '=', '"', '/', 'x', 'i',
    't', 'a', 'm', 'i', '/', 'i', 'n', 'd', 'e', 'x', '4', '.', 'h',
    't', 'm', '#', 'c', 'o', 'n', 'f', 'i', 'g', '_', 'c', 'o', 'n',
    's', 'o', 'l', 'e', '"', 32, 'T', 'A', 'R', 'G', 'E', 'T', '=', '"',
    'H', 'e', 'l', 'p', '"', 32, 'T', 'I', 'T', 'L', 'E', '=', '"', 'H',
    'e', 'l', 'p', '"', 10,
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
    /*  <TD ALIGN=CENTER><FONT SIZE=+1>Virtual Host Wizard </FONT>           */
    0, 60, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'C', 'E',
    'N', 'T', 'E', 'R', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z',
    'E', '=', '+', '1', '>', 'V', 'i', 'r', 't', 'u', 'a', 'l', 32, 'H',
    'o', 's', 't', 32, 'W', 'i', 'z', 'a', 'r', 'd', 32, '<', '/', 'F',
    'O', 'N', 'T', '>', 10,
    /*  <TD ALIGN=RIGHT>                                                     */
    0, 18, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'R', 'I',
    'G', 'H', 'T', '>', 10,
    /*  <IMG SRC="/admin/$left.gif" BORDER=0 ALIGN=MIDDLE>                   */
    0, 4, 1, 0, 2, 221,
    /*  !--ACTION console  LABEL="/a ... LLOVER="/admin/consolea.gif"        */
    0, 61, 20, 2, 1, (byte) ((word) console_event / 256), (byte) ((word)
    console_event & 255), 0, 1, 0, 0, 39, 0, '(', 'c', 'o', 'n', 's',
    'o', 'l', 'e', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'c', 'o',
    'n', 's', 'o', 'l', 'e', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm',
    'i', 'n', '/', 'c', 'o', 'n', 's', 'o', 'l', 'e', 'a', '.', 'g',
    'i', 'f', 0, 0,
    /*  !--ACTION halt  LABEL="/admi ...  ROLLOVER="/admin/halta.gif"        */
    0, 52, 20, 2, 1, (byte) ((word) halt_event / 256), (byte) ((word)
    halt_event & 255), 0, 2, 0, 0, 39, 0, '(', 'h', 'a', 'l', 't', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'h', 'a', 'l', 't', '.',
    'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'h', 'a', 'l',
    't', 'a', '.', 'g', 'i', 'f', 0, 0,
    /*  !--ACTION restart  LABEL="/a ... LLOVER="/admin/restarta.gif"        */
    0, 61, 20, 2, 1, (byte) ((word) restart_event / 256), (byte) ((word)
    restart_event & 255), 0, 3, 0, 0, 39, 0, '(', 'r', 'e', 's', 't',
    'a', 'r', 't', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'r', 'e',
    's', 't', 'a', 'r', 't', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm',
    'i', 'n', '/', 'r', 'e', 's', 't', 'a', 'r', 't', 'a', '.', 'g',
    'i', 'f', 0, 0,
    /*  !--ACTION exit  LABEL="/admi ...  ROLLOVER="/admin/exita.gif"        */
    0, 52, 20, 2, 1, (byte) ((word) exit_event / 256), (byte) ((word)
    exit_event & 255), 0, 4, 0, 0, 39, 0, '(', 'e', 'x', 'i', 't', 0,
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
    0, 4, 1, 0, 4, 192,
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 5, 251,
    /*  <HR>                                                                 */
    0, 6, 0, '<', 'H', 'R', '>', 10,
    /*  <H2><A NAME="TOC2">Virtual Host Wizard</A></H2>                      */
    0, 49, 0, '<', 'H', '2', '>', '<', 'A', 32, 'N', 'A', 'M', 'E', '=',
    '"', 'T', 'O', 'C', '2', '"', '>', 'V', 'i', 'r', 't', 'u', 'a',
    'l', 32, 'H', 'o', 's', 't', 32, 'W', 'i', 'z', 'a', 'r', 'd', '<',
    '/', 'A', '>', '<', '/', 'H', '2', '>', 10,
    /*  <TABLE WIDTH="100%">                                                 */
    0, 22, 0, '<', 'T', 'A', 'B', 'L', 'E', 32, 'W', 'I', 'D', 'T', 'H',
    '=', '"', '1', '0', '0', '%', '"', '>', 10,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 39, 0, '<', 'T', 'R', '>', '<', 'T', 'D', 32, 'A', 'L', 'I', 'G',
    'N', '=', 'L', 'E', 'F', 'T', 32, 'V', 'A', 'L', 'I', 'G', 'N', '=',
    'T', 'O', 'P', 32, 'N', 'O', 'W', 'R', 'A', 'P', '>', 10,
    /*  !--FIELD TEXTUAL f328 NAME=L ...  host profile:&nbsp;&nbsp;"         */
    0, 54, 10, 6, 1, 0, 0, '(', 0, '(', 'f', '3', '2', '8', 0, 'C', 'r',
    'e', 'a', 't', 'e', 32, 'v', 'i', 'r', 't', 'u', 'a', 'l', 32, 'h',
    'o', 's', 't', 32, 'p', 'r', 'o', 'f', 'i', 'l', 'e', ':', '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 36, 0, '<', '/', 'T', 'D', '>', '<', 'T', 'D', 32, 'A', 'L', 'I',
    'G', 'N', '=', 'L', 'E', 'F', 'T', 32, 'W', 'I', 'D', 'T', 'H', '=',
    '"', '"', '8', '0', '%', '"', '"', '>', 10,
    /*  !--FIELD TEXTUAL f329 NAME=h ... =30 MAX=80 UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 30, 0, 'P', 'f', '3', '2', '9', 0, 0,
    /*  .cfg extension is assumed                                            */
    0, 27, 0, '.', 'c', 'f', 'g', 32, 'e', 'x', 't', 'e', 'n', 's', 'i',
    'o', 'n', 32, 'i', 's', 32, 'a', 's', 's', 'u', 'm', 'e', 'd', 10,
    /*  </TD></TR>                                                           */
    0, 12, 0, '<', '/', 'T', 'D', '>', '<', '/', 'T', 'R', '>', 10,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 6, 231,
    /*  !--FIELD TEXTUAL f330 NAME=L ... rite existing?&nbsp;&nbsp;"         */
    0, 45, 10, 6, 1, 0, 0, 31, 0, 31, 'f', '3', '3', '0', 0, 'O', 'v',
    'e', 'r', 'w', 'r', 'i', 't', 'e', 32, 'e', 'x', 'i', 's', 't', 'i',
    'n', 'g', '?', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's',
    'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 7, 'H',
    /*  !--FIELD BOOLEAN f331 NAME=o ... e TRUE=yes FALSE=no VALUE=0         */
    0, 17, 15, 0, 1, 'f', '3', '3', '1', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  <TR><TD></TD><TD>                                                    */
    0, 19, 0, '<', 'T', 'R', '>', '<', 'T', 'D', '>', '<', '/', 'T',
    'D', '>', '<', 'T', 'D', '>', 10,
    /*  <HR>                                                                 */
    0, 4, 1, 0, 6, 148,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 6, 231,
    /*  !--FIELD TEXTUAL f332 NAME=L ... ct IP address:&nbsp;&nbsp;"         */
    0, 44, 10, 6, 1, 0, 0, 30, 0, 30, 'f', '3', '3', '2', 0, 'S', 'e',
    'l', 'e', 'c', 't', 32, 'I', 'P', 32, 'a', 'd', 'd', 'r', 'e', 's',
    's', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p',
    ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 7, 'H',
    /*  !--FIELD SELECT f333 NAME=ho ... pe=dynamic 0="No selection"         */
    0, 25, 16, 0, 1, 1, 0, 'f', '3', '3', '3', 0, '0', 0, 'N', 'o', 32,
    's', 'e', 'l', 'e', 'c', 't', 'i', 'o', 'n', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 6, 231,
    /*  !--FIELD TEXTUAL f334 NAME=L ... DNS host name:&nbsp;&nbsp;"         */
    0, 50, 10, 6, 1, 0, 0, '$', 0, '$', 'f', '3', '3', '4', 0, 'O', 'r',
    ',', 32, 'e', 'n', 't', 'e', 'r', 32, 'D', 'N', 'S', 32, 'h', 'o',
    's', 't', 32, 'n', 'a', 'm', 'e', ':', '&', 'n', 'b', 's', 'p', ';',
    '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 7, 'H',
    /*  !--FIELD TEXTUAL f335 NAME=h ... E=50 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '2', 0, '2', 'f', '3', '3', '5', 0, 0,
    /*  <TR><TD></TD><TD>                                                    */
    0, 4, 1, 0, 7, 247,
    /*  <HR>                                                                 */
    0, 4, 1, 0, 6, 148,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 6, 231,
    /*  !--FIELD TEXTUAL f336 NAME=L ... oot directory:&nbsp;&nbsp;"         */
    0, 50, 10, 6, 1, 0, 0, '$', 0, '$', 'f', '3', '3', '6', 0, 'W', 'e',
    'b', 32, 'p', 'a', 'g', 'e', 32, 'r', 'o', 'o', 't', 32, 'd', 'i',
    'r', 'e', 'c', 't', 'o', 'r', 'y', ':', '&', 'n', 'b', 's', 'p',
    ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 7, 'H',
    /*  !--FIELD TEXTUAL f337 NAME=w ... E=50 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '2', 0, '2', 'f', '3', '3', '7', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 6, 231,
    /*  !--FIELD TEXTUAL f338 NAME=L ... bin directory:&nbsp;&nbsp;"         */
    0, 44, 10, 6, 1, 0, 0, 30, 0, 30, 'f', '3', '3', '8', 0, 'C', 'G',
    'I', 45, 'b', 'i', 'n', 32, 'd', 'i', 'r', 'e', 'c', 't', 'o', 'r',
    'y', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p',
    ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 7, 'H',
    /*  !--FIELD TEXTUAL f339 NAME=c ... E=50 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '2', 0, '2', 'f', '3', '3', '9', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 6, 231,
    /*  !--FIELD TEXTUAL f340 NAME=L ... oot directory:&nbsp;&nbsp;"         */
    0, 45, 10, 6, 1, 0, 0, 31, 0, 31, 'f', '3', '4', '0', 0, 'F', 'T',
    'P', 32, 'r', 'o', 'o', 't', 32, 'd', 'i', 'r', 'e', 'c', 't', 'o',
    'r', 'y', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's',
    'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 7, 'H',
    /*  !--FIELD TEXTUAL f341 NAME=f ... E=50 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, '2', 0, '2', 'f', '3', '4', '1', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 6, 231,
    /*  !--FIELD TEXTUAL f342 NAME=L ...  if necessary?&nbsp;&nbsp;"         */
    0, 58, 10, 6, 1, 0, 0, ',', 0, ',', 'f', '3', '4', '2', 0, 'C', 'r',
    'e', 'a', 't', 'e', 32, 'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'i',
    'e', 's', 32, 'i', 'f', 32, 'n', 'e', 'c', 'e', 's', 's', 'a', 'r',
    'y', '?', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p',
    ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 7, 'H',
    /*  !--FIELD BOOLEAN f343 NAME=m ... TRUE=yes FALSE=no VALUE=yes         */
    0, 17, 15, 0, 1, 'f', '3', '4', '3', 0, '1', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 6, 231,
    /*  !--FIELD TEXTUAL f344 NAME=L ... user password:&nbsp;&nbsp;"         */
    0, 45, 10, 6, 1, 0, 0, 31, 0, 31, 'f', '3', '4', '4', 0, 'S', 'u',
    'p', 'e', 'r', 'u', 's', 'e', 'r', 32, 'p', 'a', 's', 's', 'w', 'o',
    'r', 'd', ':', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's',
    'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 7, 'H',
    /*  !--FIELD TEXTUAL f345 NAME=s ... E=20 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 20, 0, 20, 'f', '3', '4', '5', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 6, 231,
    /*  !--FIELD TEXTUAL f346 NAME=L ... ared logfiles?&nbsp;&nbsp;"         */
    0, 47, 10, 6, 1, 0, 0, '!', 0, '!', 'f', '3', '4', '6', 0, 'U', 's',
    'e', 's', 32, 's', 'h', 'a', 'r', 'e', 'd', 32, 'l', 'o', 'g', 'f',
    'i', 'l', 'e', 's', '?', '&', 'n', 'b', 's', 'p', ';', '&', 'n',
    'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 7, 'H',
    /*  !--FIELD BOOLEAN f347 NAME=s ...  TRUE=yes FALSE=no VALUE=no         */
    0, 17, 15, 0, 1, 'f', '3', '4', '7', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 6, 231,
    /*  !--FIELD TEXTUAL f348 NAME=L ...  use full WBA?&nbsp;&nbsp;"         */
    0, 43, 10, 6, 1, 0, 0, 29, 0, 29, 'f', '3', '4', '8', 0, 'C', 'a',
    'n', 32, 'u', 's', 'e', 32, 'f', 'u', 'l', 'l', 32, 'W', 'B', 'A',
    '?', '&', 'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 7, 'H',
    /*  !--FIELD BOOLEAN f349 NAME=u ...  TRUE=yes FALSE=no VALUE=no         */
    0, 17, 15, 0, 1, 'f', '3', '4', '9', 0, '0', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 6, 231,
    /*  !--FIELD TEXTUAL f350 NAME=L ... f so, user id:&nbsp;&nbsp;"         */
    0, 41, 10, 6, 1, 0, 0, 27, 0, 27, 'f', '3', '5', '0', 0, 'I', 'f',
    32, 's', 'o', ',', 32, 'u', 's', 'e', 'r', 32, 'i', 'd', ':', '&',
    'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 7, 'H',
    /*  !--FIELD TEXTUAL f351 NAME=a ... E=20 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 20, 0, 20, 'f', '3', '5', '1', 0, 0,
    /*  !--FIELD TEXTUAL f352 NAME=L ... nbsp;password:&nbsp;&nbsp;"         */
    0, 47, 10, 6, 1, 0, 0, '!', 0, '!', 'f', '3', '5', '2', 0, '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 'p', 'a', 's',
    's', 'w', 'o', 'r', 'd', ':', '&', 'n', 'b', 's', 'p', ';', '&',
    'n', 'b', 's', 'p', ';', 0,
    /*  !--FIELD TEXTUAL f353 NAME=a ... E=20 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 20, 0, 20, 'f', '3', '5', '3', 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 6, 231,
    /*  !--FIELD TEXTUAL f354 NAME=L ... WBA (limited)?&nbsp;&nbsp;"         */
    0, 51, 10, 6, 1, 0, 0, '%', 0, '%', 'f', '3', '5', '4', 0, 'C', 'a',
    'n', 32, 'u', 's', 'e', 32, 'V', 'H', 32, 'W', 'B', 'A', 32, '(',
    'l', 'i', 'm', 'i', 't', 'e', 'd', ')', '?', '&', 'n', 'b', 's',
    'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 7, 'H',
    /*  !--FIELD BOOLEAN f355 NAME=u ... TRUE=yes FALSE=no VALUE=yes         */
    0, 17, 15, 0, 1, 'f', '3', '5', '5', 0, '1', 0, 'y', 'e', 's', 0,
    'n', 'o', 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  <TR><TD ALIGN=LEFT VALIGN=TOP NOWRAP>                                */
    0, 4, 1, 0, 6, 231,
    /*  !--FIELD TEXTUAL f356 NAME=L ... f so, user id:&nbsp;&nbsp;"         */
    0, 41, 10, 6, 1, 0, 0, 27, 0, 27, 'f', '3', '5', '6', 0, 'I', 'f',
    32, 's', 'o', ',', 32, 'u', 's', 'e', 'r', 32, 'i', 'd', ':', '&',
    'n', 'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 0,
    /*  </TD><TD ALIGN=LEFT WIDTH=""80%"">                                   */
    0, 4, 1, 0, 7, 'H',
    /*  !--FIELD TEXTUAL f357 NAME=v ... E=20 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 20, 0, 20, 'f', '3', '5', '7', 0, 0,
    /*  !--FIELD TEXTUAL f358 NAME=L ... nbsp;password:&nbsp;&nbsp;"         */
    0, 47, 10, 6, 1, 0, 0, '!', 0, '!', 'f', '3', '5', '8', 0, '&', 'n',
    'b', 's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', 'p', 'a', 's',
    's', 'w', 'o', 'r', 'd', ':', '&', 'n', 'b', 's', 'p', ';', '&',
    'n', 'b', 's', 'p', ';', 0,
    /*  !--FIELD TEXTUAL f359 NAME=v ... E=20 MAX=? UPPER=0 VALUE=""         */
    0, 14, 10, 0, 1, 0, 0, 20, 0, 20, 'f', '3', '5', '9', 0, 0,
    /*  <TR><TD></TD><TD>                                                    */
    0, 4, 1, 0, 7, 247,
    /*  <P>                                                                  */
    0, 5, 0, '<', 'P', '>', 10,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  <TR><TD></TD><TD ALIGN=LEFT WIDTH=""80%"">                           */
    0, 44, 0, '<', 'T', 'R', '>', '<', 'T', 'D', '>', '<', '/', 'T',
    'D', '>', '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'L', 'E',
    'F', 'T', 32, 'W', 'I', 'D', 'T', 'H', '=', '"', '"', '8', '0', '%',
    '"', '"', '>', 10,
    /*  !--ACTION create  LABEL="Cre ... vent CONFIRM="" TYPE=BUTTON         */
    0, 28, 20, 0, 1, (byte) ((word) define_event / 256), (byte) ((word)
    define_event & 255), 0, 5, 0, 0, 0, 0, 0, 'c', 'r', 'e', 'a', 't',
    'e', 0, 'C', 'r', 'e', 'a', 't', 'e', 0, 0, 0,
    /*  !--ACTION cancel  LABEL="Can ... vent CONFIRM="" TYPE=BUTTON         */
    0, 28, 20, 0, 1, (byte) ((word) back_event / 256), (byte) ((word)
    back_event & 255), 0, 6, 0, 0, 0, 0, 0, 'c', 'a', 'n', 'c', 'e',
    'l', 0, 'C', 'a', 'n', 'c', 'e', 'l', 0, 0, 0,
    /*  </TD></TR>                                                           */
    0, 4, 1, 0, 7, 155,
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 5, 251,
    /*  </FORM>                                                              */
    0, 9, 0, '<', '/', 'F', 'O', 'R', 'M', '>', 10,
    /*  <HR>                                                                 */
    0, 4, 1, 0, 6, 148,
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
    0, 4, 1, 0, 5, 251,
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

static FIELD_DEFN xiadm25_fields [] = {
    { 0, 1629, 80 },                    /*  message_to_user                 */
    { 82, 1808, 40 },                   /*  l_host_file                     */
    { 124, 1902, 80 },                  /*  host_file                       */
    { 206, 1967, 31 },                  /*  l_overwrite                     */
    { 239, 2020, 1 },                   /*  overwrite                       */
    { 242, 2078, 30 },                  /*  l_host_addr                     */
    { 274, 2130, 3 },                   /*  host_addr                       */
    { 279, 2169, 36 },                  /*  l_host_name                     */
    { 317, 2227, 50 },                  /*  host_name                       */
    { 369, 2267, 36 },                  /*  l_webpages                      */
    { 407, 2325, 50 },                  /*  webpages                        */
    { 459, 2353, 30 },                  /*  l_cgi_bin                       */
    { 491, 2405, 50 },                  /*  cgi_bin                         */
    { 543, 2433, 31 },                  /*  l_ftproot                       */
    { 576, 2486, 50 },                  /*  ftproot                         */
    { 628, 2514, 44 },                  /*  l_makedirs                      */
    { 674, 2580, 1 },                   /*  makedirs                        */
    { 677, 2611, 31 },                  /*  l_superuser                     */
    { 710, 2664, 20 },                  /*  superuser                       */
    { 732, 2692, 33 },                  /*  l_sharelogs                     */
    { 767, 2747, 1 },                   /*  sharelogs                       */
    { 770, 2778, 29 },                  /*  l_use_admin                     */
    { 801, 2829, 1 },                   /*  use_admin                       */
    { 804, 2860, 27 },                  /*  l_admin_user                    */
    { 833, 2909, 20 },                  /*  admin_user                      */
    { 855, 2925, 33 },                  /*  l_admin_pass                    */
    { 890, 2974, 20 },                  /*  admin_pass                      */
    { 912, 3002, 37 },                  /*  l_use_vhwba                     */
    { 951, 3061, 1 },                   /*  use_vhwba                       */
    { 954, 3092, 27 },                  /*  l_vhwba_user                    */
    { 983, 3141, 20 },                  /*  vhwba_user                      */
    { 1005, 3157, 33 },                 /*  l_vhwba_pass                    */
    { 1040, 3206, 20 },                 /*  vhwba_pass                      */
    { 1062, 0, 0 },                     /*  -- sentinel --                  */
    };

/*  The data of a form is a list of attributes and fields                    */

typedef struct {
    byte   message_to_user_a    ;
    char   message_to_user      [80 + 1];
    byte   l_host_file_a        ;
    char   l_host_file          [40 + 1];
    byte   host_file_a          ;
    char   host_file            [80 + 1];
    byte   l_overwrite_a        ;
    char   l_overwrite          [31 + 1];
    byte   overwrite_a          ;
    char   overwrite            [1 + 1];
    byte   l_host_addr_a        ;
    char   l_host_addr          [30 + 1];
    byte   host_addr_a          ;
    char   host_addr            [3 + 1];
    byte   l_host_name_a        ;
    char   l_host_name          [36 + 1];
    byte   host_name_a          ;
    char   host_name            [50 + 1];
    byte   l_webpages_a         ;
    char   l_webpages           [36 + 1];
    byte   webpages_a           ;
    char   webpages             [50 + 1];
    byte   l_cgi_bin_a          ;
    char   l_cgi_bin            [30 + 1];
    byte   cgi_bin_a            ;
    char   cgi_bin              [50 + 1];
    byte   l_ftproot_a          ;
    char   l_ftproot            [31 + 1];
    byte   ftproot_a            ;
    char   ftproot              [50 + 1];
    byte   l_makedirs_a         ;
    char   l_makedirs           [44 + 1];
    byte   makedirs_a           ;
    char   makedirs             [1 + 1];
    byte   l_superuser_a        ;
    char   l_superuser          [31 + 1];
    byte   superuser_a          ;
    char   superuser            [20 + 1];
    byte   l_sharelogs_a        ;
    char   l_sharelogs          [33 + 1];
    byte   sharelogs_a          ;
    char   sharelogs            [1 + 1];
    byte   l_use_admin_a        ;
    char   l_use_admin          [29 + 1];
    byte   use_admin_a          ;
    char   use_admin            [1 + 1];
    byte   l_admin_user_a       ;
    char   l_admin_user         [27 + 1];
    byte   admin_user_a         ;
    char   admin_user           [20 + 1];
    byte   l_admin_pass_a       ;
    char   l_admin_pass         [33 + 1];
    byte   admin_pass_a         ;
    char   admin_pass           [20 + 1];
    byte   l_use_vhwba_a        ;
    char   l_use_vhwba          [37 + 1];
    byte   use_vhwba_a          ;
    char   use_vhwba            [1 + 1];
    byte   l_vhwba_user_a       ;
    char   l_vhwba_user         [27 + 1];
    byte   vhwba_user_a         ;
    char   vhwba_user           [20 + 1];
    byte   l_vhwba_pass_a       ;
    char   l_vhwba_pass         [33 + 1];
    byte   vhwba_pass_a         ;
    char   vhwba_pass           [20 + 1];
    byte   back_a;
    byte   console_a;
    byte   halt_a;
    byte   restart_a;
    byte   exit_a;
    byte   create_a;
    byte   cancel_a;
    } XIADM25_DATA;

/*  The form definition collects these tables into a header                  */

static FORM_DEFN form_xiadm25 = {
    xiadm25_blocks,
    xiadm25_fields,
    131,                                /*  Number of blocks in form        */
    33,                                 /*  Number of fields in form        */
    7,                                  /*  Number of actions in form       */
    1062,                               /*  Size of fields                  */
    "xiadm25",                          /*  Name of form                    */
    };

#endif                                  /*  End included file               */
