--- xbmc/settings/Settings.cpp.orig	2018-08-04 15:10:57.018410000 +0200
+++ xbmc/settings/Settings.cpp	2018-08-04 15:11:29.269108000 +0200
@@ -815,6 +815,9 @@ bool CSettings::InitializeDefinitions()
 #elif defined(TARGET_FREEBSD)
   if (CFile::Exists(SETTINGS_XML_FOLDER "freebsd.xml") && !Initialize(SETTINGS_XML_FOLDER "freebsd.xml"))
     CLog::Log(LOGFATAL, "Unable to load freebsd-specific settings definitions");
+#elif defined(TARGET_DRAGONFLY)
+  if (CFile::Exists(SETTINGS_XML_FOLDER "dragonfly.xml") && !Initialize(SETTINGS_XML_FOLDER "dragonfly.xml"))
+    CLog::Log(LOGFATAL, "Unable to load dragonfly-specific settings definitions");
 #elif defined(HAS_IMXVPU)
   if (CFile::Exists(SETTINGS_XML_FOLDER "imx6.xml") && !Initialize(SETTINGS_XML_FOLDER "imx6.xml"))
     CLog::Log(LOGFATAL, "Unable to load imx6-specific settings definitions");
