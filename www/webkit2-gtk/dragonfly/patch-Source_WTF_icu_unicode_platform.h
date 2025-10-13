--- Source/WTF/icu/unicode/platform.h.orig	Mon Aug 19 06:28:38 2024
+++ Source/WTF/icu/unicode/platform.h	Mon Oct
@@ -174,7 +174,7 @@
 #       define U_PLATFORM U_PF_DARWIN
 #   endif
 #elif defined(BSD) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__MirBSD__)
-#   if defined(__FreeBSD__)
+#   if defined(__FreeBSD__) || defined(__DragonFly__)
 #       include <sys/endian.h>
 #   endif
 #   define U_PLATFORM U_PF_BSD
