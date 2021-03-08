No KERN_ARND on DragonFly yet?

--- crypto/random/seed/BsdKernArndSysctlRandomSeed.h.orig	2020-10-05 21:46:19 UTC
+++ crypto/random/seed/BsdKernArndSysctlRandomSeed.h
@@ -19,7 +19,9 @@
 #include "memory/Allocator.h"
 #include "util/Linker.h"
 
+#ifndef __DragonFly__
 Linker_require("crypto/random/seed/BsdKernArndSysctlRandomSeed.c")
 struct RandomSeed* BsdKernArndSysctlRandomSeed_new(struct Allocator* alloc);
+#endif
 
 #endif
