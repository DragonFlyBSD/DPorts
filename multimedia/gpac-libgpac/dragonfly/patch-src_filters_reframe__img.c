For ntohl()

--- src/filters/reframe_img.c.orig	2020-06-16 16:17:17 UTC
+++ src/filters/reframe_img.c
@@ -32,7 +32,7 @@
 #include <windows.h>
 #else
 
-#ifdef GPAC_CONFIG_LINUX
+#if defined(GPAC_CONFIG_LINUX) || defined(__DragonFly__)
 #include <arpa/inet.h>
 #endif
 
