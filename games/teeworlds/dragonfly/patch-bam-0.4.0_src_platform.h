--- ../bam-0.4.0/src/platform.h.orig	2010-08-09 21:08:24.000000000 +0300
+++ ../bam-0.4.0/src/platform.h
@@ -20,6 +20,13 @@
 #endif
 
 /* unix family */
+#if defined(__DragonFly__)
+	#define BAM_FAMILY_UNIX
+	#define BAM_FAMILY_STRING "unix"
+	#define BAM_PLATFORM_DRAGONFLY
+	#define BAM_PLATFORM_STRING "dragonfly"
+#endif
+
 #if defined(__FreeBSD__)
 	#define BAM_FAMILY_UNIX
 	#define BAM_FAMILY_STRING "unix"
