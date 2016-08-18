Back-pushable

--- libnal/proto_fd.c.intermediate	2016-08-18 13:53:50 UTC
+++ libnal/proto_fd.c
@@ -24,13 +24,9 @@
 #include <libnal/nal.h>
 #include "nal_internal.h"
 #include <libsys/post.h>
-#ifdef __FreeBSD__
-#if __FreeBSD_version >= 502010
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/limits.h>
-#else
-#include <machine/limits.h>
 #endif
-#endif /* __FreeBSD__ */
 
 /**************************/
 /* predeclare our vtables */
