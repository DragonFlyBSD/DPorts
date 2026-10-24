--- folly/portability/Unistd.h.orig
+++ folly/portability/Unistd.h
@@ -20,7 +20,7 @@
 
 #include <unistd.h>
 
-#if defined(__APPLE__) || defined(__EMSCRIPTEN__)
+#if defined(__APPLE__) || defined(__EMSCRIPTEN__) || defined(__DragonFly__)
 typedef off_t off64_t;
 
 off64_t lseek64(int fh, off64_t off, int orig);
