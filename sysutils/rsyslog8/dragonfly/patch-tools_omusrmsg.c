--- tools/omusrmsg.c.orig	2020-01-13 07:34:24 UTC
+++ tools/omusrmsg.c
@@ -167,7 +167,7 @@ ENDdbgPrintInstInfo
  */
 #ifdef OS_BSD
 /* Since version 900007, FreeBSD has a POSIX compliant <utmpx.h> */
-#if defined(__FreeBSD__) && (__FreeBSD_version >= 900007)
+#if defined(__DragonFly__) || defined(__FreeBSD__)
 #  define setutent(void) setutxent(void)
 #  define getutent(void) getutxent(void)
 #  define endutent(void) endutxent(void)
