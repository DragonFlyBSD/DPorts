--- src/framework/global/types/version.h.orig
+++ src/framework/global/types/version.h
@@ -26,6 +26,12 @@
 
 #include "types/string.h"
 
+#ifdef __DragonFly__
+// <sys/types.h> defines major() and minor() as macros
+#undef major
+#undef minor
+#endif
+
 namespace muse {
 class Version
 {
