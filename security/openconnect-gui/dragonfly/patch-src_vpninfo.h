--- src/vpninfo.h.intermediate	2019-06-08 10:48:21.000000000 +0000
+++ src/vpninfo.h
@@ -23,7 +23,7 @@
 #ifdef _WIN32
 #include <winsock2.h>
 #endif
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define SOCKET int
 #endif
 
