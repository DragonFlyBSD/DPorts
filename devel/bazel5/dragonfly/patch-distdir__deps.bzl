--- distdir_deps.bzl.orig	Tue Mar  4 14:40:19 2025
+++ distdir_deps.bzl	Tue Mar
@@ -21,10 +21,9 @@ DIST_DEPS = {
     ########################################
     "platforms": {
         "archive": "platforms-0.0.5.tar.gz",
-        "sha256": "379113459b0feaf6bfbb584a91874c065078aa673222846ac765f86661c27407",
+        "sha256": "9d4a2c08a78841105fbd8c59f7149dd97bae92aa85da33885472cc62880f95a4",
         "urls": [
-            "https://mirror.bazel.build/github.com/bazelbuild/platforms/releases/download/0.0.5/platforms-0.0.5.tar.gz",
-            "https://github.com/bazelbuild/platforms/releases/download/0.0.5/platforms-0.0.5.tar.gz",
+	    "https://avalon.dragonflybsd.org/misc/distfiles/platforms-0.0.5-dfly.tar.gz"
         ],
         "used_in": [
             "additional_distfiles",
@@ -132,6 +131,9 @@ DIST_DEPS = {
             "//third_party/grpc:grpc_1.41.0.patch",
             "//third_party/grpc:extra-patch-grpc_bazel_grpc__deps.bzl",
             "//third_party/grpc:grpc_1.41.0.win_arm64.patch",
+            "//third_party/grpc:extra-include_grpc_impl_codegen_port__platform.h",
+            "//third_party/grpc:extra-include_grpc_event__engine_port.h",
+            "//third_party/grpc:extra-src_core_lib_iomgr_port.h",
         ],
         "used_in": [
             "additional_distfiles",
@@ -172,6 +174,8 @@ DIST_DEPS = {
         "patches": [
             "//third_party/py/abseil:extra-patch-abseil-cpp_absl_base_internal_unscaledcycleclock.cc",
             "//third_party/py/abseil:extra-patch-abseil-cpp-cfe27e79cfcbefb2b4479e04f80cbb299bc46965",
+            "//third_party/py/abseil:extra-absl_base_config.h",
+            "//third_party/py/abseil:extra-absl_debugging_internal_vdso_support.cc",
         ],
         "used_in": [
             "additional_distfiles",
