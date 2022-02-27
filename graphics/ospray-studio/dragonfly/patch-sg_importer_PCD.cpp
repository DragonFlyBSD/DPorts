--- sg/importer/PCD.cpp.orig	2021-12-15 19:48:54 UTC
+++ sg/importer/PCD.cpp
@@ -4,6 +4,7 @@
 #include "Importer.h"
 // rkcommon
 #include "rkcommon/os/FileName.h"
+#include <cmath> // for std::isnan()
 
 namespace ospray {
 namespace sg {
@@ -640,7 +641,7 @@ int readPCDBodyBinary(const FileName &fi
                       */
       } else {
         float value = pcdData.fileData[i + 4];
-        if (!isnan(value)) {
+        if (!std::isnan(value)) {
           float H = value;
           float R = std::fabs(H * 6.0f - 3.0f) - 1.0f;
           float G = 2.0f - std::fabs(H * 6.0f - 2.0f);
