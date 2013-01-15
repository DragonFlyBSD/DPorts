$NetBSD$

Fix paths.
--- lib/phusion_passenger/admin_tools/memory_stats.rb.orig	2010-10-01 10:22:34.000000000 +0000
+++ lib/phusion_passenger/admin_tools/memory_stats.rb
@@ -206,7 +206,7 @@ private
 	# Returns a list of Process objects that match the given search criteria.
 	#
 	#  # Search by executable path.
-	#  list_processes(:exe => '/usr/sbin/apache2')
+	#  list_processes(:exe => '@PREFIX@/sbin/httpd')
 	#  
 	#  # Search by executable name.
 	#  list_processes(:name => 'ruby1.8')
