--- src/protocol.c.orig	2019-04-21 02:29:18 UTC
+++ src/protocol.c
@@ -14,7 +14,7 @@
 
 #if defined(__OpenBSD__) || defined(__APPLE__)
 #include <util.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libutil.h>
 #else
 #include <pty.h>
