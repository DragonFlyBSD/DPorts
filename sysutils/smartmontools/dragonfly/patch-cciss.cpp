--- cciss.cpp.orig	2019-11-22 19:57:04 UTC
+++ cciss.cpp
@@ -28,7 +28,7 @@
 #  ifndef be32toh
 #    define be32toh __be32_to_cpu
 #  endif
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #  include <sys/endian.h>
 #  include CISS_LOCATION
 #  define _HAVE_CCISS
