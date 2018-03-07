Add DragonFly support + fix tests (needs actual storage)

--- CPU.xs.orig	2018-03-07 12:16:27.000000000 +0000
+++ CPU.xs
@@ -40,7 +40,7 @@
  #define _have_cpu_clock
  #define _have_cpu_type
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
  #include <sys/sysctl.h>
  #define _have_cpu_type
  #define _have_cpu_clock
@@ -341,7 +341,7 @@ CODE:
     int value = proc_cpuinfo_clock();
     if (value) clock = value;
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     size_t len = sizeof(clock);
     sysctlbyname("hw.clockrate", &clock, &len, NULL, 0);
 #endif
@@ -390,9 +390,11 @@ cpu_type()
 CODE:
 {
     char *value = NULL;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+    char sval[MAX_IDENT_SIZE];
     size_t len = MAX_IDENT_SIZE;
-    sysctlbyname("hw.model", value, &len, NULL, 0);
+    if (sysctlbyname("hw.model", sval, &len, NULL, 0) == 0)
+	value = sval;
 #endif
 #ifdef __linux__
 #if defined __s390__ || defined __s390x__
