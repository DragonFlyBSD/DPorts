--- io_wait.h.intermediate	2016-08-06 15:29:06 UTC
+++ io_wait.h
@@ -56,7 +56,7 @@
 
 #include <errno.h>
 #include <string.h>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include "ip_addr.h"
 #endif
 #ifdef HAVE_SIGIO_RT
