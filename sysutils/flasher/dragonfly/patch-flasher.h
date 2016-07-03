--- flasher.h.orig	2005-11-02 13:28:23.000000000 +0200
+++ flasher.h
@@ -38,7 +38,7 @@
   #define SET_LED_STATE KDSETLED
   #define GET_KB_STATE KDGKBLED
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   #include <sys/kbio.h>
   #define GET_LED_STATE KDGETLED
   #define SET_LED_STATE KDSETLED
