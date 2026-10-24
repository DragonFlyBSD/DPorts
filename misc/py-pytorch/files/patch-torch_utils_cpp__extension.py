--- torch/utils/cpp_extension.py.orig	2026-07-08 17:44:38 UTC
+++ torch/utils/cpp_extension.py
@@ -565,6 +565,9 @@ def check_compiler_ok_for_platform(compiler: str) -> b
     if IS_MACOS:
         # Check for 'clang' or 'clang++'
         return version_string.startswith("Apple clang")
+    if sys.platform.startswith('freebsd'):
+        # On FreeBSD, c++ is a hardlink to clang++ (the system compiler)
+        return 'clang version' in version_string or 'FreeBSD clang version' in version_string
     return False
 
 
@@ -593,6 +596,9 @@ def get_compiler_abi_compatibility_and_version(compile
     if IS_MACOS:
         # There is no particular minimum version we need for clang, so we're good here.
         return (True, TorchVersion('0.0.0'))
+    if sys.platform.startswith('freebsd'):
+        # FreeBSD uses clang as the system compiler; no minimum version requirement.
+        return (True, TorchVersion('0.0.0'))
     try:
         if IS_LINUX:
             minimum_required_version = MINIMUM_GCC_VERSION
@@ -1755,6 +1761,8 @@ def include_paths(device_type: str = "cpu", torch_incl
     elif device_type == "xpu":
         paths.append(_join_sycl_home('include'))
         paths.append(_join_sycl_home('include', 'sycl'))
+    if sys.platform.startswith("freebsd"):
+        paths.append("/usr/local/include")
     return paths
 
 
