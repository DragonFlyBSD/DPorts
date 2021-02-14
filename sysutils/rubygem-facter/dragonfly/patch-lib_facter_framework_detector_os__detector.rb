--- lib/facter/framework/detector/os_detector.rb.orig	2021-02-14 23:09:49 UTC
+++ lib/facter/framework/detector/os_detector.rb
@@ -26,6 +26,8 @@ class OsDetector
                    detect_distro
                  when /freebsd/
                    :freebsd
+                 when /dragonfly/
+                   :bsd
                  when /bsd/
                    :bsd
                  when /solaris/
