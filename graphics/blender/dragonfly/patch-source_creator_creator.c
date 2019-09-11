--- source/creator/creator.c.orig	2019-07-24 07:41:39 UTC
+++ source/creator/creator.c
@@ -82,7 +82,7 @@
 
 #include <signal.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <floatingpoint.h>
 #endif
 
@@ -341,7 +341,7 @@ int main(int argc,
   }
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   fpsetmask(0);
 #endif
 
