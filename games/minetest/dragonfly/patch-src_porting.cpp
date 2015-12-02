--- src/porting.cpp.orig	2015-02-18 19:50:37.000000000 +0200
+++ src/porting.cpp
@@ -25,7 +25,7 @@
 
 #include "porting.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	#include <sys/types.h>
 	#include <sys/sysctl.h>
 #elif defined(_WIN32)
@@ -149,7 +149,7 @@
 
 	return sysconf(_SC_NPROCESSORS_ONLN);
 
-#elif defined(__FreeBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__APPLE__)
 
 	unsigned int len, count;
 	len = sizeof(count);
@@ -401,7 +401,7 @@
 	/*
 		FreeBSD
 	*/
-	#elif defined(__FreeBSD__)
+	#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 	int mib[4];
 	char buf[BUFSIZ];
