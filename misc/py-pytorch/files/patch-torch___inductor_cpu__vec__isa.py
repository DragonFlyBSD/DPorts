--- torch/_inductor/cpu_vec_isa.py.orig	2026-07-08 17:44:38 UTC
+++ torch/_inductor/cpu_vec_isa.py
@@ -535,7 +535,7 @@ def x86_isa_checker() -> list[str]:
     """
     Arch value is x86_64 on Linux, and the value is AMD64 on Windows.
     """
-    if Arch != "x86_64" and Arch != "AMD64":
+    if Arch != "x86_64" and Arch != "AMD64" and Arch != "amd64":
         return supported_isa
 
     avx2 = torch.cpu._is_avx2_supported()
@@ -601,7 +601,9 @@ def valid_vec_isa_list() -> list[VecISA]:
     if sys.platform == "darwin" and platform.processor() == "arm":
         isa_list.append(VecNEON())
 
-    if sys.platform not in ["linux", "win32"]:
+    if sys.platform not in ["linux", "win32"] and not sys.platform.startswith(
+        "freebsd"
+    ):
         return isa_list
 
     arch = platform.machine()
@@ -632,7 +634,7 @@ def valid_vec_isa_list() -> list[VecISA]:
         else:
             isa_list.append(VecNEON())
 
-    elif arch in ["x86_64", "AMD64"]:
+    elif arch in ["x86_64", "AMD64", "amd64"]:
         """
         arch value is x86_64 on Linux, and the value is AMD64 on Windows.
         """
