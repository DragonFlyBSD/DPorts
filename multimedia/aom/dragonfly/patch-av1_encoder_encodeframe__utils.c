--- av1/encoder/encodeframe_utils.c.orig	2021-07-20 22:23:15 UTC
+++ av1/encoder/encodeframe_utils.c
@@ -162,9 +162,15 @@ static void reset_tx_size(MACROBLOCK *x,
   } else if (tx_mode != TX_MODE_SELECT) {
     mbmi->tx_size = tx_size_from_tx_mode(mbmi->bsize, tx_mode);
   } else {
-    BLOCK_SIZE bsize = mbmi->bsize;
-    TX_SIZE min_tx_size = depth_to_tx_size(MAX_TX_DEPTH, bsize);
-    mbmi->tx_size = (TX_SIZE)TXSIZEMAX(mbmi->tx_size, min_tx_size);
+    const BLOCK_SIZE bsize = mbmi->bsize;
+    const TX_SIZE min_tx_size = depth_to_tx_size(MAX_TX_DEPTH, bsize);
+    if (tx_size_wide[min_tx_size] > tx_size_wide[mbmi->tx_size] ||
+        tx_size_high[min_tx_size] > tx_size_high[mbmi->tx_size])
+      mbmi->tx_size = min_tx_size;
+    const TX_SIZE max_tx_size = get_vartx_max_txsize(xd, bsize, 0);
+    if (tx_size_wide[max_tx_size] < tx_size_wide[mbmi->tx_size] ||
+        tx_size_high[max_tx_size] < tx_size_high[mbmi->tx_size])
+      mbmi->tx_size = max_tx_size;
   }
   if (is_inter_block(mbmi)) {
     memset(mbmi->inter_tx_size, mbmi->tx_size, sizeof(mbmi->inter_tx_size));
