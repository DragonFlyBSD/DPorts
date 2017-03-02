--- galerautils/src/gu_fdesc.cpp.orig	2014-03-27 17:49:30.000000000 +0200
+++ galerautils/src/gu_fdesc.cpp
@@ -13,7 +13,7 @@ extern "C" {
 #include "gu_limits.h"
 }
 
-#if !defined(_XOPEN_SOURCE) && !defined(__APPLE__)
+#if !defined(_XOPEN_SOURCE) && !defined(__APPLE__) && !defined(__DragonFly__)
 #define _XOPEN_SOURCE 600
 #endif
 
@@ -186,6 +186,8 @@ namespace gu
 
 #if defined(__APPLE__)
         if (0 != fcntl (fd_, F_SETSIZE, size_) && 0 != ftruncate (fd_, size_))
+#elif defined(__DragonFly__)
+        if (0 != ftruncate (fd_, size_))
 #else
         if (0 != posix_fallocate (fd_, start, diff))
 #endif
