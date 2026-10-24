--- common/data/virtmodem.c.orig
+++ common/data/virtmodem.c
@@ -49,7 +49,7 @@
 #endif
 
 /* same for FreeBSD */
-#ifdef	__FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/types.h>
 #  undef	__BSD_VISIBLE
 #  define	__BSD_VISIBLE	1
