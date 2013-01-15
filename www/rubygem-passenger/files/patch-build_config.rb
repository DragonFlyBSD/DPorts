$NetBSD$

Make sure we can pass the proper rpath flag.
--- build/config.rb.orig	2012-08-01 11:31:01.000000000 +0000
+++ build/config.rb
@@ -40,7 +40,7 @@ EXTRA_CXXFLAGS << " #{OPTIMIZATION_FLAGS
 
 # Extra linker flags that should always be passed to the linker.
 # Should be included last in the command string, even after PlatformInfo.portability_ldflags.
-EXTRA_LDFLAGS  = ""
+EXTRA_LDFLAGS  = ENV['EXTRA_LDFLAGS']
 
 # Whether to use the vendored libev or the system one.
 USE_VENDORED_LIBEV = boolean_option("USE_VENDORED_LIBEV", true)
