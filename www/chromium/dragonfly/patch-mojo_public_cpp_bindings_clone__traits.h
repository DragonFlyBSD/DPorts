--- mojo/public/cpp/bindings/clone_traits.h.orig	2026-09-20 07:33:32 UTC
+++ mojo/public/cpp/bindings/clone_traits.h
@@ -63,6 +63,16 @@
   }
 };
 
+// std::vector<bool> stores bits, so iterating it yields a proxy reference
+// rather than a bool. That proxy has no Clone() and is not std::copyable, so
+// the generic CloneTraits static_asserts. vector<bool> is itself copyable.
+template <>
+struct CloneTraits<std::vector<bool>> {
+  static std::vector<bool> Clone(const std::vector<bool>& input) {
+    return input;
+  }
+};
+
 template <typename K, typename V>
 struct CloneTraits<base::flat_map<K, V>> {
   static base::flat_map<K, V> Clone(const base::flat_map<K, V>& input) {
