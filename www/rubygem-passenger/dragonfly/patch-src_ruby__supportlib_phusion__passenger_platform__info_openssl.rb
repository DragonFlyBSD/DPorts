--- src/ruby_supportlib/phusion_passenger/platform_info/openssl.rb.orig	2017-07-24 20:10:12.000000000 +0300
+++ src/ruby_supportlib/phusion_passenger/platform_info/openssl.rb
@@ -38,6 +38,14 @@ module PhusionPassenger
           # Homebrew.
           "-I/usr/local/opt/openssl/include"
         end
+      elsif PlatformInfo.os_name_simple == "dragonfly"
+        if File.exist?("/usr/include/openssl/ssl.h")
+          ""
+        else
+          # On recent DragonFly BSD versions ports should use
+          # LibreSSL/OpenSSL from ports.
+          "-I/usr/local/include"
+        end
       else
         ""
       end
@@ -51,6 +59,12 @@ module PhusionPassenger
         else
           "-L/usr/local/opt/openssl/lib"
         end
+      elsif PlatformInfo.os_name_simple == "dragonfly"
+        if File.exist?("/usr/include/openssl/ssl.h")
+          ""
+        else
+          "-L/usr/local/lib"
+        end
       else
         ""
       end
