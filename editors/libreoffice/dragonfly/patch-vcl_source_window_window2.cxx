--- vcl/source/window/window2.cxx.orig	Fri Mar 21 15:34:31 2025
+++ vcl/source/window/window2.cxx	Wed Oct
@@ -632,7 +632,7 @@ static double lcl_HandleScrollHelper( Scrollable* pScr
         }
 
         // compute how many quantized units to scroll
-        tools::Long magnitude = o3tl::saturating_cast<tools::Long>(fabs(nN));
+        tools::Long magnitude = o3tl::saturating_cast<tools::Long>(std::fabs(nN));
         tools::Long change = copysign(magnitude, nN);
 
         nNewPos = nNewPos - change;
