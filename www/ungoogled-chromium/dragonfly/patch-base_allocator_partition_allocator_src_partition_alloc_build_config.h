diff --git base/allocator/partition_allocator/src/partition_alloc/build_config.h base/allocator/partition_allocator/src/partition_alloc/build_config.h
index 410e7ec222d4..f405cdd92cd8 100644
--- base/allocator/partition_allocator/src/partition_alloc/build_config.h
+++ base/allocator/partition_allocator/src/partition_alloc/build_config.h
@@ -93,6 +93,8 @@
 #define PA_IS_NETBSD
 #elif defined(__OpenBSD__)
 #define PA_IS_OPENBSD
+#elif defined(__DragonFly__)
+#define PA_IS_DRAGONFLY
 #elif defined(__sun)
 #define PA_IS_SOLARIS
 #elif defined(__QNXNTO__)
@@ -110,7 +112,8 @@
 #define PA_IS_APPLE
 #endif
 
-#if defined(PA_IS_FREEBSD) || defined(PA_IS_NETBSD) || defined(PA_IS_OPENBSD)
+#if defined(PA_IS_FREEBSD) || defined(PA_IS_NETBSD) || defined(PA_IS_OPENBSD) || \
+    defined(PA_IS_DRAGONFLY)
 #define PA_IS_BSD
 #endif
 
@@ -118,7 +121,7 @@
     defined(PA_IS_FREEBSD) || defined(PA_IS_IOS) || defined(PA_IS_LINUX) ||  \
     defined(PA_IS_CHROMEOS) || defined(PA_IS_MAC) || defined(PA_IS_NACL) ||  \
     defined(PA_IS_NETBSD) || defined(PA_IS_OPENBSD) || defined(PA_IS_QNX) || \
-    defined(PA_IS_SOLARIS) || PA_BUILDFLAG(IS_CHROMEOS)
+    defined(PA_IS_SOLARIS) || PA_BUILDFLAG(IS_CHROMEOS) || defined(PA_IS_DRAGONFLY)
 #define PA_IS_POSIX
 #endif
 
@@ -472,6 +475,13 @@
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
