--- lib/dnscore/src/random.c.orig	2019-02-11 12:45:57 UTC
+++ lib/dnscore/src/random.c
@@ -43,6 +43,7 @@
 #include "dnscore/dnscore-config.h"
 #include <stdio.h>
 #include <stdlib.h>
+#include <stdint.h>
 
 #include "dnscore/random.h"
 
@@ -117,7 +118,11 @@ random_init_auto()
 {
     u64 now = timeus();
     now ^= (now >> 32);
+#if defined(__DragonFly__)
+    now ^= (u32)(uintmax_t)pthread_self();
+#else
     now ^= (u32)pthread_self();
+#endif
     now ^= random_serial;
     random_serial += 0xc18e2a1d;
     return random_init((u32)now);
