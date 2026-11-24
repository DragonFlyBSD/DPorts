--- lib/discid.h.orig
+++ lib/discid.h
@@ -37,7 +37,7 @@
 #include "linux.h"
 #endif //__linux__
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #include <sys/cdio.h>
 #include "freebsd.h"
 #endif // __FreeBSD__ || __FreeBSD_kernel__
