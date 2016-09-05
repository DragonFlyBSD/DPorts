--- lib/ts/ink_memory.cc.orig	2016-07-12 02:03:32.000000000 +0300
+++ lib/ts/ink_memory.cc
@@ -27,7 +27,7 @@
 #include "ts/Diags.h"
 #include "ts/ink_atomic.h"
 
-#if defined(freebsd)
+#if defined(freebsd) && !defined(__DragonFly__)
 #include <malloc_np.h> // for malloc_usable_size
 #endif
 
