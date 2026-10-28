--- crypto/random/seed/BsdKernArndSysctlRandomSeed.h.orig
+++ crypto/random/seed/BsdKernArndSysctlRandomSeed.h
@@ -19,8 +19,10 @@
 #include "memory/Allocator.h"
 #include "util/Linker.h"
 
+#ifndef __DragonFly__
 Linker_require("crypto/random/seed/BsdKernArndSysctlRandomSeed.c")
 RandomSeed_t* BsdKernArndSysctlRandomSeed_new(struct Allocator* alloc);
 #define BsdKernArndSysctlRandomSeed_EXISTS
+#endif
 
 #endif
