--- libs/pbd/cpus.cc.orig	2017-09-15 20:56:23 UTC
+++ libs/pbd/cpus.cc
@@ -26,7 +26,7 @@
 
 #ifdef __linux__
 #include <unistd.h>
-#elif defined(__APPLE__) || defined(__FreeBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stddef.h>
 #include <sys/types.h>
 #include <sys/sysctl.h>
@@ -55,7 +55,7 @@ hardware_concurrency()
 	int count;
 	size_t size=sizeof(count);
 	return sysctlbyname("hw.physicalcpu",&count,&size,NULL,0)?0:count;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	int count;
 	size_t size=sizeof(count);
 	return sysctlbyname("hw.ncpu",&count,&size,NULL,0)?0:count;
