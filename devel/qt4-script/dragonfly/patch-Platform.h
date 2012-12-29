--- src/3rdparty/javascriptcore/JavaScriptCore/wtf/Platform.h.orig	2012-04-26 21:46:22.000000000 +0200
+++ src/3rdparty/javascriptcore/JavaScriptCore/wtf/Platform.h	2012-12-29 13:24:36.606024000 +0100
@@ -375,7 +375,7 @@
 #endif
 
 /* OS(FREEBSD) - FreeBSD */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define WTF_OS_FREEBSD 1
 #endif
 
