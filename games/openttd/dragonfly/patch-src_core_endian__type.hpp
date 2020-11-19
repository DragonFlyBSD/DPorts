--- src/core/endian_type.hpp.orig	2020-08-09 17:56:38 UTC
+++ src/core/endian_type.hpp
@@ -33,6 +33,13 @@
 #	else
 #		define TTD_ENDIAN TTD_BIG_ENDIAN
 #	endif
+#elif defined(__DragonFly__) || defined(__FreeBSD__)
+#	include <sys/endian.h>
+#	if _BYTE_ORDER == _LITTLE_ENDIAN
+#		define TTD_ENDIAN TTD_LITTLE_ENDIAN
+#	else
+#		define TTD_ENDIAN TTD_BIG_ENDIAN
+#	endif
 #elif defined(__OpenBSD__)
 #	include <endian.h>
 #	if BYTE_ORDER == LITTLE_ENDIAN
