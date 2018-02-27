--- libvncserver/vncauth.c.intermediate	2014-03-01 08:25:59.919500000 +0000
+++ libvncserver/vncauth.c
@@ -21,7 +21,7 @@
  * vncauth.c - Functions for VNC password management and authentication.
  */
 
-#ifdef __STRICT_ANSI__
+#if 0 /*ifdef __STRICT_ANSI__*/
 #define _BSD_SOURCE
 #define _POSIX_SOURCE
 #define _XOPEN_SOURCE 600
