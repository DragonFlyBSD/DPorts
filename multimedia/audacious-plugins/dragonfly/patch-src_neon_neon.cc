--- src/neon/neon.cc.orig	2015-05-30 22:28:37 UTC
+++ src/neon/neon.cc
@@ -44,6 +44,7 @@
 #define NEON_NETBLKSIZE     (4096)
 #define NEON_ICY_BUFSIZE    (4096)
 #define NEON_RETRY_COUNT 6
+#undef feof
 
 enum FillBufferResult {
     FILL_BUFFER_SUCCESS,
