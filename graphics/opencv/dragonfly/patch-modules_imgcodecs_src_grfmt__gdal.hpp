--- modules/imgcodecs/src/grfmt_gdal.hpp.orig	2025-12-30 07:52:05 UTC
+++ modules/imgcodecs/src/grfmt_gdal.hpp
@@ -55,6 +55,11 @@
 #include <cpl_conv.h>
 #include <gdal_priv.h>
 #include <gdal.h>
+// GDAL >= 3.12's gdal_multidim.h (pulled in via gdal_priv.h) holds a
+// std::unique_ptr<GDALRasterAttributeTable> while that type is only
+// forward-declared, so instantiating the unique_ptr destructor applies
+// sizeof to an incomplete type. Pull in the complete definition first.
+#include <gdal_rat.h>
 
 
 /// Start of CV Namespace
