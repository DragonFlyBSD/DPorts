--- gfx/qcms/qcmstypes.h.intermediate	2013-01-20 04:13:24.534102000 +0100
+++ gfx/qcms/qcmstypes.h	2013-01-20 04:15:01.354238000 +0100
@@ -11,6 +11,8 @@
 #if defined (__SVR4) && defined (__sun)
 /* int_types.h gets included somehow, so avoid redefining the types differently */
 #include <sys/int_types.h>
+#elif defined (__DragonFly__)
+#include <stdint>
 #elif defined (_AIX)
 #include <sys/types.h>
 #elif defined(__OpenBSD__)
