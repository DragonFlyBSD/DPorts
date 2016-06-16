--- src/platform.h.orig	2010-08-09 21:08:24.000000000 +0300
+++ src/platform.h
@@ -34,6 +34,13 @@
 	#define BAM_PLATFORM_STRING "openbsd"
 #endif
 
+#if defined(__DragonFly__)
+	#define BAM_FAMILY_UNIX
+	#define BAM_FAMILY_STRING "unix"
+	#define BAM_PLATFORM_DRAGONFLY
+	#define BAM_PLATFORM_STRING "dragonfly"
+#endif
+
 #if defined(__LINUX__) || defined(__linux__)
 	#define BAM_FAMILY_UNIX
 	#define BAM_FAMILY_STRING "unix"
