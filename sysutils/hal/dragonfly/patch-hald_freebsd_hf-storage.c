--- hald/freebsd/hf-storage.c.intermediate	2012-12-21 19:03:06.340046000 +0100
+++ hald/freebsd/hf-storage.c	2012-12-21 19:03:46.608281000 +0100
@@ -34,6 +34,9 @@
 #include <sys/param.h>
 #include <sys/types.h>
 #include <sys/disklabel.h>
+#ifdef __DragonFly__
+#include <sys/dtype.h>
+#endif
 
 #include "../logger.h"
 #include "../osspec.h"
