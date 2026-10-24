--- Utilities/socketxx/socket++/sockstream.h.orig	2024-05-03 12:14:31 UTC
+++ Utilities/socketxx/socket++/sockstream.h
@@ -163,7 +163,7 @@ class MY_API sockbuf: public std::streambuf
             msg_peek            = MSG_PEEK,
             msg_dontroute    = MSG_DONTROUTE
 
-#if !(defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__APPLE__) || defined(__EMSCRIPTEN__) )
+#if !(defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__bsdi__) || defined(__APPLE__) || defined(__EMSCRIPTEN__) )
             ,msg_maxiovlen    = MSG_MAXIOVLEN
 #endif
         };
