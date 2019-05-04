--- src/ruby_supportlib/phusion_passenger/platform_info/openssl.rb.intermediate	2019-05-04 10:27:17 UTC
+++ src/ruby_supportlib/phusion_passenger/platform_info/openssl.rb
@@ -41,6 +41,10 @@ module PhusionPassenger
           # Use the one from Macports.
           "-I/opt/local/include"
         end
+      elsif PlatformInfo.os_name_simple == "dragonfly"
+          # On recent DragonFly BSD versions ports should use
+          # LibreSSL/OpenSSL from ports.
+          "-I/usr/local/include"
       else
         ""
       end
@@ -56,6 +60,8 @@ module PhusionPassenger
         else
           "-L/opt/local/lib"
         end
+      elsif PlatformInfo.os_name_simple == "dragonfly"
+          "-L/usr/local/lib"
       else
         ""
       end
