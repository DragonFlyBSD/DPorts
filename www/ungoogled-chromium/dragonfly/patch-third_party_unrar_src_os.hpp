diff --git third_party/unrar/src/os.hpp third_party/unrar/src/os.hpp
index 278e3c923f32..e54444229e34 100644
--- third_party/unrar/src/os.hpp
+++ third_party/unrar/src/os.hpp
@@ -178,7 +178,7 @@
 #define SAVE_LINKS
 #endif
 
-#if defined(__linux) || defined(__FreeBSD__)
+#if defined(__linux) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #define USE_LUTIMES
 #endif
