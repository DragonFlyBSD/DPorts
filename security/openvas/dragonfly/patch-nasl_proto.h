--- nasl/proto.h.orig
+++ nasl/proto.h
@@ -8,7 +8,7 @@
 
 #include <sys/param.h>
 #include <time.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #endif
 #include "smb.h"
