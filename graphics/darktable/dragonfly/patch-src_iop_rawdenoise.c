--- src/iop/rawdenoise.c.orig	2025-11-20 20:29:56.955833000 +0100
+++ src/iop/rawdenoise.c	2025-11-20 20:30:37.916125000 +0100
@@ -229,7 +229,7 @@ static void wavelet_denoise(const float *const restric
       const float *const restrict inp = in + (size_t)row * roi->width + offset;
       const int senselwidth = (roi->width-offset+1)/2;
       for(int col = 0; col < senselwidth; col++)
-        fimgp[col] = sqrtf(MAX(0.0f, inp[2*col]));
+        fimgp[col] = sqrtf(fmaxf(0.0f, inp[2*col]));
     }
 
     // perform the wavelet decomposition and denoising
