--- openconnect-internal.h.orig	2022-10-19 21:01:44.412217000 +0200
+++ openconnect-internal.h	2022-10-19 21:02:08.981659000 +0200
@@ -136,7 +136,7 @@
 #endif
 
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 extern char **environ;
 #endif
 
