--- third_party/ittapi/src/ittnotify/ittnotify_static.c.orig	2023-05-08 19:58:18 UTC
+++ third_party/ittapi/src/ittnotify/ittnotify_static.c
@@ -71,7 +71,7 @@ static const char api_version[] = API_VE
 
 #if ITT_OS==ITT_OS_WIN
 static const char* ittnotify_lib_name = "libittnotify.dll";
-#elif ITT_OS==ITT_OS_LINUX || ITT_OS==ITT_OS_FREEBSD
+#elif ITT_OS==ITT_OS_LINUX || ITT_OS==ITT_OS_FREEBSD || ITT_OS==ITT_OS_DRAGONFLY
 static const char* ittnotify_lib_name = "libittnotify.so";
 #elif ITT_OS==ITT_OS_MAC
 static const char* ittnotify_lib_name = "libittnotify.dylib";
