--- src/close_fds.c.orig	2026-10-26 03:22:00 UTC
+++ src/close_fds.c
@@ -22,7 +22,7 @@
 
 #include <sys/stat.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define OPEN_FILES_DIR "/dev/fd"
 #else
 #define OPEN_FILES_DIR "/proc/self/fd"
