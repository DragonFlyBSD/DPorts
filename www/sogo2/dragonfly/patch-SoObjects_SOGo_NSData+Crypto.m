--- SoObjects/SOGo/NSData+Crypto.m.orig	2016-07-06 14:37:54.000000000 +0300
+++ SoObjects/SOGo/NSData+Crypto.m
@@ -23,7 +23,7 @@
  * Boston, MA 02111-1307, USA.
  */
 
-#if !defined(__OpenBSD__) && !defined(__FreeBSD__)
+#if !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <crypt.h>
 #endif
 
