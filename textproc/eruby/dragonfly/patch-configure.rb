--- configure.rb.intermediate	2013-12-13 08:11:22.847883000 +0000
+++ configure.rb
@@ -501,6 +501,9 @@ if $ENABLE_SHARED
     else
       $LIBERUBY_ALIASES = "liberuby.so.$(MAJOR) liberuby.so"
     end
+  when /-dragonfly/
+    $LIBERUBY_SO = "liberuby.so.$(MAJOR_MINOR)"
+    $LIBERUBY_ALIASES = "liberuby.so"
   when /-solaris/
     $XLDFLAGS = "-R$(prefix)/lib"
   when /-hpux/
