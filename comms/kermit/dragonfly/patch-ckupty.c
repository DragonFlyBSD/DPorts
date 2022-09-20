--- ckupty.c.orig	2022-06-01 11:52:12 UTC
+++ ckupty.c
@@ -55,7 +55,7 @@ char *ckptyv = "Pseudoterminal support,
    . HP-UX 8.00 and earlier (no vhangup or ptsname routines)
 */
 #ifndef NO_PTY_XOPEN_SOURCE
-#ifdef __FreeBSD__                      /* bs  20151224 */
+#if !defined(__FreeBSD__) && !defined(__DragonFly__) /* bs  20151224 */
 #define NO_PTY_XOPEN_SOURCE
 #endif /* __FreeBSD__ */
 #endif /* NO_PTY_XOPEN_SOURCE */
@@ -68,6 +68,10 @@ char *ckptyv = "Pseudoterminal support,
 #include "ckcsym.h"
 #include "ckcdeb.h"			/* To pick up NETPTY definition */
 
+#ifdef __DragonFly__
+#include <libutil.h>  /* for openpty() */
+#endif
+
 #ifndef NETPTY				/* Selector for PTY support */
 
 char * ptyver = "No PTY support";
