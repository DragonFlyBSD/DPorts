--- galerautils/src/gu_fdesc.cpp.orig	2018-08-29 10:14:04 UTC
+++ galerautils/src/gu_fdesc.cpp
@@ -13,7 +13,7 @@ extern "C" {
 #include "gu_limits.h"
 }
 
-#if !defined(_XOPEN_SOURCE) && !defined(__APPLE__)
+#if !defined(_XOPEN_SOURCE) && !defined(__APPLE__) && !defined(__DragonFly__)
 #define _XOPEN_SOURCE 600
 #endif
 
@@ -235,6 +235,9 @@ namespace gu
 #if defined(__APPLE__)
         if (-1 == fcntl (fd_, F_SETSIZE, size_) && -1 == ftruncate (fd_, size_))
         {
+#elif defined(__DragonFly__)
+        if (0 != ftruncate (fd_, size_))
+        {
 #else
         int const ret = posix_fallocate (fd_, start, diff);
         if (0 != ret)
