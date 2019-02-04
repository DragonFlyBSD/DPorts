--- xbmc/guilib/XBTFReader.cpp.orig	2018-08-04 14:42:57.972027000 +0200
+++ xbmc/guilib/XBTFReader.cpp	2018-08-04 14:43:16.152421000 +0200
@@ -214,7 +214,7 @@ bool CXBTFReader::Load(const CXBTFFrame&
   if (m_file == nullptr)
     return false;
 
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_ANDROID)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_ANDROID)
   if (fseeko(m_file, static_cast<off_t>(frame.GetOffset()), SEEK_SET) == -1)
 #else
   if (fseeko64(m_file, static_cast<off_t>(frame.GetOffset()), SEEK_SET) == -1)
