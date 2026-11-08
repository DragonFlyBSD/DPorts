--- lib/extpp/compiler.rb.orig
+++ lib/extpp/compiler.rb
@@ -60,7 +60,7 @@
         std = nil
 
         case `#{RbConfig.expand("$(CXX) --version")}`
-        when /[cg]\+\+.+ (\d+\.\d+)\.\d/
+        when /[cg]\+\+.+ (\d+\.\d+)(?:\.\d|\s)/
           # Examples:
           #   "g++ --version" on Debian:
           #
