--- xbmc/settings/Settings.cpp.orig	2020-12-07 05:54:45 UTC
+++ xbmc/settings/Settings.cpp
@@ -639,6 +639,9 @@ bool CSettings::InitializeDefinitions()
 #elif defined(TARGET_FREEBSD)
   if (CFile::Exists(SETTINGS_XML_FOLDER "freebsd.xml") && !Initialize(SETTINGS_XML_FOLDER "freebsd.xml"))
     CLog::Log(LOGFATAL, "Unable to load freebsd-specific settings definitions");
+#elif defined(TARGET_DRAGONFLY)
+  if (CFile::Exists(SETTINGS_XML_FOLDER "dragonfly.xml") && !Initialize(SETTINGS_XML_FOLDER "dragonfly.xml"))
+    CLog::Log(LOGFATAL, "Unable to load dragonfly-specific settings definitions");
 #elif defined(TARGET_LINUX)
   if (CFile::Exists(SETTINGS_XML_FOLDER "linux.xml") && !Initialize(SETTINGS_XML_FOLDER "linux.xml"))
     CLog::Log(LOGFATAL, "Unable to load linux-specific settings definitions");
