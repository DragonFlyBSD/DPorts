--- src/plugins_3rdparty/hmm3/src/hmmer3/impl_sse/fwdback.cpp.orig	2014-03-30 10:21:38.280423000 +0000
+++ src/plugins_3rdparty/hmm3/src/hmmer3/impl_sse/fwdback.cpp
@@ -465,9 +465,9 @@ forward_engine(int do_full, const ESL_DS
     /* On an underflow (which shouldn't happen), we counterintuitively return infinity:
     * the effect of this is to force the caller to rescore us with full range.
     */
-    if       (isnan(xC))      ESL_EXCEPTION(eslERANGE, "forward score is NaN");
+    if       (std::isnan(xC))      ESL_EXCEPTION(eslERANGE, "forward score is NaN");
     else if  (L>0 && xC == 0.0)      ESL_EXCEPTION(eslERANGE, "forward score underflow (is 0.0)");
-    else if  (isinf(xC) == 1) ESL_EXCEPTION(eslERANGE, "forward score overflow (is infinity)");
+    else if  (std::isinf(xC) == 1) ESL_EXCEPTION(eslERANGE, "forward score overflow (is infinity)");
 
     if (opt_sc != NULL) *opt_sc = ox->totscale + log((double)(xC * om->xf[p7O_C][p7O_MOVE]));
     return eslOK;
@@ -742,9 +742,9 @@ backward_engine(int do_full, const ESL_D
     if (bck->debugging) p7_omx_DumpFBRow(bck, TRUE, 0, 9, 4, bck->xmx[p7X_E], bck->xmx[p7X_N],  bck->xmx[p7X_J], bck->xmx[p7X_B],  bck->xmx[p7X_C]);	/* logify=TRUE, <rowi>=0, width=9, precision=4*/
 #endif
 
-    if       (isnan(xN))      ESL_EXCEPTION(eslERANGE, "backward score is NaN");
+    if       (std::isnan(xN))      ESL_EXCEPTION(eslERANGE, "backward score is NaN");
     else if  (L>0 && xN == 0.0)      ESL_EXCEPTION(eslERANGE, "backward score underflow (is 0.0)");
-    else if  (isinf(xN) == 1) ESL_EXCEPTION(eslERANGE, "backward score overflow (is infinity)");
+    else if  (std::isinf(xN) == 1) ESL_EXCEPTION(eslERANGE, "backward score overflow (is infinity)");
 
     if (opt_sc != NULL) *opt_sc = bck->totscale + log((double)xN);
     return eslOK;
