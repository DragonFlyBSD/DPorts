--- tools/cpp/bsd_cc_toolchain_config.bzl.orig	Tue Jan  1 00:00:00 1980
+++ tools/cpp/bsd_cc_toolchain_config.bzl	Tue Mar
@@ -56,7 +56,7 @@ all_link_actions = [
 
 def _impl(ctx):
     cpu = ctx.attr.cpu
-    is_bsd = cpu == "freebsd" or cpu == "openbsd"
+    is_bsd = cpu == "freebsd" or cpu == "openbsd" or cpu == "dragonfly"
     compiler = "compiler"
     toolchain_identifier = "local_{}".format(cpu) if is_bsd else "stub_armeabi-v7a"
     host_system_name = "local" if is_bsd else "armeabi-v7a"
@@ -242,17 +242,31 @@ def _impl(ctx):
         features = [supports_dynamic_linker_feature, supports_pic_feature]
 
     if (is_bsd):
-        cxx_builtin_include_directories = ["/usr/lib/clang", "/usr/local/include", "/usr/include"]
+        cxx_builtin_include_directories = ["/usr/lib/clang", "/usr/local/include", "/usr/include", "/usr/libdata/gcc80"]
     else:
         cxx_builtin_include_directories = []
 
-    if is_bsd:
+    if is_bsd and cpu != "dragonfly":
         tool_paths = [
             tool_path(name = "ar", path = "/usr/bin/ar"),
             tool_path(name = "compat-ld", path = "/usr/bin/ld"),
             tool_path(name = "cpp", path = "/usr/bin/cpp"),
             tool_path(name = "dwp", path = "/usr/bin/dwp"),
             tool_path(name = "gcc", path = "/usr/bin/clang"),
+            tool_path(name = "gcov", path = "/usr/bin/gcov"),
+            tool_path(name = "ld", path = "/usr/bin/ld"),
+            tool_path(name = "nm", path = "/usr/bin/nm"),
+            tool_path(name = "objcopy", path = "/usr/bin/objcopy"),
+            tool_path(name = "objdump", path = "/usr/bin/objdump"),
+            tool_path(name = "strip", path = "/usr/bin/strip"),
+        ]
+    elif cpu == "dragonfly":
+        tool_paths = [
+            tool_path(name = "ar", path = "/usr/bin/ar"),
+            tool_path(name = "compat-ld", path = "/usr/bin/ld"),
+            tool_path(name = "cpp", path = "/usr/bin/cpp"),
+            tool_path(name = "dwp", path = "/usr/bin/false"),
+            tool_path(name = "gcc", path = "/usr/bin/cc"),
             tool_path(name = "gcov", path = "/usr/bin/gcov"),
             tool_path(name = "ld", path = "/usr/bin/ld"),
             tool_path(name = "nm", path = "/usr/bin/nm"),
