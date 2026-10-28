--- crates/protovalidate-rs/gen/cel/expr/syntax.pb.h.orig	2026-10-26 01:54:31 UTC
+++ crates/protovalidate-rs/gen/cel/expr/syntax.pb.h
@@ -42,6 +42,14 @@
 // Must be included last.
 #include "google/protobuf/port_def.inc"
 
+// DragonFly: <sys/types.h> defines major() and minor() as macros.
+#ifdef major
+#undef major
+#endif
+#ifdef minor
+#undef minor
+#endif
+
 #define PROTOBUF_INTERNAL_EXPORT_cel_2fexpr_2fsyntax_2eproto
 
 namespace google {
