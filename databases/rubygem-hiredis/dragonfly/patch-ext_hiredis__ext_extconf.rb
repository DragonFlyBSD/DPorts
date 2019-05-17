--- ext/hiredis_ext/extconf.rb.intermediate	2019-05-04 12:03:45 UTC
+++ ext/hiredis_ext/extconf.rb
@@ -20,7 +20,7 @@ make_program = $1 || ENV['make']
 make_program ||= case RUBY_PLATFORM
 when /mswin/
   'nmake'
-when /(bsd|solaris)/
+when /(dragonfly|bsd|solaris)/
   'gmake'
 else
   'make'
