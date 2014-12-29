--- lib/pkg-config.rb.orig	2014-12-29 12:49:13 UTC
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
 
@@ -67,42 +63,6 @@ class PackageConfig
       end
       nil
     end
-
-    def search_pkg_config_by_dln_find_exe(pkg_config)
-      begin
-        require "dl/import"
-      rescue LoadError
-        return nil
-      end
-      dln = Module.new
-      dln.module_eval do
-        if DL.const_defined?(:Importer)
-          extend DL::Importer
-        else
-          extend DL::Importable
-        end
-        begin
-          dlload RbConfig::CONFIG["LIBRUBY"]
-        rescue RuntimeError
-          return nil if $!.message == "unknown error"
-          return nil if /: image not found\z/ =~ $!.message
-          raise
-        rescue DL::DLError
-          return nil
-        end
-        begin
-          extern "const char *dln_find_exe(const char *, const char *)"
-        rescue DL::DLError
-          return nil
-        end
-      end
-      path = dln.dln_find_exe(pkg_config.to_s, nil)
-      if path.nil? or path.size.zero?
-        nil
-      else
-        Pathname(path.to_s)
-      end
-    end
   end
 
   attr_reader :paths
@@ -200,7 +160,8 @@ class PackageConfig
     cflags_set += all_required_packages.collect do |package|
       self.class.new(package, @options).cflags
     end
-    all_cflags = normalize_cflags(Shellwords.split(cflags_set.join(" ")))
+    #all_cflags = normalize_cflags(Shellwords.split(cflags_set.join(" ")))
+    all_cflags = Shellwords.split(cflags_set.join(" "))
     path_flags, other_flags = all_cflags.partition {|flag| /\A-I/ =~ flag}
     path_flags = remove_duplicated_include_paths(path_flags)
     path_flags = path_flags.reject do |flag|
