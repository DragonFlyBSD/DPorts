--- node/Constants.hpp.orig	2020-12-01 00:33:39 UTC
+++ node/Constants.hpp
@@ -65,7 +65,7 @@
 #include <machine/endian.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #ifndef __UNIX_LIKE__
 #define __UNIX_LIKE__
 #endif
