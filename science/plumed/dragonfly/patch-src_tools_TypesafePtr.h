--- src/tools/TypesafePtr.h.orig	2026-07-01 15:26:58 UTC
+++ src/tools/TypesafePtr.h
@@ -59,6 +59,20 @@
 template<>
 inline
 std::size_t typesafePtrSizeof<const void>() {
+  return 0;
+}
+
+// FILE is an incomplete type on DragonFly; the wrapper never passes its
+// size (Plumed.h: "size will not be computed as it might be incomplete").
+template<>
+inline
+std::size_t typesafePtrSizeof<FILE>() {
+  return 0;
+}
+
+template<>
+inline
+std::size_t typesafePtrSizeof<const FILE>() {
   return 0;
 }
 
