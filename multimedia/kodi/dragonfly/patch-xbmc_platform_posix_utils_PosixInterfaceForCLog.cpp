--- xbmc/platform/posix/utils/PosixInterfaceForCLog.cpp.orig	2020-05-31 13:31:35 UTC
+++ xbmc/platform/posix/utils/PosixInterfaceForCLog.cpp
@@ -17,7 +17,8 @@
 #include "platform/android/activity/XBMCApp.h"
 #endif // TARGET_ANDROID
 
-struct FILEWRAP : public FILE
+typedef struct __FILE_public FILE_MEH;
+struct FILEWRAP : public FILE_MEH
 {};
 
 
@@ -28,7 +29,7 @@ CPosixInterfaceForCLog::CPosixInterfaceF
 CPosixInterfaceForCLog::~CPosixInterfaceForCLog()
 {
   if (m_file)
-    fclose(m_file);
+    fclose((FILE *)m_file);
   m_file = NULL;
 }
 
@@ -45,7 +46,7 @@ bool CPosixInterfaceForCLog::OpenLogFile
     return false; // error, can't open log file
 
   static const unsigned char BOM[3] = { 0xEF, 0xBB, 0xBF };
-  (void)fwrite(BOM, sizeof(BOM), 1, m_file); // write BOM, ignore possible errors
+  (void)fwrite(BOM, sizeof(BOM), 1, (FILE *)m_file); // write BOM, ignore possible errors
 
   return true;
 }
@@ -54,7 +55,7 @@ void CPosixInterfaceForCLog::CloseLogFil
 {
   if (m_file)
   {
-    fclose(m_file);
+    fclose((FILE *)m_file);
     m_file = NULL;
   }
 }
@@ -64,9 +65,9 @@ bool CPosixInterfaceForCLog::WriteString
   if (!m_file)
     return false;
 
-  const bool ret = (fwrite(logString.data(), logString.size(), 1, m_file) == 1) &&
-                   (fwrite("\n", 1, 1, m_file) == 1);
-  (void)fflush(m_file);
+  const bool ret = (fwrite(logString.data(), logString.size(), 1, (FILE *)m_file) == 1) &&
+                   (fwrite("\n", 1, 1, (FILE *)m_file) == 1);
+  (void)fflush((FILE *)m_file);
 
   return ret;
 }
