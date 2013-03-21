--- src/cgnstools/cgnsplot/plotwish.c.intermediate	2013-03-21 09:02:20.457366000 +0000
+++ src/cgnstools/cgnsplot/plotwish.c
@@ -20,7 +20,7 @@
  * Sun shared libraries to be used for Tcl.
  */
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 extern int matherr();
 int *tclDummyMathPtr = (int *) matherr;
 #endif /* FreeBSD test */
