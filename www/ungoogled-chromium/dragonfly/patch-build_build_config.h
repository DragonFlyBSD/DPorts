diff --git build/build_config.h build/build_config.h
index ac021d187375..d616f36c9033 100644
--- build/build_config.h
+++ build/build_config.h
@@ -110,6 +110,8 @@
 #define OS_NETBSD 1
 #elif defined(__OpenBSD__)
 #define OS_OPENBSD 1
+#elif defined(__DragonFly__)
+#define OS_DRAGONFLY 1
 #elif defined(__sun)
 #define OS_SOLARIS 1
 #elif defined(__QNXNTO__)
@@ -132,7 +134,8 @@
 
 // For access to standard BSD features, use OS_BSD instead of a
 // more specific macro.
-#if defined(OS_FREEBSD) || defined(OS_NETBSD) || defined(OS_OPENBSD)
+#if defined(OS_FREEBSD) || defined(OS_NETBSD) || defined(OS_OPENBSD) || \
+    defined(OS_DRAGONFLY)
 #define OS_BSD 1
 #endif
 
@@ -142,7 +145,7 @@
     defined(OS_FREEBSD) || defined(OS_IOS) || defined(OS_LINUX) ||  \
     defined(OS_CHROMEOS) || defined(OS_MAC) || defined(OS_NACL) ||  \
     defined(OS_NETBSD) || defined(OS_OPENBSD) || defined(OS_QNX) || \
-    defined(OS_SOLARIS) || defined(OS_ZOS)
+    defined(OS_SOLARIS) || defined(OS_ZOS) || defined(OS_DRAGONFLY)
 #define OS_POSIX 1
 #endif
 
@@ -249,6 +252,12 @@
 #define BUILDFLAG_INTERNAL_IS_OPENBSD() (0)
 #endif
 
+#if defined(OS_DRAGONFLY)
+#define BUILDFLAG_INTERNAL_IS_DRAGONFLY() (1)
+#else
+#define BUILDFLAG_INTERNAL_IS_DRAGONFLY() (0)
+#endif
+
 #if defined(OS_POSIX)
 #define BUILDFLAG_INTERNAL_IS_POSIX() (1)
 #else
