--- testing/tox_shell.c.old	2015-08-08 01:32:25.061487000 +0200
+++ testing/tox_shell.c	2015-08-08 01:32:40.031377000 +0200
@@ -35,7 +35,7 @@
 
 #if defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__)
 #include <util.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libutil.h>
 #else
 #include <pty.h>
