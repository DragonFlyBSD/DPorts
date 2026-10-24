--- src/3rdparty/chromium/third_party/dav1d/libdav1d/src/thread.h.orig	2026-05-08 07:54:08 UTC
+++ src/3rdparty/chromium/third_party/dav1d/libdav1d/src/thread.h
@@ -137,6 +137,9 @@ static inline int pthread_cond_broadcast(pthread_cond_
 #define _SYS_PARAM_H_
 #include <sys/types.h>
 #endif
+#if defined(__DragonFly__)
+#include <pthread_np.h>
+#endif
 #if HAVE_PTHREAD_NP_H
 #include <pthread_np.h>
 #endif
@@ -169,6 +172,12 @@ static inline void dav1d_set_thread_name(const char *c
 
 static inline void dav1d_set_thread_name(const char *const name) {
     pthread_setname_np(pthread_self(), name);
+}
+
+#elif defined(__DragonFly__)
+
+static inline void dav1d_set_thread_name(const char *const name) {
+    pthread_set_name_np(pthread_self(), name);
 }
 
 #elif HAVE_PTHREAD_SET_NAME_NP
