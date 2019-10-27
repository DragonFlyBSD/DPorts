--- src/utils.c.orig	2016-04-22 06:57:49.000000000 +0300
+++ src/utils.c
@@ -15,7 +15,14 @@
 #include <sys/types.h>
 #include <sys/stat.h>
 #ifndef IS_MINGW
+#ifdef __DragonFly__
+/* XXX hack for conflicting uuid_t */
+#define uuid_t uuid_t_sys
+#endif
 #include <sys/statvfs.h>
+#ifdef __DragonFly__
+#undef uuid_t
+#endif
 #endif
 #include <sys/file.h>
 
