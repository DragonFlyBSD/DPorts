--- mozglue/baseprofiler/core/ProfilerUtils.cpp.orig	2026-09-04 00:01:19 UTC
+++ mozglue/baseprofiler/core/ProfilerUtils.cpp
@@ -113,8 +113,21 @@ BaseProfilerThreadId profiler_current_thread_id() {
 // ------------------------------------------------------- FreeBSD
 #  elif defined(XP_FREEBSD)
 
-#    include <sys/thr.h>
+#    if defined(__DragonFly__)
+// DragonFly has no <sys/thr.h>/thr_self; identify the thread by its
+// pthread pointer, which fits in the FreeBSD `long` ThreadIdType.
+#      include <pthread.h>
+namespace mozilla::baseprofiler {
 
+BaseProfilerThreadId profiler_current_thread_id() {
+  return BaseProfilerThreadId::FromNativeId(
+      reinterpret_cast<long>(pthread_self()));
+}
+
+}  // namespace mozilla::baseprofiler
+#    else
+#      include <sys/thr.h>
+
 namespace mozilla::baseprofiler {
 
 BaseProfilerThreadId profiler_current_thread_id() {
@@ -126,6 +139,7 @@ BaseProfilerThreadId profiler_current_thread_id() {
 }
 
 }  // namespace mozilla::baseprofiler
+#    endif
 
 // ------------------------------------------------------- Others
 #  else
