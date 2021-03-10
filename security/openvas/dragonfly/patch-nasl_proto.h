--- nasl/proto.h.orig	2021-02-01 15:26:51 UTC
+++ nasl/proto.h
@@ -19,7 +19,7 @@
 
 #include <sys/param.h>
 #include <time.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #endif
 #include "smb.h"
