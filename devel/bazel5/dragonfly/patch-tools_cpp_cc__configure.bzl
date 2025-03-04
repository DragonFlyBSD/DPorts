--- tools/cpp/cc_configure.bzl.orig	Tue Jan  1 00:00:00 1980
+++ tools/cpp/cc_configure.bzl	Mon Mar
@@ -104,7 +104,7 @@ def cc_autoconf_impl(repository_ctx, overriden_tools =
         repository_ctx.template("BUILD", paths["@bazel_tools//tools/cpp:BUILD.empty.tpl"], {
             "%{cpu}": get_cpu_value(repository_ctx),
         })
-    elif cpu_value == "freebsd" or cpu_value == "openbsd":
+    elif cpu_value == "freebsd" or cpu_value == "openbsd" or cpu_value == "dragonfly":
         paths = resolve_labels(repository_ctx, [
             "@bazel_tools//tools/cpp:BUILD.static.bsd",
             "@bazel_tools//tools/cpp:bsd_cc_toolchain_config.bzl",
