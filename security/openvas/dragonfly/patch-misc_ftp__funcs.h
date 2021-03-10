--- misc/ftp_funcs.h.orig	2021-02-01 15:26:51 UTC
+++ misc/ftp_funcs.h
@@ -29,7 +29,7 @@
 #include <arpa/inet.h>
 #include <sys/param.h>
 #include <sys/socket.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
