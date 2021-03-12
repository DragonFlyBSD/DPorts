--- jdk/src/solaris/native/sun/nio/fs/MagicFileTypeDetector.c.orig	2021-01-20 00:41:17 UTC
+++ jdk/src/solaris/native/sun/nio/fs/MagicFileTypeDetector.c
@@ -33,6 +33,8 @@
 
 #ifdef __FreeBSD__
 #define MAGIC_MAJOR_VERSION "4"
+#elif defined(__DragonFly__)
+#define MAGIC_MAJOR_VERSION "2"
 #else
 #define MAGIC_MAJOR_VERSION "1"
 #endif
