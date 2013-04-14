--- Utilities/DICOMParser/DICOMFile.cxx.orig	2013-04-14 13:04:05.438459000 +0000
+++ Utilities/DICOMParser/DICOMFile.cxx
@@ -24,6 +24,7 @@
 
 #include <stdio.h>
 #include <string>
+#include <cstring>
 
 #include "DICOMConfig.h"
 #include "DICOMFile.h"
@@ -55,7 +56,7 @@ DICOMFile::~DICOMFile()
 
 DICOMFile::DICOMFile(const DICOMFile& in)
 {
-  if (strcmp(in.PlatformEndian, "LittleEndian") == 0)
+  if (std::strcmp(in.PlatformEndian, "LittleEndian") == 0)
     {
     PlatformEndian = "LittleEndian";
     }
@@ -71,7 +72,7 @@ DICOMFile::DICOMFile(const DICOMFile& in
 
 void DICOMFile::operator=(const DICOMFile& in)
 {
-  if (strcmp(in.PlatformEndian, "LittleEndian") == 0)
+  if (std::strcmp(in.PlatformEndian, "LittleEndian") == 0)
     {
     PlatformEndian = "LittleEndian";
     }
