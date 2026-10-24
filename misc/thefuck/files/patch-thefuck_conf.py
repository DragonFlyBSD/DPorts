--- thefuck/conf.py.orig	2021-12-19 20:26:39 UTC
+++ thefuck/conf.py
@@ -1,10 +1,20 @@
-from imp import load_source
 import os
 import sys
 from warnings import warn
 from six import text_type
 from . import const
 from .system import Path
+
+try:
+    import importlib.util
+
+    def load_source(name, pathname, _file=None):
+        module_spec = importlib.util.spec_from_file_location(name, pathname)
+        module = importlib.util.module_from_spec(module_spec)
+        module_spec.loader.exec_module(module)
+        return module
+except ImportError:
+    from imp import load_source
 
 
 class Settings(dict):
