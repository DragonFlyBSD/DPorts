--- utils/mgnokiidev.c.orig
+++ utils/mgnokiidev.c
@@ -43,7 +43,7 @@
 #endif
 
 /* See common/data/virtmodem.c for explanation */
-#ifdef	__FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/types.h>
 #  undef	__BSD_VISIBLE
 #  define	__BSD_VISIBLE	1
