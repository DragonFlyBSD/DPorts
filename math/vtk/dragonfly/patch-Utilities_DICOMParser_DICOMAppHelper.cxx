--- Utilities/DICOMParser/DICOMAppHelper.cxx.orig	2013-04-14 13:04:05.438459000 +0000
+++ Utilities/DICOMParser/DICOMAppHelper.cxx
@@ -32,6 +32,7 @@
 #include <stdlib.h>
 #include <stdio.h>
 #include <string>
+#include <cstring>
 #include <math.h>
 #include <algorithm>
 
@@ -583,7 +584,7 @@ void DICOMAppHelper::ImagePositionPatien
     this->Implementation->SliceOrderingMap.insert(dicom_stl::pair<const dicom_stl::string, DICOMOrderingElements>(parser->GetFileName(), ord));
 
     // cache the value
-    memcpy( this->ImagePositionPatient, ord.ImagePositionPatient,
+    std::memcpy( this->ImagePositionPatient, ord.ImagePositionPatient,
             3*sizeof(float) );
     }
   else
@@ -605,7 +606,7 @@ void DICOMAppHelper::ImagePositionPatien
       }
     
     // cache the value
-    memcpy( this->ImagePositionPatient, (*it).second.ImagePositionPatient,
+    std::memcpy( this->ImagePositionPatient, (*it).second.ImagePositionPatient,
             3*sizeof(float) );
     }
 }
@@ -696,7 +697,7 @@ void DICOMAppHelper::TransferSyntaxCallb
   static const char* TRANSFER_UID_EXPLICIT_BIG_ENDIAN = "1.2.840.10008.1.2.2";
 
   // Only add the ToggleSwapBytes callback when we need it.
-  if (strcmp(TRANSFER_UID_EXPLICIT_BIG_ENDIAN, (char*) val) == 0)
+  if (std::strcmp(TRANSFER_UID_EXPLICIT_BIG_ENDIAN, (char*) val) == 0)
     {
     this->ByteSwapData = true;
     parser->AddDICOMTagCallback(0x0800, 0x0000, DICOMParser::VR_UNKNOWN, ToggleSwapBytesCB);
@@ -999,31 +1000,31 @@ const char* DICOMAppHelper::TransferSynt
   static const char* DICOM_EXPLICIT_VR_BIG_ENDIAN = "1.2.840.10008.1.2.2";
   static const char* DICOM_GE_PRIVATE_IMPLICIT_BIG_ENDIAN = "1.2.840.113619.5.2";
 
-  if (!strcmp(DICOM_IMPLICIT_VR_LITTLE_ENDIAN, uid))
+  if (!std::strcmp(DICOM_IMPLICIT_VR_LITTLE_ENDIAN, uid))
     {
     return "Implicit VR, Little Endian";
     }
-  else if (!strcmp(DICOM_LOSSLESS_JPEG, uid))
+  else if (!std::strcmp(DICOM_LOSSLESS_JPEG, uid))
     {
     return "Lossless JPEG";
     }
-  else if (!strcmp(DICOM_LOSSY_JPEG_8BIT, uid))
+  else if (!std::strcmp(DICOM_LOSSY_JPEG_8BIT, uid))
     {
     return "Lossy JPEG 8 bit";
     }
-  else if (!strcmp(DICOM_LOSSY_JPEG_16BIT, uid))
+  else if (!std::strcmp(DICOM_LOSSY_JPEG_16BIT, uid))
     {
     return "Lossy JPEG 16 bit.";
     }
-  else if (!strcmp(DICOM_EXPLICIT_VR_LITTLE_ENDIAN, uid))
+  else if (!std::strcmp(DICOM_EXPLICIT_VR_LITTLE_ENDIAN, uid))
     {
     return "Explicit VR, Little Endian.";
     }
-  else if (!strcmp(DICOM_EXPLICIT_VR_BIG_ENDIAN, uid))
+  else if (!std::strcmp(DICOM_EXPLICIT_VR_BIG_ENDIAN, uid))
     {
     return "Explicit VR, Big Endian.";
     }
-  else if (!strcmp(DICOM_GE_PRIVATE_IMPLICIT_BIG_ENDIAN, uid))
+  else if (!std::strcmp(DICOM_GE_PRIVATE_IMPLICIT_BIG_ENDIAN, uid))
     {
     return "GE Private, Implicit VR, Big Endian Image Data.";
     }
