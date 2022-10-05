--- src/osdep/unix/bsd.c.orig	2022-10-04 20:09:16.779952000 +0200
+++ src/osdep/unix/bsd.c	2022-10-04 20:10:04.178875000 +0200
@@ -15,7 +15,7 @@
 #endif	/* HAVE_SYS_CONSIO_H */
 #endif	/* CONFIG_SYSMOUSE */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <signal.h>
 #endif
 
