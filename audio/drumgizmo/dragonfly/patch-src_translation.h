--- src/translation.h.orig	2020-11-22 10:30:31 UTC
+++ src/translation.h
@@ -31,6 +31,7 @@
 #ifdef WITH_NLS
 
 #include <memory>
+#include <cstdint>
 
 std::uint64_t constexpr const_hash(const char* input)
 {
