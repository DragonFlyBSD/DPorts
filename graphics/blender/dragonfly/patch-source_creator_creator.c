--- source/creator/creator.c.orig	2015-07-02 12:28:14.000000000 +0300
+++ source/creator/creator.c
@@ -132,7 +132,7 @@
 
 #include <signal.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/types.h>
 #  include <floatingpoint.h>
 #  include <sys/rtprio.h>
@@ -1712,7 +1712,7 @@ int main(
 	}
 #endif
 	
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	fpsetmask(0);
 #endif
 
