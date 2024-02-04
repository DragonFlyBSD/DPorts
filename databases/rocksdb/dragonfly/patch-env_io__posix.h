--- env/io_posix.h.orig	2023-10-10 08:19:53 UTC
+++ env/io_posix.h
@@ -29,7 +29,8 @@
 
 // For non linux platform, the following macros are used only as place
 // holder.
-#if !(defined OS_LINUX) && !(defined CYGWIN) && !(defined OS_AIX) && !(defined OS_FREEBSD)
+#if !(defined OS_LINUX) && !(defined CYGWIN) && !(defined OS_AIX) && !(defined OS_FREEBSD) && \
+    !(defined OS_DRAGONFLYBSD)
 #define POSIX_FADV_NORMAL 0     /* [MC1] no further special treatment */
 #define POSIX_FADV_RANDOM 1     /* [MC1] expect random page refs */
 #define POSIX_FADV_SEQUENTIAL 2 /* [MC1] expect sequential page refs */
