--- compat.h.orig	2019-04-17 00:46:12 UTC
+++ compat.h
@@ -15,7 +15,7 @@
 #ifndef OSLOGIN_COMPAT_H
 #define OSLOGIN_COMPAT_H
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <nsswitch.h>
 
