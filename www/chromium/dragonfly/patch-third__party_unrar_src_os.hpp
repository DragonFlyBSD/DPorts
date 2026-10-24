diff --git third_party/unrar/src/os.hpp third_party/unrar/src/os.hpp
index 18b755c394ec..03d0a3239151 100644
--- third_party/unrar/src/os.hpp
+++ third_party/unrar/src/os.hpp
@@ -182,7 +182,7 @@
 #define SAVE_LINKS
 #endif
 
-#if defined(__linux) || defined(__FreeBSD__)
+#if defined(__linux) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #define USE_LUTIMES
 #endif
