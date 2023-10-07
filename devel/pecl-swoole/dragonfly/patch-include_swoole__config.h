--- include/swoole_config.h.orig	2023-05-11 00:27:10 UTC
+++ include/swoole_config.h
@@ -42,7 +42,7 @@
 #define SW_MAX_SOCKETS_DEFAULT 1024
 
 #define SW_SOCKET_OVERFLOW_WAIT 100
-#if defined(__MACH__) || defined(__FreeBSD__)
+#if defined(__MACH__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define SW_SOCKET_BUFFER_SIZE 262144
 #else
 #define SW_SOCKET_BUFFER_SIZE 8388608
