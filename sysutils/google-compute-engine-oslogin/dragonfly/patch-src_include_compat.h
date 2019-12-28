--- src/include/compat.h.orig	2019-10-18 20:10:43 UTC
+++ src/include/compat.h
@@ -15,7 +15,7 @@
 #ifndef OSLOGIN_COMPAT_H
 #define OSLOGIN_COMPAT_H
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <nsswitch.h>
 
