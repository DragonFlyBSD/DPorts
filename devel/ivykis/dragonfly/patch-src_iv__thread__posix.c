--- src/iv_thread_posix.c.orig	2013-02-15 04:05:04.000000000 +0200
+++ src/iv_thread_posix.c
@@ -51,6 +51,13 @@
 #include <thread.h>
 #endif
 
+#if defined(__DragonFly__)
+#include <sys/param.h>
+#if __DragonFly_version >= 400709
+#include <sys/lwp.h>
+#endif
+#endif
+
 static unsigned long get_thread_id(void)
 {
 	unsigned long thread_id;
