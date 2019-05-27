--- lib/tasks/libsass.rb.intermediate	2019-05-26 18:11:05.000000000 +0000
+++ lib/tasks/libsass.rb
@@ -23,7 +23,7 @@ namespace :libsass do
     make_program ||= case RUBY_PLATFORM
                      when /mswin/
                        'nmake'
-                     when /(bsd|solaris)/
+                     when /(bsd|dragonfly|solaris)/
                        'gmake'
                      else
                        'make'
