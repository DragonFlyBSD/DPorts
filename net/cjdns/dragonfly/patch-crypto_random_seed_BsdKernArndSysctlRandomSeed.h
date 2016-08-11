No KERN_ARND on DragonFly yet?

--- crypto/random/seed/BsdKernArndSysctlRandomSeed.h.orig	2016-06-15 00:58:54.000000000 +0300
+++ crypto/random/seed/BsdKernArndSysctlRandomSeed.h
@@ -20,7 +20,7 @@
 #include "memory/Allocator.h"
 #include "util/Linker.h"
 
-#if defined(freebsd) || defined(openbsd)
+#if (defined(freebsd) || defined(openbsd)) && !defined(__DragonFly__)
     Linker_require("crypto/random/seed/BsdKernArndSysctlRandomSeed.c");
     struct RandomSeed* BsdKernArndSysctlRandomSeed_new(struct Allocator* alloc);
     RandomSeedProvider_register(BsdKernArndSysctlRandomSeed_new)
