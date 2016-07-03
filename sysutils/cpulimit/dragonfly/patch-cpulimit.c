--- cpulimit.c.orig	2014-05-25 18:09:17.000000000 +0300
+++ cpulimit.c
@@ -56,6 +56,9 @@
 #include <sys/user.h>
 #endif
 
+#ifdef __DragonFly__
+#define ki_runtime kp_lwp.kl_pctcpu
+#endif
 
 //kernel time resolution (inverse of one jiffy interval) in Hertz
 //i don't know how to detect it, then define to the default (not very clean!)
