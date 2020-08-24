--- xbmc/settings/Settings.cpp.orig	2019-12-29 01:23:43 UTC
+++ xbmc/settings/Settings.cpp
@@ -537,6 +537,9 @@ bool CSettings::InitializeDefinitions()
     CLog::Log(LOGFATAL, "Unable to load rbp-specific settings definitions");
   if (g_RBP.RaspberryPiVersion() > 1 && CFile::Exists(SETTINGS_XML_FOLDER "rbp2.xml") && !Initialize(SETTINGS_XML_FOLDER "rbp2.xml"))
     CLog::Log(LOGFATAL, "Unable to load rbp2-specific settings definitions");
+#elif defined(TARGET_DRAGONFLY)
+  if (CFile::Exists(SETTINGS_XML_FOLDER "dragonfly.xml") && !Initialize(SETTINGS_XML_FOLDER "dragonfly.xml"))
+    CLog::Log(LOGFATAL, "Unable to load dragonfly-specific settings definitions");
 #elif defined(TARGET_FREEBSD)
   if (CFile::Exists(SETTINGS_XML_FOLDER "freebsd.xml") && !Initialize(SETTINGS_XML_FOLDER "freebsd.xml"))
     CLog::Log(LOGFATAL, "Unable to load freebsd-specific settings definitions");
