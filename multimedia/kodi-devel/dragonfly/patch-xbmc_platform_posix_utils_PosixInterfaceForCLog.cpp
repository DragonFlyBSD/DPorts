--- xbmc/platform/posix/utils/PosixInterfaceForCLog.cpp.orig	2019-12-16 08:11:03 UTC
+++ xbmc/platform/posix/utils/PosixInterfaceForCLog.cpp
@@ -17,7 +17,12 @@
 #include "platform/android/activity/XBMCApp.h"
 #endif // TARGET_ANDROID
 
+#ifdef __DragonFly__
+typedef struct __FILE_public FILE_MEH;
+struct FILEWRAP : public FILE_MEH
+#else
 struct FILEWRAP : public FILE
+#endif
 {};
 
 
@@ -28,7 +33,11 @@ CPosixInterfaceForCLog::CPosixInterfaceF
 CPosixInterfaceForCLog::~CPosixInterfaceForCLog()
 {
   if (m_file)
+#ifdef __DragonFly__
+    fclose((FILE *)m_file);
+#else
     fclose(m_file);
+#endif
   m_file = NULL;
 }
 
@@ -45,7 +54,11 @@ bool CPosixInterfaceForCLog::OpenLogFile
     return false; // error, can't open log file
 
   static const unsigned char BOM[3] = { 0xEF, 0xBB, 0xBF };
+#ifdef __DragonFly__
+  (void)fwrite(BOM, sizeof(BOM), 1, (FILE *)m_file); // write BOM, ignore possible errors
+#else
   (void)fwrite(BOM, sizeof(BOM), 1, m_file); // write BOM, ignore possible errors
+#endif
 
   return true;
 }
@@ -54,7 +67,11 @@ void CPosixInterfaceForCLog::CloseLogFil
 {
   if (m_file)
   {
+#ifdef __DragonFly__
+    fclose((FILE *)m_file);
+#else
     fclose(m_file);
+#endif
     m_file = NULL;
   }
 }
@@ -64,9 +81,15 @@ bool CPosixInterfaceForCLog::WriteString
   if (!m_file)
     return false;
 
+#ifdef __DragonFly__
+  const bool ret = (fwrite(logString.data(), logString.size(), 1, (FILE *)m_file) == 1) &&
+                   (fwrite("\n", 1, 1, (FILE *)m_file) == 1);
+  (void)fflush((FILE *)m_file);
+#else
   const bool ret = (fwrite(logString.data(), logString.size(), 1, m_file) == 1) &&
                    (fwrite("\n", 1, 1, m_file) == 1);
   (void)fflush(m_file);
+#endif
 
   return ret;
 }
