--- folly/portability/Unistd.h.orig	2024-08-17 19:15:47.809479000 +0200
+++ folly/portability/Unistd.h	2024-08-17 19:16:02.849730000 +0200
@@ -20,7 +20,7 @@
 
 #include <unistd.h>
 
-#if defined(__APPLE__) || defined(__EMSCRIPTEN__)
+#if defined(__APPLE__) || defined(__EMSCRIPTEN__) || defined(__DragonFly__)
 using off64_t = off_t;
 
 off64_t lseek64(int fh, off64_t off, int orig);
