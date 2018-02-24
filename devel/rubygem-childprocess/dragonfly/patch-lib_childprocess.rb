--- lib/childprocess.rb.orig	2018-02-22 00:27:07 UTC
+++ lib/childprocess.rb
@@ -113,7 +113,7 @@ module ChildProcess
           :cygwin
         when /solaris|sunos/
           :solaris
-        when /bsd/
+        when /bsd|dragonfly/
           :bsd
         when /aix/
           :aix
