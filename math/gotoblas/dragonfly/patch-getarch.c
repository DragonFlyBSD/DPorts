--- getarch.c.orig	2010-11-05 15:57:49.000000000 +0200
+++ getarch.c
@@ -45,7 +45,7 @@
 #ifdef OS_WINDOWS
 #include <windows.h>
 #endif
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__APPLE__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -590,7 +590,7 @@ static int get_num_cores(void) {
 
 #ifdef OS_WINDOWS
   SYSTEM_INFO sysinfo;
-#elif defined(__FreeBSD__) || defined(__APPLE__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__APPLE__)
   int m[2], count;
   size_t len;
 #endif
@@ -603,7 +603,7 @@ static int get_num_cores(void) {
   GetSystemInfo(&sysinfo);
   return sysinfo.dwNumberOfProcessors;
 
-#elif defined(__FreeBSD__) || defined(__APPLE__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__APPLE__)
   m[0] = CTL_HW;
   m[1] = HW_NCPU;
   len = sizeof(int);
