--- extensions/gdal_array_wrap.cpp.orig	2026-09-23 22:57:20 UTC
+++ extensions/gdal_array_wrap.cpp
@@ -3324,6 +3324,9 @@ namespace swig {
 
 
 #include "gdal.h"
+#define GDAL_RAT_SKIP_OTHER_GDAL_HEADERS
+#include "gdal_rat.h"
+#undef GDAL_RAT_SKIP_OTHER_GDAL_HEADERS
 
 typedef struct
 {
