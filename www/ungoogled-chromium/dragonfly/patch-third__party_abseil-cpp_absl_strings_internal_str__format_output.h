diff --git third_party/abseil-cpp/absl/strings/internal/str_format/output.h third_party/abseil-cpp/absl/strings/internal/str_format/output.h
index 15e751ab6f0c..18aac02ea96c 100644
--- third_party/abseil-cpp/absl/strings/internal/str_format/output.h
+++ third_party/abseil-cpp/absl/strings/internal/str_format/output.h
@@ -26,6 +26,11 @@
 #include <ostream>
 #include <string>
 
+// Workaround for libepoll-shim macro pollution on DragonFlyBSD
+#ifdef write
+#undef write
+#endif
+
 #include "absl/base/port.h"
 #include "absl/strings/string_view.h"
 
