--- src/libcw/libcw_console.c.orig
+++ src/libcw/libcw_console.c
@@ -60,7 +60,7 @@
 # include <sys/param.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <fcntl.h>
 #include <errno.h>
 #include <assert.h>
