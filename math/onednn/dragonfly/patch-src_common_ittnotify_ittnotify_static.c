--- src/common/ittnotify/ittnotify_static.c.orig	2021-07-27 16:29:02.609568000 +0200
+++ src/common/ittnotify/ittnotify_static.c	2021-07-27 16:29:29.298959000 +0200
@@ -85,7 +85,7 @@
 
 #if ITT_OS==ITT_OS_WIN
 static const char* ittnotify_lib_name = "libittnotify.dll";
-#elif ITT_OS==ITT_OS_LINUX || ITT_OS==ITT_OS_FREEBSD || ITT_OS==ITT_OS_OPENBSD
+#elif ITT_OS==ITT_OS_LINUX || ITT_OS==ITT_OS_FREEBSD || ITT_OS==ITT_OS_OPENBSD || ITT_OS==ITT_OS_DRAGONFLY
 static const char* ittnotify_lib_name = "libittnotify.so";
 #elif ITT_OS==ITT_OS_MAC
 static const char* ittnotify_lib_name = "libittnotify.dylib";
