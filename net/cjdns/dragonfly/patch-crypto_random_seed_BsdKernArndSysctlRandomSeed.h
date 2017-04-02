No KERN_ARND on DragonFly yet?

--- crypto/random/seed/BsdKernArndSysctlRandomSeed.h.orig	2017-04-02 17:57:23 UTC
+++ crypto/random/seed/BsdKernArndSysctlRandomSeed.h
@@ -20,7 +20,7 @@
 #include "memory/Allocator.h"
 #include "util/Linker.h"
 
-#if defined(freebsd)
+#if defined(freebsd) && !defined(__DragonFly__)
     Linker_require("crypto/random/seed/BsdKernArndSysctlRandomSeed.c");
     struct RandomSeed* BsdKernArndSysctlRandomSeed_new(struct Allocator* alloc);
     RandomSeedProvider_register(BsdKernArndSysctlRandomSeed_new)
