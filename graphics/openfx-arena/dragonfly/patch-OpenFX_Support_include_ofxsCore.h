--- OpenFX/Support/include/ofxsCore.h.orig	2018-04-25 16:03:37 UTC
+++ OpenFX/Support/include/ofxsCore.h
@@ -183,6 +183,8 @@ namespace OFX {
   using std::auto_ptr;
 #endif
   
+// can be defined by Magick++.h
+#undef IsNaN
 #if defined(_MSC_VER)
   inline bool IsInfinite(double x) { return _finite(x) == 0 && _isnan(x) == 0; }
   inline bool IsNaN     (double x) { return _isnan(x) != 0;                    }
