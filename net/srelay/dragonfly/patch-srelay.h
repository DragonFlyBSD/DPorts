--- srelay.h.orig	2015-12-26 18:54:55.956871000 +0100
+++ srelay.h	2015-12-26 18:55:35.377062000 +0100
@@ -53,7 +53,7 @@
 #if defined(FREEBSD) || defined(SOLARIS) || defined(MACOSX)
 #include <sys/filio.h>
 #endif
-#if defined(LINUX) || defined(MACOSX)
+#if defined(LINUX) || defined(MACOSX) || defined(FREEBSD)
 #include <sys/ioctl.h>
 #endif
 
