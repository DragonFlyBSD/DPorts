--- src/lcbio/ioutils.cc.intermediate	2023-02-24 19:53:19 UTC
+++ src/lcbio/ioutils.cc
@@ -24,7 +24,7 @@
 #include "hostlist.h"
 #include "iotable.h"
 #include "ssl.h"
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
