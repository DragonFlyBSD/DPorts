--- player/lib/audio/faad/port.h.orig	2002-01-11 00:55:17 UTC
+++ player/lib/audio/faad/port.h
@@ -40,8 +40,10 @@ Copyright(c)1996.
 int check_mc_info(faacDecHandle hDecoder, MC_Info *mip, int new_config);
 int chn_config(faacDecHandle hDecoder, int id, int tag,
                int common_window, MC_Info *mip);
+#if 0
 __inline void decode_huff_cw(faacDecHandle hDecoder, Huffman *h, int *qp, Hcb *hcb);
 __inline int decode_huff_cw_scl(faacDecHandle hDecoder, Huffscl *h);
+#endif
 int enter_mc_info(faacDecHandle hDecoder, MC_Info *mip, ProgConfig *pcp);
 int get_adif_header(faacDecHandle hDecoder);
 int get_adts_header(faacDecHandle hDecoder);
