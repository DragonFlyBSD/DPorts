--- common/JackAudioAdapterFactory.cpp.ori	2021-10-23 18:49:09.387744000 +0200
+++ common/JackAudioAdapterFactory.cpp	2021-10-23 18:48:55.988045000 +0200
@@ -35,7 +35,7 @@
 #define JackPlatformAdapter JackAlsaAdapter
 #endif
 
-#if defined(__sun__) || defined(sun) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__sun__) || defined(sun) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
 #include "JackOSSAdapter.h"
 #define JackPlatformAdapter JackOSSAdapter
 #endif
