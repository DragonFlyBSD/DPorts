--- tools/cpp/cc_toolchain_config.bzl.orig	Tue Jan  1 00:00:00 1980
+++ tools/cpp/cc_toolchain_config.bzl	Tue Mar
@@ -100,6 +100,8 @@ def _impl(ctx):
         toolchain_identifier = "local_freebsd"
     elif (ctx.attr.cpu == "openbsd"):
         toolchain_identifier = "local_openbsd"
+    elif (ctx.attr.cpu == "dragonfly"):
+        toolchain_identifier = "local_dragonfly"
     elif (ctx.attr.cpu == "local"):
         toolchain_identifier = "local_linux"
     elif (ctx.attr.cpu == "x64_windows" and ctx.attr.compiler == "windows_clang"):
@@ -134,6 +136,7 @@ def _impl(ctx):
     elif (ctx.attr.cpu == "darwin" or
           ctx.attr.cpu == "freebsd" or
           ctx.attr.cpu == "openbsd" or
+          ctx.attr.cpu == "dragonfly" or
           ctx.attr.cpu == "local" or
           ctx.attr.cpu == "x64_windows" or
           ctx.attr.cpu == "x64_windows_msvc"):
@@ -149,6 +152,8 @@ def _impl(ctx):
         target_cpu = "freebsd"
     elif (ctx.attr.cpu == "openbsd"):
         target_cpu = "openbsd"
+    elif (ctx.attr.cpu == "dragonfly"):
+        target_cpu = "dragonfly"
     elif (ctx.attr.cpu == "local"):
         target_cpu = "local"
     elif (ctx.attr.cpu == "x64_windows"):
@@ -162,6 +167,7 @@ def _impl(ctx):
         target_libc = "armeabi-v7a"
     elif (ctx.attr.cpu == "freebsd" or
           ctx.attr.cpu == "openbsd" or
+          ctx.attr.cpu == "dragonfly" or
           ctx.attr.cpu == "local" or
           ctx.attr.cpu == "x64_windows"):
         target_libc = "local"
@@ -178,6 +184,7 @@ def _impl(ctx):
           ctx.attr.cpu == "darwin" or
           ctx.attr.cpu == "freebsd" or
           ctx.attr.cpu == "openbsd" or
+          ctx.attr.cpu == "dragonfly" or
           ctx.attr.cpu == "local"):
         compiler = "compiler"
     elif (ctx.attr.cpu == "x64_windows" and ctx.attr.compiler == "windows_clang"):
@@ -196,6 +203,7 @@ def _impl(ctx):
     elif (ctx.attr.cpu == "darwin" or
           ctx.attr.cpu == "freebsd" or
           ctx.attr.cpu == "openbsd" or
+          ctx.attr.cpu == "dragonfly" or
           ctx.attr.cpu == "local" or
           ctx.attr.cpu == "x64_windows" or
           ctx.attr.cpu == "x64_windows_msvc"):
@@ -208,6 +216,7 @@ def _impl(ctx):
     elif (ctx.attr.cpu == "darwin" or
           ctx.attr.cpu == "freebsd" or
           ctx.attr.cpu == "openbsd" or
+          ctx.attr.cpu == "dragonfly" or
           ctx.attr.cpu == "local" or
           ctx.attr.cpu == "x64_windows" or
           ctx.attr.cpu == "x64_windows_msvc"):
@@ -222,6 +231,7 @@ def _impl(ctx):
     if (ctx.attr.cpu == "darwin" or
         ctx.attr.cpu == "freebsd" or
         ctx.attr.cpu == "openbsd" or
+        ctx.attr.cpu == "dragonfly" or
         ctx.attr.cpu == "local"):
         objcopy_embed_data_action = action_config(
             action_name = "objcopy_embed_data",
@@ -286,6 +296,7 @@ def _impl(ctx):
     elif (ctx.attr.cpu == "darwin" or
           ctx.attr.cpu == "freebsd" or
           ctx.attr.cpu == "openbsd" or
+          ctx.attr.cpu == "dragonfly" or
           ctx.attr.cpu == "local" or
           ctx.attr.cpu == "x64_windows"):
         action_configs = [objcopy_embed_data_action]
@@ -361,7 +372,8 @@ def _impl(ctx):
             ],
         )
     elif (ctx.attr.cpu == "freebsd" or
-          ctx.attr.cpu == "openbsd"):
+          ctx.attr.cpu == "openbsd" or
+	  ctx.attr.cpu == "dragonfly"):
         default_link_flags_feature = feature(
             name = "default_link_flags",
             enabled = True,
@@ -431,7 +443,8 @@ def _impl(ctx):
 
     if (ctx.attr.cpu == "darwin" or
         ctx.attr.cpu == "freebsd" or
-        ctx.attr.cpu == "openbsd"):
+        ctx.attr.cpu == "openbsd" or
+        ctx.attr.cpu == "dragonfly"):
         unfiltered_compile_flags_feature = feature(
             name = "unfiltered_compile_flags",
             enabled = True,
@@ -700,7 +713,8 @@ def _impl(ctx):
             ],
         )
     elif (ctx.attr.cpu == "freebsd" or
-          ctx.attr.cpu == "openbsd"):
+          ctx.attr.cpu == "openbsd" or
+          ctx.attr.cpu == "dragonfly"):
         default_compile_flags_feature = feature(
             name = "default_compile_flags",
             enabled = True,
@@ -957,6 +971,7 @@ def _impl(ctx):
     if (ctx.attr.cpu == "darwin" or
         ctx.attr.cpu == "freebsd" or
         ctx.attr.cpu == "openbsd" or
+        ctx.attr.cpu == "dragonfly" or
         ctx.attr.cpu == "local"):
         user_compile_flags_feature = feature(
             name = "user_compile_flags",
@@ -1013,6 +1028,7 @@ def _impl(ctx):
     if (ctx.attr.cpu == "darwin" or
         ctx.attr.cpu == "freebsd" or
         ctx.attr.cpu == "openbsd" or
+        ctx.attr.cpu == "dragonfly" or
         ctx.attr.cpu == "local"):
         sysroot_feature = feature(
             name = "sysroot",
@@ -1169,6 +1185,7 @@ def _impl(ctx):
         ]
     elif (ctx.attr.cpu == "freebsd" or
           ctx.attr.cpu == "openbsd" or
+          ctx.attr.cpu == "dragonfly" or
           ctx.attr.cpu == "local"):
         features = [
             default_compile_flags_feature,
@@ -1322,6 +1339,20 @@ def _impl(ctx):
             tool_path(name = "cpp", path = "/usr/bin/cpp"),
             tool_path(name = "dwp", path = "/usr/bin/false"),
             tool_path(name = "gcc", path = "/usr/bin/clang"),
+            tool_path(name = "gcov", path = "/usr/bin/gcov"),
+            tool_path(name = "ld", path = "/usr/bin/ld"),
+            tool_path(name = "nm", path = "/usr/bin/nm"),
+            tool_path(name = "objcopy", path = "/usr/bin/objcopy"),
+            tool_path(name = "objdump", path = "/usr/bin/objdump"),
+            tool_path(name = "strip", path = "/usr/bin/strip"),
+        ]
+    elif (ctx.attr.cpu == "dragonfly"):
+        tool_paths = [
+            tool_path(name = "ar", path = "/usr/bin/ar"),
+            tool_path(name = "compat-ld", path = "/usr/bin/ld"),
+            tool_path(name = "cpp", path = "/usr/bin/cpp"),
+            tool_path(name = "dwp", path = "/usr/bin/false"),
+            tool_path(name = "gcc", path = "/usr/bin/gcc"),
             tool_path(name = "gcov", path = "/usr/bin/gcov"),
             tool_path(name = "ld", path = "/usr/bin/ld"),
             tool_path(name = "nm", path = "/usr/bin/nm"),
