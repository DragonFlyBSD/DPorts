--- src/memory/memory_cap.cc.orig	2021-12-15 14:10:35 UTC
+++ src/memory/memory_cap.cc
@@ -22,7 +22,11 @@
 #include "config.h"
 #endif
 
+#if defined(__DragonFly__)
+#include <stdlib.h>
+#else
 #include <malloc.h>
+#endif
 #include <sys/resource.h>
 
 #include <cassert>
