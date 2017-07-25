--- source/creator/creator.c.orig	2017-02-16 10:05:13.000000000 +0200
+++ source/creator/creator.c
@@ -91,7 +91,7 @@
 
 #include <signal.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <floatingpoint.h>
 #endif
 
@@ -344,7 +344,7 @@ int main(
 	}
 #endif
 	
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	fpsetmask(0);
 #endif
 
