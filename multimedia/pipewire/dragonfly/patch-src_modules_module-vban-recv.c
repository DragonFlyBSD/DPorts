--- src/modules/module-vban-recv.c.orig	2023-10-06 09:37:06 UTC
+++ src/modules/module-vban-recv.c
@@ -31,7 +31,7 @@
 
 #include <module-vban/stream.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define ifr_ifindex ifr_index
 #endif
 
