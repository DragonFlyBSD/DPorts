--- src/vendor/golang.org/x/net/http2/hpack/encode.go.orig	2019-10-17 22:02:09 UTC
+++ src/vendor/golang.org/x/net/http2/hpack/encode.go
@@ -150,7 +150,7 @@ func appendIndexed(dst []byte, i uint64)
 // extended buffer.
 //
 // If f.Sensitive is true, "Never Indexed" representation is used. If
-// f.Sensitive is false and indexing is true, "Inremental Indexing"
+// f.Sensitive is false and indexing is true, "Incremental Indexing"
 // representation is used.
 func appendNewName(dst []byte, f HeaderField, indexing bool) []byte {
 	dst = append(dst, encodeTypeByte(indexing, f.Sensitive))
