diff --git third_party/unrar/src/os.hpp third_party/unrar/src/os.hpp
index 51d547b0f68..080f1cbc8a9 100644
--- third_party/unrar/src/os.hpp
+++ third_party/unrar/src/os.hpp
@@ -177,7 +177,7 @@
 #define SAVE_LINKS
 #endif
 
-#if defined(__linux) || defined(__FreeBSD__)
+#if defined(__linux) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #define USE_LUTIMES
 #endif
