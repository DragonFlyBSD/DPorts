--- folly/portability/Unistd.h.orig	2022-10-20 14:37:20.607799000 +0200
+++ folly/portability/Unistd.h	2022-10-20 14:37:29.907586000 +0200
@@ -20,7 +20,7 @@
 
 #include <unistd.h>
 
-#if defined(__APPLE__)
+#if defined(__APPLE__) || defined(__DragonFly__)
 using off64_t = off_t;
 
 off64_t lseek64(int fh, off64_t off, int orig);
