--- src/wrk.h.orig
+++ src/wrk.h
@@ -57,6 +57,7 @@ typedef struct connection {
     char *request;
     size_t length;
     size_t written;
+    uint64_t requests;
     uint64_t pending;
     buffer headers;
     buffer body;
