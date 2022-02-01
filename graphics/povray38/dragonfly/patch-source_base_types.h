--- source/base/types.h.orig	2021-08-09 02:09:39 UTC
+++ source/base/types.h
@@ -46,6 +46,11 @@
 #include "base/pov_mem.h"
 #include "base/version.h"
 
+#ifdef __DragonFly__
+#undef major
+#undef minor
+#endif
+
 namespace pov_base
 {
 
