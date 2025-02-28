--- src/java.base/bsd/native/libnet/bsd_close.c.ori	Thu Feb 27 09:45:11 2025
+++ src/java.base/bsd/native/libnet/bsd_close.c	Thu Feb 27 09:49:56 2025
@@ -60,7 +60,7 @@ typedef struct {
 /*
  * Signal to unblock thread
  */
-#ifdef __OpenBSD__
+#if defined(__OpenBSD__) || defined(__DragonFly__)
 #define WAKEUP_SIGNAL (SIGIO)
 #else
 #define WAKEUP_SIGNAL (SIGRTMAX - 2)
