--- mozglue/baseprofiler/public/ProfilerPlatformMacros.h.orig	2026-09-04 00:01:19 UTC
+++ mozglue/baseprofiler/public/ProfilerPlatformMacros.h
@@ -29,6 +29,7 @@
 #undef GP_PLAT_arm64_windows
 #undef GP_PLAT_amd64_freebsd
 #undef GP_PLAT_arm64_freebsd
+#undef GP_PLAT_amd64_dragonfly
 #undef GP_PLAT_unknown
 
 #undef GP_ARCH_x86
@@ -43,6 +44,7 @@
 #undef GP_OS_darwin
 #undef GP_OS_windows
 #undef GP_OS_freebsd
+#undef GP_OS_dragonfly
 #undef GP_OS_unknown
 
 // We test __ANDROID__ before __linux__ because __linux__ is defined on both
@@ -112,6 +114,11 @@
 #  define GP_PLAT_arm64_freebsd 1
 #  define GP_ARCH_arm64 1
 #  define GP_OS_freebsd 1
+
+#elif defined(__DragonFly__) && defined(__x86_64__)
+#  define GP_PLAT_amd64_dragonfly 1
+#  define GP_ARCH_amd64 1
+#  define GP_OS_dragonfly 1
 
 #elif (defined(_MSC_VER) || defined(__MINGW32__)) && \
     (defined(_M_IX86) || defined(__i386__))
