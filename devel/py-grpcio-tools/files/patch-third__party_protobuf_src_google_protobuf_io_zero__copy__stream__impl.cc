--- third_party/protobuf/src/google/protobuf/io/zero_copy_stream_impl.cc.orig	2026-07-08 09:29:26 UTC
+++ third_party/protobuf/src/google/protobuf/io/zero_copy_stream_impl.cc
@@ -20,6 +20,10 @@
 #endif
 #include <errno.h>
 
+#ifndef isascii
+#define isascii(c) (((c) & ~0x7f) == 0)
+#endif
+
 #include <algorithm>
 #include <istream>
 #include <ostream>
