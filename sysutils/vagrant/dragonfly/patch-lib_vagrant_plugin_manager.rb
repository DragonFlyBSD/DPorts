--- lib/vagrant/plugin/manager.rb.orig	2020-11-20 17:38:35 UTC
+++ lib/vagrant/plugin/manager.rb
@@ -18,7 +18,7 @@ module Vagrant
 
       # Returns the path to the [StateFile] for system plugins.
       def self.system_plugins_file
-        dir = Vagrant.installer_embedded_dir
+        dir = '@DATADIR@'
         return nil if !dir
         Pathname.new(dir).join("plugins.json")
       end
@@ -38,7 +38,7 @@ module Vagrant
 
         system_path  = self.class.system_plugins_file
         @system_file = nil
-        @system_file = StateFile.new(system_path) if system_path && system_path.file?
+        @system_file = StateFile.new(system_path, true) if system_path && system_path.file?
 
         @local_file = nil
         @globalized = @localized = false
