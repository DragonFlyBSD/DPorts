--- tkUnixPort.h.orig	2001-10-13 03:25:10.000000000 +0200
+++ tkUnixPort.h	2012-12-31 19:49:43.369671000 +0100
@@ -124,7 +124,9 @@
  * file does it explicitly.
  */
 
+#if !defined(__DragonFly__)
 extern int errno;
+#endif
 
 /*
  * Define "NBBY" (number of bits per byte) if it's not already defined.
