--- src/gallium/include/pipe/p_config.h.orig	2014-08-14 17:22:24 UTC
+++ src/gallium/include/pipe/p_config.h
@@ -81,6 +81,13 @@
 #define PIPE_CC_SUNPRO
 #endif
 
+#if defined(__sparc__) || defined(__sparc64__)
+#define PIPE_ARCH_SPARC
+#if defined(__sparc64__)
+#define PIPE_ARCH_SPARC_64
+#endif
+#endif
+
 
 /*
  * Processor architecture
@@ -200,7 +207,8 @@
 #define PIPE_OS_ANDROID
 #endif
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) \
+ || defined(__DragonFly__)
 #define PIPE_OS_FREEBSD
 #define PIPE_OS_BSD
 #define PIPE_OS_UNIX
