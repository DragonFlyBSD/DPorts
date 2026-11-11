--- main/Helper.cpp.orig
+++ main/Helper.cpp
@@ -48,7 +48,7 @@
 #include <time.h>
 #endif
 
-#if defined(__FreeBSD__) 
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 // Check if OpenBSD or DragonFly need that at well?
 #include <pthread_np.h>
 #ifndef PTHREAD_MAX_MAMELEN_NP
