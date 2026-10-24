--- third_party/abseil-cpp/absl/strings/internal/str_format/output.h.orig
+++ third_party/abseil-cpp/absl/strings/internal/str_format/output.h
@@ -25,6 +25,11 @@
 #include <ios>
 #include <ostream>
 #include <string>
+
+// Workaround for libepoll-shim macro pollution on DragonFlyBSD
+#ifdef write
+#undef write
+#endif
 
 #include "absl/base/config.h"
 #include "absl/base/port.h"
