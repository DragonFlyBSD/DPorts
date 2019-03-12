--- src/print_cpu_usage.c.orig	2018-05-11 12:10:46.000000000 +0300
+++ src/print_cpu_usage.c
@@ -34,11 +34,19 @@
 #include "i3status.h"
 
 struct cpu_usage {
+#ifdef __DragonFly__
+    long user;
+    long nice;
+    long system;
+    long idle;
+    long total;
+#else
     int user;
     int nice;
     int system;
     int idle;
     int total;
+#endif
 };
 
 static int cpu_count = 0;
@@ -56,7 +64,12 @@
     const char *walk;
     char *outwalk = buffer;
     struct cpu_usage curr_all = {0, 0, 0, 0, 0};
+#ifdef __DragonFly__
+    long diff_idle, diff_total, diff_usage1;
+    int diff_usage;
+#else
     int diff_idle, diff_total, diff_usage;
+#endif
     bool colorful_output = false;
 
 #if defined(LINUX)
@@ -123,7 +136,12 @@
     curr_all.total = curr_all.user + curr_all.nice + curr_all.system + curr_all.idle;
     diff_idle = curr_all.idle - prev_all.idle;
     diff_total = curr_all.total - prev_all.total;
+#ifdef __DragonFly__
+    diff_usage1 = (diff_total ? (1000 * (diff_total - diff_idle) / diff_total + 5) / 10 : 0);
+    diff_usage = diff_usage1;
+#else
     diff_usage = (diff_total ? (1000 * (diff_total - diff_idle) / diff_total + 5) / 10 : 0);
+#endif
     prev_all = curr_all;
 #else
     goto error;
