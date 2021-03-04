--- utils/v4l2-ctl/v4l2-ctl-meta.cpp.intermediate	2021-03-04 11:32:51.000000000 +0000
+++ utils/v4l2-ctl/v4l2-ctl-meta.cpp
@@ -15,6 +15,10 @@
 #include <math.h>
 #include <cstdlib>
 
+#if defined(__DragonFly__)
+#include <sys/endian.h> // for le32toh()
+#endif
+
 #include "v4l2-ctl.h"
 
 static struct v4l2_format vfmt;	/* set_format/get_format */
