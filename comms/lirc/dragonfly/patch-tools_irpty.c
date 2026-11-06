--- tools/irpty.c.orig	2011-03-25 22:28:18 UTC
+++ tools/irpty.c
@@ -39,7 +39,7 @@
 #if defined (__APPLE__) || defined (__NetBSD__)
 #include <util.h>
 #else
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined (__DragonFly__)
 #include <libutil.h>
 #else
 #include <pty.h>
