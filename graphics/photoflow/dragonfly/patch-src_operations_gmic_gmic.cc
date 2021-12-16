--- src/operations/gmic/gmic.cc.orig	2020-08-28 16:53:22 UTC
+++ src/operations/gmic/gmic.cc
@@ -33,7 +33,9 @@
 #include "../convertformat.hh"
 #include "gmic.hh"
 
+extern "C" { // src/operations/gmic/gmic.cc has is as extern "C"
 int vips_gmic(VipsImage **in, VipsImage** out, int n, int padding, double x_scale, double y_scale, const char* command, ...);
+}
 
 
 PF::GMicPar::GMicPar(): 
