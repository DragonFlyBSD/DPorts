--- crypto/random/seed/SystemRandomSeed.c.orig	2020-10-05 21:46:19 UTC
+++ crypto/random/seed/SystemRandomSeed.c
@@ -34,7 +34,7 @@ Js({ this.RandomSeedProvider_providers =
             RandomSeedProvider_register(LinuxRandomUuidSysctlRandomSeed_new)
         #endif
     #else
-        #ifdef freebsd
+        #if defined(freebsd) && !defined(__DragonFly__)
             #include "crypto/random/seed/BsdKernArndSysctlRandomSeed.h"
             RandomSeedProvider_register(BsdKernArndSysctlRandomSeed_new)
         #endif
