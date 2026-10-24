--- xbmc/settings/Settings.cpp.orig
+++ xbmc/settings/Settings.cpp
@@ -265,6 +265,9 @@
 #elif defined(TARGET_FREEBSD)
   if (CFile::Exists(SETTINGS_XML_FOLDER "freebsd.xml") && !Initialize(SETTINGS_XML_FOLDER "freebsd.xml"))
     CLog::Log(LOGFATAL, "Unable to load freebsd-specific settings definitions");
+#elif defined(TARGET_DRAGONFLY)
+  if (CFile::Exists(SETTINGS_XML_FOLDER "dragonfly.xml") && !Initialize(SETTINGS_XML_FOLDER "dragonfly.xml"))
+    CLog::Log(LOGFATAL, "Unable to load dragonfly-specific settings definitions");
 #elif defined(TARGET_WEBOS)
   if (CFile::Exists(SETTINGS_XML_FOLDER "webos.xml") &&
       !Initialize(SETTINGS_XML_FOLDER "webos.xml"))
