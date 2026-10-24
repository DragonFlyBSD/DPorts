--- cliapp/pluginmgr.py.orig	2018-08-12 12:22:03 UTC
+++ cliapp/pluginmgr.py
@@ -26,9 +26,10 @@
 '''
 
 
-import imp
+import importlib.util
 import inspect
 import os
+import sys
 
 
 from cliapp import Plugin
@@ -127,10 +128,10 @@
         '''Return plugin classes in a plugin file.'''
 
         name, _ = os.path.splitext(os.path.basename(pathname))
-        f = open(pathname, 'r')
-        module = imp.load_module(name, f, pathname,
-                                 ('.py', 'r', imp.PY_SOURCE))
-        f.close()
+        spec = importlib.util.spec_from_file_location(name, pathname)
+        module = importlib.util.module_from_spec(spec)
+        sys.modules[name] = module
+        spec.loader.exec_module(module)
 
         plugins = []
         for dummy, member in inspect.getmembers(module, inspect.isclass):
