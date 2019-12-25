--- io_wait.h.intermediate	2019-12-25 09:37:02.000000000 +0000
+++ io_wait.h
@@ -56,7 +56,7 @@
 
 #include <errno.h>
 #include <string.h>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include "ip_addr.h"
 #endif
 #ifdef HAVE_SIGIO_RT
