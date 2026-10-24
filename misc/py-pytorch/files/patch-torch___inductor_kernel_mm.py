--- torch/_inductor/kernel/mm.py.orig	2026-07-08 17:44:38 UTC
+++ torch/_inductor/kernel/mm.py
@@ -71,7 +71,7 @@ try:
 
     triton_version = TorchVersion(triton.__version__)
     has_triton = True
-except ImportError:
+except (ImportError, AttributeError):
     triton_version = TorchVersion("0.0.0")
     has_triton = False
 
