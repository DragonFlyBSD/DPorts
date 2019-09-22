--- node/Utils.hpp.orig	2019-09-22 13:58:38 UTC
+++ node/Utils.hpp
@@ -38,7 +38,7 @@
 #include <vector>
 #include <map>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #endif
 
@@ -386,7 +386,7 @@ public:
 	{
 #if __BYTE_ORDER == __LITTLE_ENDIAN
 #if defined(__GNUC__)
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		return bswap64(n);
 #elif (!defined(__OpenBSD__))
 		return __builtin_bswap64(n);
@@ -419,7 +419,7 @@ public:
 	{
 #if __BYTE_ORDER == __LITTLE_ENDIAN
 #if defined(__GNUC__)
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		return bswap64(n);
 #elif (!defined(__OpenBSD__))
 		return __builtin_bswap64(n);
