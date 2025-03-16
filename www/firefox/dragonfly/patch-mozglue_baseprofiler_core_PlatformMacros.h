--- mozglue/baseprofiler/core/PlatformMacros.h.orig	Mon Sep 23 18:00:07 2024
+++ mozglue/baseprofiler/core/PlatformMacros.h	Tue Mar
@@ -106,6 +106,11 @@
 #  define GP_ARCH_arm64 1
 #  define GP_OS_freebsd 1
 
+#elif defined(__DragonFly__) && defined(__x86_64__)
+#  define GP_PLAT_amd64_dragonfly 1
+#  define GP_ARCH_amd64 1
+#  define GP_OS_dragonfly 1
+
 #elif (defined(_MSC_VER) || defined(__MINGW32__)) && \
     (defined(_M_IX86) || defined(__i386__))
 #  define GP_PLAT_x86_windows 1
