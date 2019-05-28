--- src/common/run_command.c.orig	2019-04-12 04:20:25 UTC
+++ src/common/run_command.c
@@ -46,7 +46,7 @@
 #include <sys/wait.h>
 #include <unistd.h>
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #define POLLRDHUP POLLHUP
 #endif
 
