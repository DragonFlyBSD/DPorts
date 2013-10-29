--- tools/omusrmsg.c.orig	2013-08-30 16:30:41.000000000 +0000
+++ tools/omusrmsg.c
@@ -144,7 +144,8 @@ ENDdbgPrintInstInfo
  */
 #ifdef OS_BSD
 /* Since version 900007, FreeBSD has a POSIX compliant <utmpx.h> */
-#if defined(__FreeBSD__) && (__FreeBSD_version >= 900007)
+#if defined(__DragonFly__) || \
+   (defined(__FreeBSD__) && (__FreeBSD_version >= 900007))
 #  define setutent(void) setutxent(void)
 #  define getutent(void) getutxent(void)
 #  define endutent(void) endutxent(void)
