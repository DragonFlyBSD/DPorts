--- src/subnetcalc.cc.orig	2019-08-05 17:24:52 UTC
+++ src/subnetcalc.cc
@@ -37,7 +37,7 @@
 
 
 
-#ifdef __FreeBSD__   // FreeBSD
+#if defined(__FreeBSD__) || defined(__DragonFly__)   // FreeBSD/DragonFly
 #define s6_addr16 __u6_addr.__u6_addr16
 #define s6_addr32 __u6_addr.__u6_addr32
 #endif
