--- ext/cairo/extconf.rb.orig	2014-12-28 17:48:54 UTC
+++ ext/cairo/extconf.rb
@@ -163,13 +163,7 @@ def required_pkg_config_package(package_
   PKGConfig.have_package(*required_package_info)
 end
 
-unless required_pkg_config_package([package, major, minor, micro],
-                                   :debian => "libcairo2-dev",
-                                   :redhat => "cairo-devel",
-                                   :homebrew => "cairo",
-                                   :macports => "cairo")
-  exit(false)
-end
+$CFLAGS += " -I/usr/local/include/cairo"
 
 checking_for(checking_message("Mac OS X")) do
   case RUBY_PLATFORM
