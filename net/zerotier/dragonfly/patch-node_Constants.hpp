--- node/Constants.hpp.orig	2023-09-14 19:09:26 UTC
+++ node/Constants.hpp
@@ -73,7 +73,7 @@
 #include <machine/endian.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #ifdef ZT_SSO_SUPPORTED
 #define ZT_SSO_ENABLED 0
 #endif
