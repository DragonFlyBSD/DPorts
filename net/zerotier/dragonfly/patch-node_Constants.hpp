--- node/Constants.hpp.orig	2019-09-22 13:58:13 UTC
+++ node/Constants.hpp
@@ -72,7 +72,7 @@
 #include <machine/endian.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__NetBSD__)
 #ifndef __UNIX_LIKE__
 #define __UNIX_LIKE__
 #endif
