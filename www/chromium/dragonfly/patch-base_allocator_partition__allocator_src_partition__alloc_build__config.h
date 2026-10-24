--- base/allocator/partition_allocator/src/partition_alloc/build_config.h.orig	2026-09-09 12:00:00 UTC
+++ base/allocator/partition_allocator/src/partition_alloc/build_config.h
@@ -96,6 +96,8 @@
 #define PA_IS_NETBSD
 #elif defined(__OpenBSD__)
 #define PA_IS_OPENBSD
+#elif defined(__DragonFly__)
+#define PA_IS_DRAGONFLY
 #elif defined(__sun)
 #define PA_IS_SOLARIS
 #elif defined(__QNXNTO__)
@@ -113,7 +115,8 @@
 #define PA_IS_APPLE
 #endif
 
-#if defined(PA_IS_FREEBSD) || defined(PA_IS_NETBSD) || defined(PA_IS_OPENBSD)
+#if defined(PA_IS_FREEBSD) || defined(PA_IS_NETBSD) || defined(PA_IS_OPENBSD) || \
+    defined(PA_IS_DRAGONFLY)
 #define PA_IS_BSD
 #endif
 
@@ -121,7 +124,8 @@
     defined(PA_IS_IOS) || defined(PA_IS_LINUX) || defined(PA_IS_CHROMEOS) || \
     defined(PA_IS_MAC) || defined(PA_IS_NETBSD) || defined(PA_IS_OPENBSD) || \
     defined(PA_IS_QNX) || defined(PA_IS_SOLARIS) ||                          \
-    PA_BUILDFLAG(IS_ANDROID) || PA_BUILDFLAG(IS_CHROMEOS)
+    PA_BUILDFLAG(IS_ANDROID) || PA_BUILDFLAG(IS_CHROMEOS) ||                 \
+    defined(PA_IS_DRAGONFLY)
 #define PA_IS_POSIX
 #endif
 
@@ -461,6 +465,13 @@
 #endif
 #undef PA_IS_OPENBSD
 
+#if defined(PA_IS_DRAGONFLY)
+#define PA_BUILDFLAG_INTERNAL_IS_DRAGONFLY() (1)
+#else
+#define PA_BUILDFLAG_INTERNAL_IS_DRAGONFLY() (0)
+#endif
+#undef PA_IS_DRAGONFLY
+
 #if defined(PA_IS_POSIX)
 #define PA_BUILDFLAG_INTERNAL_IS_POSIX() (1)
 #else
