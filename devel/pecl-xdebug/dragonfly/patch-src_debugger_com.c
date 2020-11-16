--- src/debugger/com.c.orig	2020-09-28 10:23:47 UTC
+++ src/debugger/com.c
@@ -87,7 +87,7 @@ static int xdebug_create_socket_unix(con
 #if !WIN32 && !WINNT
 
 /* For OSX and FreeBSD */
-#if !defined(SOL_TCP) && defined(IPPROTO_TCP) && (defined(__APPLE__) || defined(__FreeBSD__))
+#if !defined(SOL_TCP) && defined(IPPROTO_TCP) && (defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__))
 # define SOL_TCP IPPROTO_TCP
 #endif
 #if !defined(TCP_KEEPIDLE) && defined(TCP_KEEPALIVE) && defined(__APPLE__)
