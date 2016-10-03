--- client_bw.h.orig	2016-09-18 20:21:43 UTC
+++ client_bw.h
@@ -39,7 +39,7 @@
 
 class ClientBW
 {
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     int32 fd;
     char * mmapAddr;
 #endif
