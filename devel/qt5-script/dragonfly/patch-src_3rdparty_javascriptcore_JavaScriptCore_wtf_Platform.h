--- src/3rdparty/javascriptcore/JavaScriptCore/wtf/Platform.h.orig	2014-09-11 10:47:55.000000000 +0000
+++ src/3rdparty/javascriptcore/JavaScriptCore/wtf/Platform.h
@@ -408,7 +408,7 @@
 #endif
 
 /* OS(FREEBSD) - FreeBSD */
-#ifdef __FreeBSD__
+#if defined (__FreeBSD__) || defined(__DragonFly__)
 #define WTF_OS_FREEBSD 1
 #endif
 
