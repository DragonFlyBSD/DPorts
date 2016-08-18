--- tools/openmp/runtime/src/kmp_platform.h.orig	2016-01-05 01:20:26.000000000 +0200
+++ tools/openmp/runtime/src/kmp_platform.h
@@ -19,6 +19,7 @@
 #define KMP_OS_LINUX    0
 #define KMP_OS_FREEBSD  0
 #define KMP_OS_NETBSD   0
+#define KMP_OS_DRAGONFLY 0
 #define KMP_OS_DARWIN   0
 #define KMP_OS_WINDOWS  0
 #define KMP_OS_CNK      0
@@ -55,16 +56,21 @@
 # define KMP_OS_NETBSD 1
 #endif
 
+#if ( defined __DragonFly__ )
+# undef KMP_OS_DRAGONFLY
+# define KMP_OS_DRAGONFLY 1
+#endif
+
 #if ( defined __bgq__ )
 # undef KMP_OS_CNK
 # define KMP_OS_CNK 1
 #endif
 
-#if (1 != KMP_OS_LINUX + KMP_OS_FREEBSD + KMP_OS_NETBSD + KMP_OS_DARWIN + KMP_OS_WINDOWS)
+#if (1 != KMP_OS_LINUX + KMP_OS_FREEBSD + KMP_OS_NETBSD + KMP_OS_DRAGONFLY + KMP_OS_DARWIN + KMP_OS_WINDOWS)
 # error Unknown OS
 #endif
 
-#if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_DARWIN
+#if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_DRAGONFLY || KMP_OS_DARWIN
 # undef KMP_OS_UNIX
 # define KMP_OS_UNIX 1
 #endif
