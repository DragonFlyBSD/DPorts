--- include/swoole_config.h.orig	2019-09-25 07:04:17 UTC
+++ include/swoole_config.h
@@ -41,7 +41,7 @@
 
 #define SW_SOCKET_OVERFLOW_WAIT    100
 #define SW_SOCKET_MAX_DEFAULT      65536
-#if defined(__MACH__) || defined(__FreeBSD__)
+#if defined(__MACH__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define SW_SOCKET_BUFFER_SIZE      262144
 #else
 #define SW_SOCKET_BUFFER_SIZE      8388608
