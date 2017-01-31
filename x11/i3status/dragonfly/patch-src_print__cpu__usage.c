On DragonFly use long type for metrics to avoid having "CPU -4%" for
cpu_usage { format = "CPU %usage"  }

Likely aplies to all *BSD, but for now just dports.

--- src/print_cpu_usage.c.orig	2017-01-21 15:00:31 UTC
+++ src/print_cpu_usage.c
@@ -33,8 +33,13 @@
 
 #include "i3status.h"
 
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
+static long prev_total = 0;
+static long prev_idle = 0;
+#else
 static int prev_total = 0;
 static int prev_idle = 0;
+#endif
 
 /*
  * Reads the CPU utilization from /proc/stat and returns the usage as a
@@ -45,11 +50,11 @@ void print_cpu_usage(yajl_gen json_gen,
     const char *selected_format = format;
     const char *walk;
     char *outwalk = buffer;
-    int curr_user = 0, curr_nice = 0, curr_system = 0, curr_idle = 0, curr_total;
-    int diff_idle, diff_total, diff_usage;
     bool colorful_output = false;
 
 #if defined(LINUX)
+    int curr_user = 0, curr_nice = 0, curr_system = 0, curr_idle = 0, curr_total;
+    int diff_idle, diff_total, diff_usage;
     static char statpath[512];
     char buf[1024];
     strcpy(statpath, "/proc/stat");
@@ -64,7 +69,9 @@ void print_cpu_usage(yajl_gen json_gen,
     prev_total = curr_total;
     prev_idle = curr_idle;
 #elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
-
+    long curr_user = 0, curr_nice = 0, curr_system = 0, curr_idle = 0, curr_total;
+    long diff_idle, diff_total, diff_usagel;
+    int diff_usage;
 #if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__)
     size_t size;
     long cp_time[CPUSTATES];
@@ -91,7 +98,8 @@ void print_cpu_usage(yajl_gen json_gen,
     curr_total = curr_user + curr_nice + curr_system + curr_idle;
     diff_idle = curr_idle - prev_idle;
     diff_total = curr_total - prev_total;
-    diff_usage = (diff_total ? (1000 * (diff_total - diff_idle) / diff_total + 5) / 10 : 0);
+    diff_usagel = (diff_total ? (1000 * (diff_total - diff_idle) / diff_total + 5) / 10 : 0);
+    diff_usage = diff_usagel;
     prev_total = curr_total;
     prev_idle = curr_idle;
 #else
