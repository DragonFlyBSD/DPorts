--- Utilities/DICOMParser/DICOMParser.cxx.orig	2013-04-14 13:04:05.438459000 +0000
+++ Utilities/DICOMParser/DICOMParser.cxx
@@ -37,6 +37,7 @@
 #endif
 
 #include <string>
+#include <cstring>
 #include <map>
 
 #include "DICOMConfig.h"
@@ -590,14 +591,14 @@ void DICOMParser::DumpTag(dicom_stream::
 
 void DICOMParser::ModalityTag(doublebyte, doublebyte, VRTypes, unsigned char* tempdata, quadbyte)
 {
-  if (!strcmp( (char*)tempdata, "MR"))
+  if (!std::strcmp( (char*)tempdata, "MR"))
     {
     // this->AddMRTags();
     }
-  else if (!strcmp((char*) tempdata, "CT"))
+  else if (!std::strcmp((char*) tempdata, "CT"))
     {
     }
-  else if (!strcmp((char*) tempdata, "US"))
+  else if (!std::strcmp((char*) tempdata, "US"))
     {
     }
 }
@@ -705,7 +706,7 @@ void DICOMParser::TransferSyntaxCallback
 
   this->ToggleByteSwapImageData = false;
 
-  if (strcmp(TRANSFER_UID_EXPLICIT_BIG_ENDIAN, (char*) val) == 0)
+  if (std::strcmp(TRANSFER_UID_EXPLICIT_BIG_ENDIAN, (char*) val) == 0)
     {
 #ifdef DEBUG_DICOM
     dicom_stream::cout << "EXPLICIT BIG ENDIAN" << dicom_stream::endl;
@@ -717,7 +718,7 @@ void DICOMParser::TransferSyntaxCallback
     // We're always reading little endian in the beginning,
     // so now we need to swap.
     }
-  else if (strcmp(TRANSFER_UID_GE_PRIVATE_IMPLICIT_BIG_ENDIAN, (char*) val) == 0)
+  else if (std::strcmp(TRANSFER_UID_GE_PRIVATE_IMPLICIT_BIG_ENDIAN, (char*) val) == 0)
     {
     this->ToggleByteSwapImageData = true;
 #ifdef DEBUG_DICOM
