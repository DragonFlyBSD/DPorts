--- tools/cpp/lib_cc_configure.bzl.orig	1979-12-31 23:00:00 UTC
+++ tools/cpp/lib_cc_configure.bzl
@@ -99,6 +99,8 @@ def get_cpu_value(repository_ctx):
     return "freebsd"
   if os_name.find("windows") != -1:
     return "x64_windows"
+  if os_name.find("dragonfly") != -1:
+    return "dragonfly"
   # Use uname to figure out whether we are on x86_32 or x86_64
   result = repository_ctx.execute(["uname", "-m"])
   if result.stdout.strip() in ["power", "ppc64le", "ppc", "ppc64"]:
