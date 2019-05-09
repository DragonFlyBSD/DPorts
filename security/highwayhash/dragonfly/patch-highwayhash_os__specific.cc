--- highwayhash/os_specific.cc.intermediate	2019-05-07 11:35:17 UTC
+++ highwayhash/os_specific.cc
@@ -32,6 +32,14 @@
 #define OS_WIN 0
 #endif
 
+#ifdef __DragonFly__
+#define OS_DRAGONFLY 1
+#include <sched.h>
+#include <sys/time.h>
+#else
+#define OS_DRAGONFLY 0
+#endif
+
 #ifdef __linux__
 #define OS_LINUX 1
 #include <sched.h>
@@ -108,6 +116,7 @@ void RaiseThreadPriority() {
   CHECK(ok);
   SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST);
   CHECK(ok);
+#elif OS_DRAGONFLY
 #elif OS_LINUX
   // omit: SCHED_RR and SCHED_FIFO with sched_priority max, max-1 and max/2
   // lead to 2-3x runtime and higher variability!
@@ -120,6 +129,8 @@ void RaiseThreadPriority() {
 struct ThreadAffinity {
 #if OS_WIN
   DWORD_PTR mask;
+#elif OS_DRAGONFLY
+  cpu_set_t set;
 #elif OS_LINUX
   cpu_set_t set;
 #elif OS_FREEBSD
@@ -135,7 +146,7 @@ ThreadAffinity* GetThreadAffinity() {
   const BOOL ok = GetProcessAffinityMask(GetCurrentProcess(), &affinity->mask,
                                          &system_affinity);
   CHECK(ok);
-#elif OS_LINUX
+#elif OS_LINUX || OS_DRAGONFLY
   const pid_t pid = 0;  // current thread
   const int err = sched_getaffinity(pid, sizeof(cpu_set_t), &affinity->set);
   CHECK(err == 0);
@@ -170,7 +181,7 @@ void SetThreadAffinity(ThreadAffinity* a
   const HANDLE hThread = GetCurrentThread();
   const DWORD_PTR prev = SetThreadAffinityMask(hThread, affinity->mask);
   CHECK(prev != 0);
-#elif OS_LINUX
+#elif OS_LINUX || OS_DRAGONFLY
   const pid_t pid = 0;  // current thread
   const int err = sched_setaffinity(pid, sizeof(cpu_set_t), &affinity->set);
   CHECK(err == 0);
@@ -198,7 +209,7 @@ std::vector<int> AvailableCPUs() {
       cpus.push_back(cpu);
     }
   }
-#elif OS_LINUX
+#elif OS_LINUX || OS_DRAGONFLY
   for (size_t cpu = 0; cpu < sizeof(cpu_set_t) * 8; ++cpu) {
     if (CPU_ISSET(cpu, &affinity->set)) {
       cpus.push_back(cpu);
@@ -226,7 +237,7 @@ void PinThreadToCPU(const int cpu) {
   ThreadAffinity affinity;
 #if OS_WIN
   affinity.mask = 1ULL << cpu;
-#elif OS_LINUX
+#elif OS_LINUX || OS_DRAGONFLY
   CPU_ZERO(&affinity.set);
   CPU_SET(cpu, &affinity.set);
 #elif OS_FREEBSD
