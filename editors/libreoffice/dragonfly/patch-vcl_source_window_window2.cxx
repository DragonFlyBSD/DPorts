--- vcl/source/window/window2.cxx.orig	2022-12-28 10:19:16 UTC
+++ vcl/source/window/window2.cxx
@@ -618,7 +618,7 @@ static double lcl_HandleScrollHelper( Sc
         }
 
         // compute how many quantized units to scroll
-        tools::Long magnitude = o3tl::saturating_cast<tools::Long>(abs(nN));
+        tools::Long magnitude = o3tl::saturating_cast<tools::Long>(std::abs(nN));
         tools::Long change = copysign(magnitude, nN);
 
         nNewPos = nNewPos - change;
