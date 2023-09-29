diff --git tools/gn/src/util/build_config.h tools/gn/src/util/build_config.h
index 668518ba44f..c682566a0da 100644
--- tools/gn/src/util/build_config.h
+++ tools/gn/src/util/build_config.h
@@ -46,6 +46,8 @@
 #define OS_NETBSD 1
 #elif defined(__OpenBSD__)
 #define OS_OPENBSD 1
+#elif defined(__DragonFly__)
+#define OS_DRAGONFLY 1
 #elif defined(__sun)
 #define OS_SOLARIS 1
 #elif defined(__QNXNTO__)
@@ -67,7 +69,8 @@
 
 // For access to standard BSD features, use OS_BSD instead of a
 // more specific macro.
-#if defined(OS_FREEBSD) || defined(OS_NETBSD) || defined(OS_OPENBSD)
+#if defined(OS_FREEBSD) || defined(OS_NETBSD) || defined(OS_OPENBSD) || \
+  defined(OS_DRAGONFLY)
 #define OS_BSD 1
 #endif
 
@@ -77,7 +80,7 @@
     defined(OS_FREEBSD) || defined(OS_LINUX) || defined(OS_MACOSX) || \
     defined(OS_NACL) || defined(OS_NETBSD) || defined(OS_OPENBSD) ||  \
     defined(OS_QNX) || defined(OS_SOLARIS) || defined(OS_HAIKU) || \
-    defined(OS_MSYS) || defined(OS_ZOS) || defined(OS_SERENITY)
+    defined(OS_MSYS) || defined(OS_ZOS) || defined(OS_SERENITY) || defined(OS_DRAGONFLY)
 #define OS_POSIX 1
 #endif
 
