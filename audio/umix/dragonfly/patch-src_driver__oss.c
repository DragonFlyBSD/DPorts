--- src/driver_oss.c.orig
+++ src/driver_oss.c
@@ -26,7 +26,7 @@
 /* Hmm not sure about the *BSD includes */
 #if defined(__linux__)
   #include <sys/soundcard.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   #include <sys/soundcard.h>
 #elif defined(__NetBSD__)
   #include <soundcard.h>
