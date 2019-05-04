--- src/tscore/ink_memory.cc.orig	2019-01-18 22:13:53 UTC
+++ src/tscore/ink_memory.cc
@@ -27,7 +27,7 @@
 #include "tscore/Diags.h"
 #include "tscore/ink_atomic.h"
 
-#if !defined(kfreebsd) && defined(freebsd)
+#if !defined(kfreebsd) && defined(freebsd) && !defined(__DragonFly__)
 #include <malloc_np.h> // for malloc_usable_size
 #endif
 
