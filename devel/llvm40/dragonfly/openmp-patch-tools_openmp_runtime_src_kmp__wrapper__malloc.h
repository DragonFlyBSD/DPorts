--- tools/openmp/runtime/src/kmp_wrapper_malloc.h.orig	2015-09-21 23:02:45.000000000 +0300
+++ tools/openmp/runtime/src/kmp_wrapper_malloc.h
@@ -103,7 +103,7 @@
 #if KMP_OS_WINDOWS
     #include <malloc.h>        // Windows* OS: _alloca() declared in "malloc.h".
     #define alloca _alloca     // Allow to use alloca() with no underscore.
-#elif KMP_OS_FREEBSD || KMP_OS_NETBSD
+#elif KMP_OS_DRAGONFLY || KMP_OS_FREEBSD || KMP_OS_NETBSD
     // Declared in "stdlib.h".
 #elif KMP_OS_UNIX
     #include <alloca.h>        // Linux* OS and OS X*: alloc() declared in "alloca".
