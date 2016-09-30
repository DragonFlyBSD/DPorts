--- common/unicode/platform.h.orig	2016-09-30 03:57:59 UTC
+++ common/unicode/platform.h
@@ -159,8 +159,10 @@
 #   else
 #       define U_PLATFORM U_PF_DARWIN
 #   endif
-#elif defined(BSD) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__MirBSD__)
-#   if defined(__FreeBSD__)
+#elif defined(BSD) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) \
+ || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__MirBSD__) \
+ || defined(__DragonFly__)
+#   if defined(__FreeBSD__) || defined(__DragonFly__)
 #       include <sys/endian.h>
 #   endif
 #   define U_PLATFORM U_PF_BSD
