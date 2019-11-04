--- env/io_posix.h.orig	2019-10-02 00:04:43 UTC
+++ env/io_posix.h
@@ -15,7 +15,8 @@
 
 // For non linux platform, the following macros are used only as place
 // holder.
-#if !(defined OS_LINUX) && !(defined CYGWIN) && !(defined OS_AIX)
+#if !(defined OS_LINUX) && !(defined CYGWIN) && !(defined OS_AIX) && \
+    !(defined OS_DRAGONFLYBSD)
 #define POSIX_FADV_NORMAL 0     /* [MC1] no further special treatment */
 #define POSIX_FADV_RANDOM 1     /* [MC1] expect random page refs */
 #define POSIX_FADV_SEQUENTIAL 2 /* [MC1] expect sequential page refs */
