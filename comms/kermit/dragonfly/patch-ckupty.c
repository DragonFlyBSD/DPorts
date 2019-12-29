--- ckupty.c.orig	2017-04-26 15:57:10 UTC
+++ ckupty.c
@@ -54,13 +54,17 @@ char *ckptyv = "Pseudoterminal support,
    . HP-UX 8.00 and earlier (no vhangup or ptsname routines)
 */
 
-#ifndef __FreeBSD__			/* bs  20151224 */
+#if !defined(__FreeBSD__) && !defined(__DragonFly__) /* bs  20151224 */
 #define _XOPEN_SOURCE 500		/* mdw 20140223 */
 #endif /* __FreeBSD__ */		/* bs  20151224 */
 #include <stdlib.h>			/* mdw 20140223 */
 #include "ckcsym.h"
 #include "ckcdeb.h"			/* To pick up NETPTY definition */
 
+#ifdef __DragonFly__
+#include <libutil.h>  /* for openpty() */
+#endif
+
 #ifndef NETPTY				/* Selector for PTY support */
 
 char * ptyver = "No PTY support";
