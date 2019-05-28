--- include/lmms_math.h.orig	2019-02-19 01:53:42 UTC
+++ include/lmms_math.h
@@ -34,7 +34,7 @@
 #include <cmath>
 using namespace std;
 
-#if defined (LMMS_BUILD_WIN32) || defined (LMMS_BUILD_APPLE) || defined(LMMS_BUILD_HAIKU)  || defined (__FreeBSD__) || defined(__OpenBSD__)
+#if defined (LMMS_BUILD_WIN32) || defined (LMMS_BUILD_APPLE) || defined(LMMS_BUILD_HAIKU)  || defined (__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #ifndef isnanf
 #define isnanf(x)	isnan(x)
 #endif
