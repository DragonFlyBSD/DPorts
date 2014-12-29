--- lib/pkg-config.rb.orig	2014-12-28 20:07:44 UTC
+++ lib/pkg-config.rb
@@ -53,10 +53,6 @@ class PackageConfig
         found_pkg_config = search_pkg_config_from_path(pkg_config)
         pkg_config = found_pkg_config if found_pkg_config
       end
-      unless pkg_config.absolute?
-        found_pkg_config = search_pkg_config_by_dln_find_exe(pkg_config)
-        pkg_config = found_pkg_config if found_pkg_config
-      end
       pkg_config
     end
 
