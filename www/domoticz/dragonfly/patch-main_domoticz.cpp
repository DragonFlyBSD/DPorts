--- main/domoticz.cpp.orig	2019-05-10 09:37:55 UTC
+++ main/domoticz.cpp
@@ -314,12 +314,12 @@ void daemonize(const char *rundir, const
 		pathName[pathNameSize] = '\0';
 		return pathNameSize;
 	}
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__)
 	#include <sys/sysctl.h>
 	static size_t getExecutablePathName(char* pathName, size_t pathNameCapacity)
 	{
 		int mib[4];
-#ifdef __FreeBSD__
+#if defined(__DragonFly__) || defined(__FreeBSD__)
 		mib[0] = CTL_KERN;
 		mib[1] = KERN_PROC;
 		mib[2] = KERN_PROC_PATHNAME;
