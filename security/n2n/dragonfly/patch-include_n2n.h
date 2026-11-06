--- include/n2n.h.orig	2020-08-12 10:18:14 UTC
+++ include/n2n.h
@@ -95,7 +95,7 @@
 #define GRND_NONBLOCK       1
 #endif /* #ifdef __linux__ */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in_systm.h>
 #endif /* #ifdef __FreeBSD__ */
 
