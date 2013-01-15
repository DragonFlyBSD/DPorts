$NetBSD$

Fix paths.
--- ext/common/ResourceLocator.h.orig	2011-02-17 15:05:08.000000000 +0000
+++ ext/common/ResourceLocator.h
@@ -65,13 +65,13 @@ public:
 				!fileExists(root + "/DEVELOPERS.TXT");
 			
 			if (nativelyPackaged) {
-				agentsDir           = "/usr/lib/phusion-passenger/agents";
-				helperScriptsDir    = "/usr/share/phusion-passenger/helper-scripts";
-				resourcesDir        = "/usr/share/phusion-passenger";
-				docDir              = "/usr/share/doc/phusion-passenger";
+				agentsDir           = "@PREFIX@/lib/phusion-passenger/agents";
+				helperScriptsDir    = "@PREFIX@/share/phusion-passenger/helper-scripts";
+				resourcesDir        = "@PREFIX@/share/phusion-passenger";
+				docDir              = "@PREFIX@/share/doc/phusion-passenger";
 				rubyLibDir          = "";
-				compilableSourceDir = "/usr/share/phusion-passenger/compilable-source";
-				apache2Module       = "/usr/lib/apache2/modules/mod_passenger.so";
+				compilableSourceDir = "@PREFIX@/share/phusion-passenger/compilable-source";
+				apache2Module       = "@PREFIX@/lib/httpd/mod_passenger.so";
 			} else {
 				agentsDir           = root + "/agents";
 				helperScriptsDir    = root + "/helper-scripts";
