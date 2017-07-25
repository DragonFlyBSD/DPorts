--- src/ruby_supportlib/phusion_passenger/platform_info/operating_system.rb.orig	2017-07-24 20:20:30.000000000 +0300
+++ src/ruby_supportlib/phusion_passenger/platform_info/operating_system.rb
@@ -42,6 +42,8 @@ module PhusionPassenger
         'solaris'
       elsif rb_config['target_os'] =~ /freebsd/
         'freebsd'
+      elsif rb_config['target_os'] =~ /dragonfly/
+        'dragonfly'
       elsif rb_config['target_os'] =~ /aix/
         'aix'
       else
