--- lib/physmem-posix.c.orig	2024-02-18 15:18:43 UTC
+++ lib/physmem-posix.c
@@ -25,6 +25,11 @@
 #include <fcntl.h>
 #include <unistd.h>
 
+/* meh, not sure how accurate this is */
+#ifdef __DragonFly__
+#define O_DSYNC O_DIRECT
+#endif
+
 #ifndef OFF_MAX
 #define OFF_MAX ((((off_t)1 << (sizeof(off_t) * CHAR_BIT - 2)) - 1) * 2 + 1)
 #endif
