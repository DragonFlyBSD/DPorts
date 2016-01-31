--- src/porting.cpp.orig	2015-08-20 02:02:00 UTC
+++ src/porting.cpp
@@ -25,7 +25,7 @@ with this program; if not, write to the
 
 #include "porting.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	#include <sys/types.h>
 	#include <sys/sysctl.h>
 #elif defined(_WIN32)
@@ -138,7 +138,7 @@ int getNumberOfProcessors()
 
 	return sysconf(_SC_NPROCESSORS_ONLN);
 
-#elif defined(__FreeBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__APPLE__)
 
 	unsigned int len, count;
 	len = sizeof(count);
