--- src/porting.cpp.orig	2014-11-24 19:24:31.000000000 +0200
+++ src/porting.cpp
@@ -28,7 +28,7 @@ along with Freeminer.  If not, see <http
 
 #include "porting.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	#include <sys/types.h>
 	#include <sys/sysctl.h>
 #elif defined(_WIN32)
@@ -168,7 +168,7 @@ int getNumberOfProcessors() {
 
 	return sysconf(_SC_NPROCESSORS_ONLN);
 
-#elif defined(__FreeBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__APPLE__)
 
 	unsigned int len, count;
 	len = sizeof(count);
@@ -421,7 +421,7 @@ void initializePaths()
 	/*
 		FreeBSD
 	*/
-	#elif defined(__FreeBSD__)
+	#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 	int mib[4];
 	char buf[BUFSIZ];
