--- src/third_party/mozjs-60/extract/intl/icu/source/common/unicode/platform.h.orig	2022-11-01 18:21:44 UTC
+++ src/third_party/mozjs-60/extract/intl/icu/source/common/unicode/platform.h
@@ -165,7 +165,7 @@
 #   else
 #       define U_PLATFORM U_PF_DARWIN
 #   endif
-#elif defined(BSD) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__MirBSD__)
+#elif defined(BSD) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__MirBSD__) || defined(__DragonFly__)
 #   if defined(__FreeBSD__)
 #       include <sys/endian.h>
 #   endif
