--- jfbuild/include/compat.h.orig
+++ jfbuild/include/compat.h
@@ -111,7 +111,7 @@
 # endif
 # define B_ENDIAN_C_INLINE 1
 
-#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 # include <sys/endian.h>
 # if _BYTE_ORDER == _LITTLE_ENDIAN
 #  define B_LITTLE_ENDIAN 1
