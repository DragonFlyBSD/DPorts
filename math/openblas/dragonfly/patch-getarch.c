--- getarch.c.orig	2015-03-24 20:07:07 UTC
+++ getarch.c
@@ -78,7 +78,7 @@ USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 #ifdef OS_WINDOWS
 #include <windows.h>
 #endif
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -866,7 +866,7 @@ static int get_num_cores(void) {
 
 #ifdef OS_WINDOWS
   SYSTEM_INFO sysinfo;
-#elif defined(__FreeBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__APPLE__) || defined (__DragonFly__)
   int m[2], count;
   size_t len;
 #endif
@@ -880,7 +880,7 @@ static int get_num_cores(void) {
   GetSystemInfo(&sysinfo);
   return sysinfo.dwNumberOfProcessors;
 
-#elif defined(__FreeBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
   m[0] = CTL_HW;
   m[1] = HW_NCPU;
   len = sizeof(int);
