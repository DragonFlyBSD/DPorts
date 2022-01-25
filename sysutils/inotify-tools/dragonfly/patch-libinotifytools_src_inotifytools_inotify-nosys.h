--- libinotifytools/src/inotifytools/inotify-nosys.h.orig	2021-09-28 08:39:16 UTC
+++ libinotifytools/src/inotifytools/inotify-nosys.h
@@ -13,7 +13,7 @@
 #include <sys/syscall.h>
 #include <unistd.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define stat64 stat
 #define lstat64 lstat
 #endif
