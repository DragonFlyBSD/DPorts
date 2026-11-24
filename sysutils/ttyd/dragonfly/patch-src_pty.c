--- src/pty.c.orig
+++ src/pty.c
@@ -12,7 +12,7 @@
 
 #if defined(__OpenBSD__) || defined(__APPLE__)
 #include <util.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libutil.h>
 #else
 #include <pty.h>
