--- sdk/include/mega/http.h.orig	2018-10-02 11:03:00 UTC
+++ sdk/include/mega/http.h
@@ -35,7 +35,7 @@
 #include <ws2tcpip.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
