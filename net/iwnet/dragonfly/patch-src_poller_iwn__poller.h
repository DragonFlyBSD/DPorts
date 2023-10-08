--- src/poller/iwn_poller.h.orig	2022-09-07 10:03:04 UTC
+++ src/poller/iwn_poller.h
@@ -12,7 +12,7 @@
 
 IW_EXTERN_C_START
 
-#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__APPLE__) || defined(__NetBSD__) || defined(__OpenBSD__)
 #define IWN_KQUEUE
 #endif
 
