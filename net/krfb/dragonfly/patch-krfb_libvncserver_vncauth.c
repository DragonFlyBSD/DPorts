--- krfb/libvncserver/vncauth.c.orig	2012-11-30 00:32:34.000000000 +0000
+++ krfb/libvncserver/vncauth.c
@@ -21,7 +21,7 @@
  * vncauth.c - Functions for VNC password management and authentication.
  */
 
-#ifdef __STRICT_ANSI__
+#if 0 /* #ifdef __STRICT_ANSI__ */
 #define _BSD_SOURCE
 #define _POSIX_SOURCE
 #define _XOPEN_SOURCE 600
