--- ortools/base/sysinfo.cc.orig
+++ ortools/base/sysinfo.cc
@@ -17,7 +17,7 @@
 #if defined(__APPLE__) && defined(__GNUC__)  // Mac OS X
 #include <mach/mach_init.h>
 #include <mach/task.h>
-#elif defined(__FreeBSD__)  // FreeBSD
+#elif defined(__FreeBSD__) || defined(__DragonFly__)  // FreeBSD
 #include <sys/resource.h>
 #include <sys/time.h>
 #elif defined(_MSC_VER)  // WINDOWS
@@ -47,7 +47,8 @@
   int64_t resident_memory = t_info.resident_size;
   return resident_memory;
 }
-#elif defined(__GNUC__) && !defined(__FreeBSD__)  // LINUX
+#elif defined(__GNUC__) && !defined(__FreeBSD__) && \
+    !defined(__DragonFly__)  // LINUX
 int64_t GetProcessMemoryUsage() {
   unsigned size = 0;
   char buf[30];
@@ -59,7 +60,7 @@
   fclose(pf);
   return int64_t{1024} * size;
 }
-#elif defined(__FreeBSD__)                        // FreeBSD
+#elif defined(__FreeBSD__) || defined(__DragonFly__)  // FreeBSD
 int64_t GetProcessMemoryUsage() {
   int who = RUSAGE_SELF;
   struct rusage rusage;
