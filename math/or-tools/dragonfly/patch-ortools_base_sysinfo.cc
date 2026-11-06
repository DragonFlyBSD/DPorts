--- ortools/base/sysinfo.cc.orig
+++ ortools/base/sysinfo.cc
@@ -18,7 +18,7 @@
 #include <mach/mach_init.h>
 #include <mach/task.h>
 #elif (defined(__FreeBSD__) || defined(__NetBSD__) || \
-       defined(__OpenBSD__))  // [Free,Net,Open]BSD
+       defined(__OpenBSD__) || defined(__DragonFly__))  // [Free,Net,Open]BSD
 #include <sys/resource.h>
 #include <sys/time.h>
 // Windows
@@ -50,7 +50,7 @@
   return resident_memory;
 }
 #elif defined(__GNUC__) && !defined(__FreeBSD__) && !defined(__NetBSD__) && \
-    !defined(__OpenBSD__) && !defined(__EMSCRIPTEN__) &&                    \
+    !defined(__OpenBSD__) && !defined(__DragonFly__) && !defined(__EMSCRIPTEN__) &&                    \
     !defined(_WIN32)  // Linux
 int64_t GetProcessMemoryUsage() {
   unsigned size = 0;
@@ -64,7 +64,7 @@
   return int64_t{1024} * size;
 }
 #elif (defined(__FreeBSD__) || defined(__NetBSD__) || \
-       defined(__OpenBSD__))  // [Free,Net,Open]BSD
+       defined(__OpenBSD__) || defined(__DragonFly__))  // [Free,Net,Open]BSD
 int64_t GetProcessMemoryUsage() {
   int who = RUSAGE_SELF;
   struct rusage rusage;
