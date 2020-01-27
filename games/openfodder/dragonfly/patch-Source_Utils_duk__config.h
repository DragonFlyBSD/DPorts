--- Source/Utils/duk_config.h.orig	2019-12-31 20:48:13 UTC
+++ Source/Utils/duk_config.h
@@ -73,7 +73,7 @@
 #endif
 
 /* FreeBSD */
-#if defined(__FreeBSD__) || defined(__FreeBSD)
+#if defined(__FreeBSD__) || defined(__FreeBSD) || defined(__DragonFly__)
 #define DUK_F_FREEBSD
 #endif
 
