--- src/common/gui/MSEGEditor.cpp.orig	2021-04-20 20:34:06 UTC
+++ src/common/gui/MSEGEditor.cpp
@@ -1791,7 +1791,7 @@ struct MSEGCanvas : public CControl,
 
             if (ms->vSnap > 0)
             {
-                v = limit_range(round(v / ms->vSnap) * ms->vSnap, -1.f, 1.f);
+                v = limit_range((float)(round(v / ms->vSnap) * ms->vSnap), -1.f, 1.f);
             }
 
             int seg = Surge::MSEG::timeToSegment(this->ms, t);
