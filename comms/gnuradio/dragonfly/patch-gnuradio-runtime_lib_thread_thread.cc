--- gnuradio-runtime/lib/thread/thread.cc.orig
+++ gnuradio-runtime/lib/thread/thread.cc
@@ -19,10 +19,10 @@
 #include <windows.h>
 #elif defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__) ||     \
     defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__) || \
-    defined(__NetBSD__) || defined(__OpenBSD__)
+    defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define __GR_TARGET_BSD__
 #include <pthread.h>
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <pthread_np.h>
 #endif
 #else
@@ -253,7 +253,8 @@
 
     prctl(PR_SET_NAME, name.c_str(), 0, 0, 0);
 #elif defined(__GR_TARGET_BSD__)
-#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
+    defined(__DragonFly__)
     pthread_set_name_np(thread, name.c_str());
 #elif defined(__APPLE__)
     pthread_setname_np(name.c_str());
