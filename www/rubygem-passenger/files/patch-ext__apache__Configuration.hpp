$NetBSD$

Fix paths.
--- ext/apache2/Configuration.hpp.orig	2010-10-10 18:52:03.000000000 +0000
+++ ext/apache2/Configuration.hpp
@@ -432,7 +432,7 @@ struct ServerConfig {
 		}
 		
 		if (analyticsLogDir.empty() && geteuid() == 0) {
-			analyticsLogDir = "/var/log/passenger-analytics";
+			analyticsLogDir = "@PASSENGER_LOGDIR@/analytics";
 		} else if (analyticsLogDir.empty()) {
 			struct passwd *user = getpwuid(geteuid());
 			string username;
