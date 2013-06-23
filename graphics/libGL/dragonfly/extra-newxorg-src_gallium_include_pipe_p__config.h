--- src/gallium/include/pipe/p_config.h.orig	2012-10-24 19:03:59.000000000 +0000
+++ src/gallium/include/pipe/p_config.h
@@ -106,6 +106,13 @@
 #endif
 #endif
 
+#if defined(__sparc__) || defined(__sparc64__)
+#define PIPE_ARCH_SPARC
+#if defined(__sparc64__)
+#define PIPE_ARCH_SPARC_64
+#endif
+#endif
+
 
 /*
  * Endian detection.
@@ -142,7 +149,7 @@
 
 #if defined(PIPE_ARCH_X86) || defined(PIPE_ARCH_X86_64)
 #define PIPE_ARCH_LITTLE_ENDIAN
-#elif defined(PIPE_ARCH_PPC) || defined(PIPE_ARCH_PPC_64)
+#elif defined(PIPE_ARCH_PPC) || defined(PIPE_ARCH_PPC_64) || defined(PIPE_ARCH_SPARC) || defined(PIPE_ARCH_SPARC_64)
 #define PIPE_ARCH_BIG_ENDIAN
 #endif
 
@@ -171,7 +178,7 @@
 #define PIPE_OS_ANDROID
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define PIPE_OS_FREEBSD
 #define PIPE_OS_BSD
 #define PIPE_OS_UNIX
