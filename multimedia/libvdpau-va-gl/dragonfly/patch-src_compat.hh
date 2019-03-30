--- src/compat.hh.orig	2016-09-27 14:21:12 UTC
+++ src/compat.hh
@@ -28,11 +28,14 @@
 #include <sys/syscall.h>
 #include <unistd.h>
 
+#ifdef __DragonFly__
+#include <sys/lwp.h>
+#endif
+
 #ifdef __FreeBSD__
 #include <sys/thr.h>
 #endif
 
-
 #if defined(__linux__)
 
 typedef int thread_id_t;
@@ -49,6 +52,22 @@ thread_is_alive(thread_id_t tid)
     return kill(tid, 0) == 0;
 }
 
+#elif defined(__DragonFly__)
+
+typedef lwpid_t thread_id_t;
+
+static inline thread_id_t
+get_current_thread_id()
+{
+    return lwp_gettid();
+}
+
+static inline int
+thread_is_alive(thread_id_t tid)
+{
+    return lwp_kill(-1, tid, 0) == 0;
+}
+
 #elif defined(__FreeBSD__)
 
 typedef long thread_id_t;
