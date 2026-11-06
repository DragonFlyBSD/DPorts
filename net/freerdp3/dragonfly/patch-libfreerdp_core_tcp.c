--- libfreerdp/core/tcp.c.orig	2026-11-05 10:50:52 UTC
+++ libfreerdp/core/tcp.c
@@ -52,7 +52,7 @@
 #include <sys/select.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #ifndef SOL_TCP
 #define SOL_TCP IPPROTO_TCP
 #endif
