--- src/appleseed/foundation/platform/thread.cpp.orig	2016-09-30 11:36:29.000000000 +0300
+++ src/appleseed/foundation/platform/thread.cpp
@@ -48,7 +48,7 @@
 // Platform headers.
 #if defined __APPLE__
 #include <pthread.h>
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 #include <pthread.h>
 #include <pthread_np.h>
 #elif defined __linux__
@@ -110,7 +110,7 @@ namespace foundation
     }
 
 // FreeBSD.
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 
     void set_current_thread_name(const char* name)
     {
