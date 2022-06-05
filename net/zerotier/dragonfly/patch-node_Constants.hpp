--- node/Constants.hpp.orig	2022-03-10 18:36:31 UTC
+++ node/Constants.hpp
@@ -72,7 +72,8 @@
 #include <machine/endian.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || \
+    defined(__DragonFly__)
 #define OIDC_SUPPORTED 0
 #ifndef __UNIX_LIKE__
 #define __UNIX_LIKE__
