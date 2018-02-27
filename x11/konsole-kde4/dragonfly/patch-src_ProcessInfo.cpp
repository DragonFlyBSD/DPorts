--- src/ProcessInfo.cpp.intermediate	2016-06-23 13:26:49.000000000 +0300
+++ src/ProcessInfo.cpp
@@ -60,10 +60,12 @@
 #include <sys/syslimits.h>
 #   if defined(Q_OS_FREEBSD)
 #   include <libutil.h>
+#   if !defined(__DragonFly__)
 #   include <sys/param.h>
 #   include <sys/queue.h>
 #   include <libprocstat.h>
 #   endif
+#   endif
 #endif
 
 using namespace Konsole;
@@ -684,6 +686,11 @@ private:
 
     virtual bool readEnvironment(int aPid) {
 
+#if defined(__DragonFly__)
+        Q_UNUSED(aPid);
+        // Not supported in DragonFly BSD?
+        return false;
+#else
         struct procstat *prstat = procstat_open_sysctl();
         if (prstat == NULL) {
             return false;
@@ -719,6 +726,7 @@ private:
          procstat_freeenvv(prstat);
          procstat_close(prstat);
          return true;
+#endif
     }
 
     virtual bool readCurrentDir(int aPid) {
