--- ext/glib2/extconf.rb.orig	2014-12-29 02:20:06 UTC
+++ ext/glib2/extconf.rb
@@ -16,15 +16,6 @@ require 'mkmf-gnome2'
 
 setup_win32(module_name, base_dir)
 
-unless required_pkg_config_package([package_id, 2, 12, 0],
-                                   :debian => "libglib2.0-dev",
-                                   :redhat => "glib2-devel",
-                                   :homebrew => "glib",
-                                   :macports => "glib2")
-  exit(false)
-end
-PKGConfig.have_package('gthread-2.0')
-
 have_header("unistd.h")
 have_header("io.h")
 
@@ -55,18 +46,19 @@ have_var("rb_curr_thread", [ruby_header,
 create_pkg_config_file("Ruby/GLib2", package_id)
 
 enum_types_prefix = "glib-enum-types"
-include_paths = PKGConfig.cflags_only_I("glib-2.0")
+include_paths = "/usr/local/include/glib-2.0"
 headers = include_paths.split.inject([]) do |result, path|
   result + Dir.glob(File.join(path.sub(/^-I/, ""), "glib", "*.h"))
 end.reject do |file|
   /g(iochannel|main|scanner)\.h/ =~ file
 end
-include_paths = PKGConfig.cflags_only_I("gobject-2.0")
+include_paths = "/usr/local/include/glib-2.0"
 headers = include_paths.split.inject(headers) do |result, path|
   result + Dir.glob(File.join(path.sub(/^-I/, ""), "gobject", "gsignal.h"))
 end
 glib_mkenums(enum_types_prefix, headers, "G_TYPE_", ["glib-object.h"])
 
+$CFLAGS += " -I/usr/local/include/glib-2.0 -I/usr/local/lib/glib-2.0/include"
 $defs << "-DRUBY_GLIB2_COMPILATION"
 
 create_makefile(module_name)
