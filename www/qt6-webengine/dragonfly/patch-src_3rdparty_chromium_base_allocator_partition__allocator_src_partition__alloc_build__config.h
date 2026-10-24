--- src/3rdparty/chromium/base/allocator/partition_allocator/src/partition_alloc/build_config.h.orig	2026-05-08 07:54:08 UTC
+++ src/3rdparty/chromium/base/allocator/partition_allocator/src/partition_alloc/build_config.h
@@ -96,6 +96,8 @@
 #define PA_IS_FUCHSIA
 #elif defined(__FreeBSD__)
 #define PA_IS_FREEBSD
+#elif defined(__DragonFly__)
+#define PA_IS_DRAGONFLY
 #elif defined(__NetBSD__)
 #define PA_IS_NETBSD
 #elif defined(__OpenBSD__)
@@ -117,14 +119,15 @@
 #define PA_IS_APPLE
 #endif
 
-#if defined(PA_IS_FREEBSD) || defined(PA_IS_NETBSD) || defined(PA_IS_OPENBSD)
+#if defined(PA_IS_FREEBSD) || defined(PA_IS_DRAGONFLY) || \
+    defined(PA_IS_NETBSD) || defined(PA_IS_OPENBSD)
 #define PA_IS_BSD
 #endif
 
 #if defined(PA_IS_AIX) || defined(PA_IS_ASMJS) || defined(PA_IS_FREEBSD) ||  \
-    defined(PA_IS_IOS) || defined(PA_IS_LINUX) || defined(PA_IS_CHROMEOS) || \
-    defined(PA_IS_MAC) || defined(PA_IS_NETBSD) || defined(PA_IS_OPENBSD) || \
-    defined(PA_IS_QNX) || defined(PA_IS_SOLARIS) ||                          \
+    defined(PA_IS_DRAGONFLY) || defined(PA_IS_IOS) || defined(PA_IS_LINUX) || \
+    defined(PA_IS_CHROMEOS) || defined(PA_IS_MAC) || defined(PA_IS_NETBSD) || \
+    defined(PA_IS_OPENBSD) || defined(PA_IS_QNX) || defined(PA_IS_SOLARIS) || \
     PA_BUILDFLAG(IS_ANDROID) || PA_BUILDFLAG(IS_CHROMEOS)
 #define PA_IS_POSIX
 #endif
@@ -422,6 +425,13 @@
 #define PA_BUILDFLAG_INTERNAL_IS_FREEBSD() (0)
 #endif
 #undef PA_IS_FREEBSD
+
+#if defined(PA_IS_DRAGONFLY)
+#define PA_BUILDFLAG_INTERNAL_IS_DRAGONFLY() (1)
+#else
+#define PA_BUILDFLAG_INTERNAL_IS_DRAGONFLY() (0)
+#endif
+#undef PA_IS_DRAGONFLY
 
 #if defined(PA_IS_FUCHSIA)
 #define PA_BUILDFLAG_INTERNAL_IS_FUCHSIA() (1)
