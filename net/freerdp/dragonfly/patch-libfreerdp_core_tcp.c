--- libfreerdp/core/tcp.c.orig	2018-07-02 13:30:51 UTC
+++ libfreerdp/core/tcp.c
@@ -53,7 +53,7 @@
 #include <sys/filio.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #ifndef SOL_TCP
 #define SOL_TCP	IPPROTO_TCP
 #endif
