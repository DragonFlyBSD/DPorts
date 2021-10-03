--- lib/vagrant/plugin/state_file.rb.orig	2020-11-20 17:38:35 UTC
+++ lib/vagrant/plugin/state_file.rb
@@ -11,8 +11,9 @@ module Vagrant
       # @return [Pathname] path to file
       attr_reader :path
 
-      def initialize(path)
+      def initialize(path, system = false)
         @path = path
+        @system = system
 
         @data = {}
         if @path.exist?
@@ -28,6 +29,21 @@ module Vagrant
 
         @data["version"] ||= "1"
         @data["installed"] ||= {}
+        load_extra_plugins
+      end
+
+      def load_extra_plugins
+        extra_plugins = Dir.glob(@path.dirname.join('plugins.d', '*.json'))
+        extra_plugins.each do |filename|
+          json = File.read(filename)
+          begin
+            plugin_data = JSON.parse(json)
+            @data["installed"].merge!(plugin_data)
+          rescue JSON::ParserError => e
+            raise Vagrant::Errors::PluginStateFileParseError,
+              path: filename, message: e.message
+          end
+        end
       end
 
       # Add a plugin that is installed to the state file.
@@ -107,6 +123,10 @@ module Vagrant
           f.close
           FileUtils.mv(f.path, @path)
         end
+      rescue Errno::EACCES
+        # Ignore permission denied against system-installed plugins; regular
+        # users are not supposed to write there.
+        raise unless @system
       end
 
       protected
