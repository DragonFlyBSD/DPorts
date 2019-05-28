--- player/lib/audio/faad/huffdec.c.orig	2003-02-18 18:51:31 UTC
+++ player/lib/audio/faad/huffdec.c
@@ -32,6 +32,8 @@ Copyright(c)1996.
 #include "bits.h"
 #include "util.h"
 
+__inline void decode_huff_cw(faacDecHandle hDecoder, Huffman *h, int *qp, Hcb *hcb);
+__inline int decode_huff_cw_scl(faacDecHandle hDecoder, Huffscl *h);
 
 // wmay - add statics
 static int extension_payload(faacDecHandle hDecoder, int cnt, byte *data);
