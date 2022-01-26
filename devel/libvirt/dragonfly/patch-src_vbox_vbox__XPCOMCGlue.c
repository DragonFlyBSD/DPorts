--- src/vbox/vbox_XPCOMCGlue.c.orig	2021-12-01 09:51:11 UTC
+++ src/vbox/vbox_XPCOMCGlue.c
@@ -45,7 +45,7 @@
 VIR_LOG_INIT("vbox.vbox_XPCOMCGlue");
 
 #if defined(__linux__) || defined(__linux_gnu__) || defined(__sun__) || \
-    defined(__FreeBSD__) || defined(__OpenBSD__) || \
+    defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || \
     defined(__FreeBSD_kernel__)
 # define DYNLIB_NAME "VBoxXPCOMC.so"
 #elif defined(__APPLE__)
