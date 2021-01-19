--- src/platform.h.orig	2018-08-05 07:55:56 UTC
+++ src/platform.h
@@ -45,7 +45,7 @@
 #elif __APPLE__
 	#define DG_PLATFORM DG_PLATFORM_OSX
 
-#elif __FreeBSD__
+#elif __FreeBSD__ || __DragonFly__
 	#define DG_PLATFORM DG_PLATFORM_FREEBSD
 
 #elif __unix__
