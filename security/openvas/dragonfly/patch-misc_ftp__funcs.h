--- misc/ftp_funcs.h.orig
+++ misc/ftp_funcs.h
@@ -15,7 +15,7 @@
 #include <arpa/inet.h>
 #include <sys/param.h>
 #include <sys/socket.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
