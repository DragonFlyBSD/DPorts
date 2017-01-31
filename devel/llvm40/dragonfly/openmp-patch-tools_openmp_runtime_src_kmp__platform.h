--- tools/openmp/runtime/src/kmp_platform.h.orig	2016-12-08 11:22:24.000000000 +0200
+++ tools/openmp/runtime/src/kmp_platform.h
@@ -17,6 +17,7 @@
 /* ---------------------- Operating system recognition ------------------- */
 
 #define KMP_OS_LINUX    0
+#define KMP_OS_DRAGONFLY 0
 #define KMP_OS_FREEBSD  0
 #define KMP_OS_NETBSD   0
 #define KMP_OS_DARWIN   0
@@ -45,6 +46,11 @@
 #else
 #endif
 
+#if ( defined __DragonFly__ )
+# undef KMP_OS_DRAGONFLY
+# define KMP_OS_DRAGONFLY 1
+#endif
+
 #if ( defined __FreeBSD__ )
 # undef KMP_OS_FREEBSD
 # define KMP_OS_FREEBSD 1
@@ -60,11 +66,11 @@
 # define KMP_OS_CNK 1
 #endif
 
-#if (1 != KMP_OS_LINUX + KMP_OS_FREEBSD + KMP_OS_NETBSD + KMP_OS_DARWIN + KMP_OS_WINDOWS)
+#if (1 != KMP_OS_LINUX + KMP_OS_DRAGONFLY + KMP_OS_FREEBSD + KMP_OS_NETBSD + KMP_OS_DARWIN + KMP_OS_WINDOWS)
 # error Unknown OS
 #endif
 
-#if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_DARWIN
+#if KMP_OS_LINUX || KMP_OS_DRAGONFLY || KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_DARWIN
 # undef KMP_OS_UNIX
 # define KMP_OS_UNIX 1
 #endif
