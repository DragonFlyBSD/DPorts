--- src/config/selectplatformconfig.h.intermediate	2017-12-30 04:05:29 UTC
+++ src/config/selectplatformconfig.h
@@ -19,7 +19,7 @@
 
 #ifndef MAXR_PLATFORM_CONFIG
 
-#if (defined(linux) || defined(__linux) || defined(__linux__) || defined(__GNU__) || defined(__GLIBC__) || defined(__FreeBSD__)) && !defined(_CRAYC)
+#if (defined(linux) || defined(__linux) || defined(__linux__) || defined(__GNU__) || defined(__GLIBC__) || defined(__FreeBSD__) || defined __DragonFly__) && !defined(_CRAYC)
 #   define MAXR_PLATFORM_CONFIG "config/platform/linux.h"
 #elif defined(__CYGWIN__)
 #   define MAXR_PLATFORM_CONFIG "config/platform/cygwin.h"
