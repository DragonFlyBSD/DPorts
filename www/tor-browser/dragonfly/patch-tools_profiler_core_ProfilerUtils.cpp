--- tools/profiler/core/ProfilerUtils.cpp.orig	2026-09-04 00:01:31 UTC
+++ tools/profiler/core/ProfilerUtils.cpp
@@ -76,7 +76,16 @@ ProfilerThreadId profiler_current_thread_id() {
 // ------------------------------------------------------- FreeBSD
 #  elif defined(XP_FREEBSD)
 
-#    include <sys/thr.h>
+#    if defined(__DragonFly__)
+// DragonFly has no <sys/thr.h>/thr_self; identify the thread by its
+// pthread pointer, which fits in the FreeBSD `long` ThreadIdType.
+#      include <pthread.h>
+ProfilerThreadId profiler_current_thread_id() {
+  return ProfilerThreadId::FromNativeId(
+      reinterpret_cast<long>(pthread_self()));
+}
+#    else
+#      include <sys/thr.h>
 
 ProfilerThreadId profiler_current_thread_id() {
   long id;
@@ -85,6 +94,7 @@ ProfilerThreadId profiler_current_thread_id() {
   }
   return ProfilerThreadId::FromNativeId(id);
 }
+#    endif
 
 // ------------------------------------------------------- Others
 #  else
