--- apps/extra.c.orig	2003-09-15 15:17:55 UTC
+++ apps/extra.c
@@ -75,7 +75,7 @@ char
 bcrypt_vol (int tempvar)
 {
   char c;
-#if defined(__FreeBSD__) | defined (__NetBSD__) | defined (__OpenBSD__) 
+#if defined(__FreeBSD__) | defined (__NetBSD__) | defined (__OpenBSD__) | defined (__DragonFly__)
   struct termios conf;
 #else
   struct termio conf;
@@ -86,7 +86,7 @@ bcrypt_vol (int tempvar)
 /*
  * Take the configuration
  */
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   ioctl (0, TIOCGETA, &conf);
 #else
   ioctl (0, TCGETA, &conf);
@@ -104,7 +104,7 @@ bcrypt_vol (int tempvar)
 /*
  * Initialisation of the new configuration
  */ 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   ioctl (0, TIOCSETA, &conf);
 #else
   ioctl (0, TCSETA, &conf);
@@ -122,7 +122,7 @@ bcrypt_vol (int tempvar)
 /*
  * Validation of the old configuration
  */
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   ioctl (0, TIOCSETA, &conf);
 #else
   ioctl (0, TCSETA, &conf);
