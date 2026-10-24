--- toolkit/components/protobuf/src/google/protobuf/io/zero_copy_stream_impl.cc.intermediate	2026-09-07 15:09:33 UTC
+++ toolkit/components/protobuf/src/google/protobuf/io/zero_copy_stream_impl.cc
@@ -9,7 +9,7 @@
 //  Based on original Protocol Buffers design by
 //  Sanjay Ghemawat, Jeff Dean, and others.
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 // We request posix_close if available. See the comment on "robust_close".
 #define _POSIX_C_SOURCE 202405L
 #endif
