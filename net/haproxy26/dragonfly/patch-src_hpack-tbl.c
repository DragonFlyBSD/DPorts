--- src/hpack-tbl.c.orig	2021-06-17 07:06:08 UTC
+++ src/hpack-tbl.c
@@ -34,6 +34,10 @@
 #include <haproxy/hpack-huff.h>
 #include <haproxy/hpack-tbl.h>
 
+#ifndef __read_mostly
+#define __read_mostly       __section(".data.read_mostly")
+#endif
+
 /* static header table as in RFC7541 Appendix A. [0] unused. */
 const struct http_hdr hpack_sht[HPACK_SHT_SIZE] = {
 	[ 1] = { .n = IST(":authority"),                   .v = IST("")              },
