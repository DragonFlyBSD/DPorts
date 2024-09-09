diff --git third_party/icu/source/common/unicode/platform.h third_party/icu/source/common/unicode/platform.h
index b7e514442ce..2685a0788fb 100644
--- src/3rdparty/chromium/third_party/icu/source/common/unicode/platform.h
+++ src/3rdparty/chromium/third_party/icu/source/common/unicode/platform.h
@@ -173,8 +173,8 @@
 #   else
 #       define U_PLATFORM U_PF_DARWIN
 #   endif
-#elif defined(BSD) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__MirBSD__)
-#   if defined(__FreeBSD__)
+#elif defined(BSD) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__MirBSD__) || defined(__DragonFly__)
+#   if defined(__FreeBSD__) || defined(__DragonFly__)
 #       include <sys/endian.h>
 #   endif
 #   define U_PLATFORM U_PF_BSD
