diff --git third_party/afl/src/afl-fuzz.c third_party/afl/src/afl-fuzz.c
index a787f9a685a..f240282989e 100644
--- third_party/afl/src/afl-fuzz.c
+++ third_party/afl/src/afl-fuzz.c
@@ -58,9 +58,10 @@
 #include <sys/ioctl.h>
 #include <sys/file.h>
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined (__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined (__OpenBSD__) || \
+  defined(__DragonFly__)
 #  include <sys/sysctl.h>
-#endif /* __APPLE__ || __FreeBSD__ || __OpenBSD__ */
+#endif /* __APPLE__ || __FreeBSD__ || __OpenBSD__ || __DragonFly__ */
 
 /* For systems that have sched_setaffinity; right now just Linux, but one
    can hope... */
@@ -3531,7 +3532,8 @@ static double get_runnable_processes(void) {
 
   static double res;
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined (__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined (__OpenBSD__) || \
+  defined(__DragonFly__)
 
   /* I don't see any portable sysctl or so that would quickly give us the
      number of runnable processes; the 1-minute load average can be a
@@ -3571,7 +3573,7 @@ static double get_runnable_processes(void) {
 
   }
 
-#endif /* ^(__APPLE__ || __FreeBSD__ || __OpenBSD__) */
+#endif /* ^(__APPLE__ || __FreeBSD__ || __OpenBSD__) || __DragonFly__ */
 
   return res;
 
@@ -7347,7 +7349,8 @@ static void get_core_count(void) {
 
   u32 cur_runnable = 0;
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined (__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined (__OpenBSD__) || \
+  defined(__DragonFly__)
 
   size_t s = sizeof(cpu_core_count);
 
@@ -7386,19 +7389,20 @@ static void get_core_count(void) {
 
 #endif /* ^HAVE_AFFINITY */
 
-#endif /* ^(__APPLE__ || __FreeBSD__ || __OpenBSD__) */
+#endif /* ^(__APPLE__ || __FreeBSD__ || __OpenBSD__) || __DragonFly__ */
 
   if (cpu_core_count > 0) {
 
     cur_runnable = (u32)get_runnable_processes();
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined (__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined (__OpenBSD__) || \
+  defined(__DragonFly__)
 
     /* Add ourselves, since the 1-minute average doesn't include that yet. */
 
     cur_runnable++;
 
-#endif /* __APPLE__ || __FreeBSD__ || __OpenBSD__ */
+#endif /* __APPLE__ || __FreeBSD__ || __OpenBSD__ || __DragonFly__ */
 
     OKF("You have %u CPU core%s and %u runnable tasks (utilization: %0.0f%%).",
         cpu_core_count, cpu_core_count > 1 ? "s" : "",
