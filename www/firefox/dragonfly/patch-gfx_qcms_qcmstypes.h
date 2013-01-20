--- gfx/qcms/qcmstypes.h.intermediate
+++ gfx/qcms/qcmstypes.h
@@ -11,6 +11,8 @@
 
 #if defined (_AIX)
 #include <sys/types.h>
+#elif defined (__DragonFly__)
+#include <stdlib.h>
 #elif __OS2__
 #include <stdlib.h>
 #endif
