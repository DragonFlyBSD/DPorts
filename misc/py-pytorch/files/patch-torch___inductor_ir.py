--- torch/_inductor/ir.py.orig	2026-07-08 17:44:38 UTC
+++ torch/_inductor/ir.py
@@ -147,7 +147,7 @@ try:
 
     triton_version = triton.__version__
     has_triton = True
-except ImportError:
+except (ImportError, AttributeError):
     triton_version = None
     has_triton = False
 
