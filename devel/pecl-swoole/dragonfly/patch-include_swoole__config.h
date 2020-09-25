--- include/swoole_config.h.orig	2020-08-30 04:51:37 UTC
+++ include/swoole_config.h
@@ -43,7 +43,7 @@
 
 #define SW_SOCKET_OVERFLOW_WAIT 100
 #define SW_SOCKET_MAX_DEFAULT 65536
-#if defined(__MACH__) || defined(__FreeBSD__)
+#if defined(__MACH__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define SW_SOCKET_BUFFER_SIZE 262144
 #else
 #define SW_SOCKET_BUFFER_SIZE 8388608
