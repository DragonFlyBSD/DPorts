--- tools/cpp/lib_cc_configure.bzl.orig	Tue Jan  1 00:00:00 1980
+++ tools/cpp/lib_cc_configure.bzl	Mon Mar
@@ -188,6 +188,8 @@ def get_cpu_value(repository_ctx):
         return "freebsd"
     if os_name.find("openbsd") != -1:
         return "openbsd"
+    if os_name.find("dragonfly") != -1:
+        return "dragonfly"
     if os_name.find("windows") != -1:
         if arch == "aarch64":
             return "arm64_windows"
