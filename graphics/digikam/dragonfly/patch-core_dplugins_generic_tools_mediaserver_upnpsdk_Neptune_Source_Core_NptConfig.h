--- core/dplugins/generic/tools/mediaserver/upnpsdk/Neptune/Source/Core/NptConfig.h.orig	2021-07-10 11:29:41 UTC
+++ core/dplugins/generic/tools/mediaserver/upnpsdk/Neptune/Source/Core/NptConfig.h
@@ -132,7 +132,7 @@
 #endif
 
 /* FreeBSD */
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define NPT_CONFIG_HAVE_GETADDRINFO
 #endif
 
