--- plugins/obs-outputs/net-if.h.orig	2023-06-18 22:05:22 UTC
+++ plugins/obs-outputs/net-if.h
@@ -28,7 +28,7 @@
 
 #ifdef __linux__
 #include <linux/if_link.h>
-#elif __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #ifndef _GNU_SOURCE
 #define _GNU_SOURCE
@@ -44,7 +44,7 @@
 #include <arpa/inet.h>
 #include <sys/socket.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #ifdef ___NET_IF_GNU_SOURCE__
 #undef ___NET_IF_GNU_SOURCE__
 #undef _GNU_SOURCE
