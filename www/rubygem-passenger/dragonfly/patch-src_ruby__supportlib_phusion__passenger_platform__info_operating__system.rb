--- src/ruby_supportlib/phusion_passenger/platform_info/operating_system.rb.intermediate	2019-05-04 10:23:12 UTC
+++ src/ruby_supportlib/phusion_passenger/platform_info/operating_system.rb
@@ -40,6 +40,8 @@ module PhusionPassenger
         'linux'
       elsif rb_config['target_os'] =~ /solaris/
         'solaris'
+      elsif rb_config['target_os'] =~ /dragonfly/
+        'dragonfly'
       elsif rb_config['target_os'] =~ /freebsd/
         'freebsd'
       elsif rb_config['target_os'] =~ /aix/
