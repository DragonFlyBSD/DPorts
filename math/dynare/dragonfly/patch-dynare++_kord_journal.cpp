--- dynare++/kord/journal.cpp.orig	2017-10-19 21:01:38 UTC
+++ dynare++/kord/journal.cpp
@@ -3,6 +3,8 @@
 
 #include "journal.h"
 #include "kord_exception.h"
+#include <sys/types.h>
+#include <sys/sysctl.h>
 
 #if !defined(__MINGW32__)
 # include <sys/resource.h> 
@@ -112,7 +114,14 @@ return sysconf(_SC_NPROCESSORS_ONLN);
 
 long int SystemResources::availableMemory()
 {
-return pageSize()*sysconf(_SC_AVPHYS_PAGES);
+	long value;
+	size_t len;
+	char *path = "vm.stats.vm.v_free_count";
+
+	if (sysctlbyname(path, &value, &len, NULL, 0) == -1) {
+		return (-1);
+	}
+	return pageSize() * value;
 }
 
 /*:6*/
@@ -126,6 +135,9 @@ double&utime,double&stime,double&elapsed
 long int&idrss,long int&majflt)
 {
 struct timeval now;
+long value;
+size_t len;
+char *path = "vm.stats.vm.v_free_count";
 gettimeofday(&now,NULL);
 elapsed= now.tv_sec-start.tv_sec+(now.tv_usec-start.tv_usec)*1.0e-6;
 
@@ -153,7 +165,11 @@ getloadavg(&load_avg,1);
 load_avg= -1.0;
 #endif
 
-pg_avail= sysconf(_SC_AVPHYS_PAGES);
+	if (sysctlbyname(path, &value, &len, NULL, 0) == -1) {
+		pg_avail = -1;
+	}
+
+	pg_avail = value;
 }
 
 /*:7*/
