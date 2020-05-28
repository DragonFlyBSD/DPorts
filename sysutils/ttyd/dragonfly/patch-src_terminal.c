--- src/terminal.c.orig	2020-02-09 08:37:18 UTC
+++ src/terminal.c
@@ -8,7 +8,7 @@
 
 #if defined(__OpenBSD__) || defined(__APPLE__)
 #include <util.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libutil.h>
 #else
 #include <pty.h>
