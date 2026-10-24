--- lib/facter/framework/detector/os_detector.rb.orig
+++ lib/facter/framework/detector/os_detector.rb
@@ -28,6 +28,8 @@
                    :freebsd
                  when /openbsd/i
                    :openbsd
+                 when /dragonfly/
+                   :bsd
                  when /bsd/
                    :bsd
                  when /solaris/
