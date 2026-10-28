--- src/mroute.h.orig
+++ src/mroute.h
@@ -44,6 +44,8 @@
 #else
 # ifdef __APPLE__
 #  include "ip_mroute.h"
+# elif defined(__DragonFly__)
+#  include <net/ip_mroute/ip_mroute.h>
 # endif
 #endif
 
