--- tools/cpp/lib_cc_configure.bzl.intermediate	2018-07-09 16:32:48 UTC
+++ tools/cpp/lib_cc_configure.bzl
@@ -181,6 +181,8 @@ def get_cpu_value(repository_ctx):
         return "darwin"
     if os_name.find("freebsd") != -1:
         return "freebsd"
+    if os_name.find("dragonfly") != -1:
+        return "dragonfly"
     if os_name.find("windows") != -1:
         return "x64_windows"
 
