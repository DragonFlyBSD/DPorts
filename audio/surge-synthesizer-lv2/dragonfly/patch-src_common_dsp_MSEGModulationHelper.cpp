--- src/common/dsp/MSEGModulationHelper.cpp.orig	2021-04-20 20:34:06 UTC
+++ src/common/dsp/MSEGModulationHelper.cpp
@@ -291,7 +291,7 @@ float valueAt(int ip, float fup, float d
         float a = 0;
         if (fabs(V) > 1e-3)
         {
-            float Q = limit_range((1 - sqrt(disc)) / (2 * V), 0.00001f, 1000000.f);
+            float Q = limit_range((float)((1 - sqrt(disc)) / (2 * V)), 0.00001f, 1000000.f);
             a = amul * 2 * log(Q);
         }
 
