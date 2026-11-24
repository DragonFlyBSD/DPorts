--- Src/CPU/68K/Musashi/m68kcpu.h.orig
+++ Src/CPU/68K/Musashi/m68kcpu.h
@@ -57,6 +57,7 @@
 
 #include "m68k.h"
 #include <limits.h>
+#include <sys/types.h>	/* before the uint macro: DragonFly's stdio.h includes it */
 
 #if M68K_EMULATE_ADDRESS_ERROR
 #include <setjmp.h>
