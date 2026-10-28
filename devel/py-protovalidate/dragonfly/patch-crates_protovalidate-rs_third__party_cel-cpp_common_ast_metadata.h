--- crates/protovalidate-rs/third_party/cel-cpp/common/ast/metadata.h.orig	2026-10-26 01:54:31 UTC
+++ crates/protovalidate-rs/third_party/cel-cpp/common/ast/metadata.h
@@ -33,6 +33,14 @@
 #include "common/constant.h"
 #include "common/expr.h"
 
+// DragonFly: <sys/types.h> defines major() and minor() as macros.
+#ifdef major
+#undef major
+#endif
+#ifdef minor
+#undef minor
+#endif
+
 namespace cel {
 
 // An extension that was requested for the source expression.
