--- gfx/qcms/qcmstypes.h.orig	2013-06-18 11:01:20.000000000 +0000
+++ gfx/qcms/qcmstypes.h
@@ -11,6 +11,8 @@
 
 #if defined(_AIX)
 #include <sys/types.h>
+#elif defined(__DragonFly__)
+#include <stdlib.h>
 #elif defined(__OS2__)
 #include <stdlib.h>
 #endif
