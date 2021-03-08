--- lib/dnscore/src/random.c.orig	2020-12-09 09:23:24 UTC
+++ lib/dnscore/src/random.c
@@ -44,6 +44,7 @@
 #include "dnscore/dnscore-config.h"
 #include <stdio.h>
 #include <stdlib.h>
+#include <stdint.h>
 #include <dnscore/mutex.h>
 
 #include "dnscore/random.h"
@@ -119,7 +120,11 @@ random_init_auto()
 {
     u64 now = timeus();
     now ^= (now >> 32);
+#if defined(__DragonFly__)
+    now ^= (u32)(uintmax_t)pthread_self();
+#else
     now ^= (u32)thread_self();
+#endif
 
     now ^= smp_int_get(&random_serial);
     smp_int_add(&random_serial, 0xc18e2a1d);
