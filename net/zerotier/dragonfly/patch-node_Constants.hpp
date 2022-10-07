--- node/Constants.hpp.orig	2022-10-05 21:34:42.374552000 +0200
+++ node/Constants.hpp	2022-10-05 21:35:39.363267000 +0200
@@ -73,7 +73,7 @@
 #include <machine/endian.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #ifdef ZT_SSO_SUPPORTED
 #define ZT_SSO_ENABLED 0
 #endif
