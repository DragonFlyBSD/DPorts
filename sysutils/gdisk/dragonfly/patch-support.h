--- support.h.orig	2021-01-13 22:14:27 UTC
+++ support.h
@@ -10,13 +10,22 @@
 
 #define GPTFDISK_VERSION "1.0.6"
 
+#if defined(__DragonFly__)
+#define lseek64 lseek
+#endif
+
 #if defined (__FreeBSD__) || defined (__FreeBSD_kernel__) || defined (__APPLE__)
 // Darwin (Mac OS) & FreeBSD: disk IOCTLs are different, and there is no lseek64
 #include <sys/disk.h>
 #define lseek64 lseek
 #endif
 
-#if defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
+#if defined (__DragonFly__)
+//#include <sys/diskslice.h>
+#define lseek64 lseek
+#endif
+
+#if defined (__DragonFly__) || defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
 #define DEFAULT_GPT_TYPE 0xA503
 #endif
 
