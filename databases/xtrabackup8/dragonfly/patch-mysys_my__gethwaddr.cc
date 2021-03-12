--- mysys/my_gethwaddr.cc.orig	2020-08-28 21:02:32 UTC
+++ mysys/my_gethwaddr.cc
@@ -51,7 +51,7 @@
 
 #ifndef MAIN
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <net/ethernet.h>
 #include <net/if.h>
