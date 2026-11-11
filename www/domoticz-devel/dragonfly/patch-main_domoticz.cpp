--- main/domoticz.cpp.orig
+++ main/domoticz.cpp
@@ -333,12 +333,12 @@
 		pathName[pathNameSize] = '\0';
 		return pathNameSize;
 	}
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	#include <sys/sysctl.h>
 	static size_t getExecutablePathName(char* pathName, size_t pathNameCapacity)
 	{
 		int mib[4];
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		mib[0] = CTL_KERN;
 		mib[1] = KERN_PROC;
 		mib[2] = KERN_PROC_PATHNAME;
