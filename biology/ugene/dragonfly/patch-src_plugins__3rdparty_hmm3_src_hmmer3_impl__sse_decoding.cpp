--- src/plugins_3rdparty/hmm3/src/hmmer3/impl_sse/decoding.cpp.orig	2014-03-30 10:21:38.280423000 +0000
+++ src/plugins_3rdparty/hmm3/src/hmmer3/impl_sse/decoding.cpp
@@ -134,7 +134,7 @@ p7_Decoding(const P7_OPROFILE *om, const
         if (oxb->has_own_scales) scaleproduct *= oxf->xmx[i*p7X_NXCELLS+p7X_SCALE] /  oxb->xmx[i*p7X_NXCELLS+p7X_SCALE];
     }
 
-    if (isinf(scaleproduct)) return eslERANGE;
+    if (std::isinf(scaleproduct)) return eslERANGE;
     else                     return eslOK;
 }
 
@@ -188,7 +188,7 @@ p7_DomainDecoding(const P7_OPROFILE *om,
     }
     ddef->L = oxf->L;
 
-    if (isinf(scaleproduct)) return eslERANGE;
+    if (std::isinf(scaleproduct)) return eslERANGE;
     else                     return eslOK;
 }
 /*------------------ end, posterior decoding --------------------*/
