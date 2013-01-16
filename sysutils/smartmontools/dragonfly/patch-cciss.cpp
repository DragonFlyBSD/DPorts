--- cciss.cpp.orig	2012-07-20 19:26:32.000000000 +0200
+++ cciss.cpp	2013-01-16 01:51:17.274010000 +0100
@@ -18,7 +18,7 @@
 #  ifndef be32toh
 #    define be32toh __be32_to_cpu
 #  endif
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/endian.h>
 #  include CISS_LOCATION
 #  define _HAVE_CCISS
