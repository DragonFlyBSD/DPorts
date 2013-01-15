$NetBSD$

Fix paths.
--- lib/phusion_passenger.rb.orig	2011-04-14 06:14:17.000000000 +0000
+++ lib/phusion_passenger.rb
@@ -46,12 +46,12 @@ module PhusionPassenger
 		return @natively_packaged
 	end
 	
-	NATIVELY_PACKAGED_SOURCE_ROOT        = "/usr/share/phusion-passenger/source"
-	NATIVELY_PACKAGED_DOCDIR             = "/usr/share/doc/phusion-passenger"
-	NATIVELY_PACKAGED_RESOURCES_DIR      = "/usr/share/phusion-passenger"
-	NATIVELY_PACKAGED_AGENTS_DIR         = "/usr/lib/phusion-passenger/agents"
-	NATIVELY_PACKAGED_HELPER_SCRIPTS_DIR = "/usr/share/phusion-passenger/helper-scripts"
-	NATIVELY_PACKAGED_APACHE2_MODULE     = "/usr/lib/apache2/modules/mod_passenger.so"
+	NATIVELY_PACKAGED_SOURCE_ROOT        = "@PREFIX@/share/phusion-passenger/source"
+	NATIVELY_PACKAGED_DOCDIR             = "@PREFIX@/share/doc/phusion-passenger"
+	NATIVELY_PACKAGED_RESOURCES_DIR      = "@PREFIX@/share/phusion-passenger"
+	NATIVELY_PACKAGED_AGENTS_DIR         = "@PREFIX@/lib/phusion-passenger/agents"
+	NATIVELY_PACKAGED_HELPER_SCRIPTS_DIR = "@PREFIX@/share/phusion-passenger/helper-scripts"
+	NATIVELY_PACKAGED_APACHE2_MODULE     = "@PREFIX@/lib/httpd/mod_passenger.so"
 	
 	# Directory containing the Phusion Passenger Ruby libraries.
 	LIBDIR         = File.expand_path(File.dirname(__FILE__))
@@ -63,15 +63,14 @@ module PhusionPassenger
 	LOCAL_DIR      = ".passenger"
 	
 	# Directories in which to look for plugins.
-	PLUGIN_DIRS    = ["/usr/share/phusion-passenger/plugins",
-		"/usr/local/share/phusion-passenger/plugins",
+	PLUGIN_DIRS    = ["@PREFIX@/share/phusion-passenger/plugins",
 		"~/#{LOCAL_DIR}/plugins"]
 	
 	# Directory under $HOME for storing Phusion Passenger Standalone resource files.
 	LOCAL_STANDALONE_RESOURCE_DIR  = File.join(LOCAL_DIR, "standalone")
 	
 	# System-wide directory for storing Phusion Passenger Standalone resource files.
-	GLOBAL_STANDALONE_RESOURCE_DIR = "/var/lib/passenger-standalone"
+	GLOBAL_STANDALONE_RESOURCE_DIR = "@PASSENGER_VARDIR@"
 	
 	if !natively_packaged?
 		# Top directory of the Phusion Passenger source code.
