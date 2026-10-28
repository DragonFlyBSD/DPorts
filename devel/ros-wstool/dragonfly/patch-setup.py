--- setup.py.orig	2026-10-26 02:52:28 UTC
+++ setup.py
@@ -4,7 +4,6 @@ from distutils.command.build_py import build_py
 
 import os
 import sys
-import imp
 import argparse
 
 
@@ -13,15 +12,11 @@ with open('README.rst') as readme_file:
 
 
 def get_version():
-    ver_file = None
-    try:
-        ver_file, pathname, description = imp.find_module('__version__', ['src/wstool'])
-        vermod = imp.load_module('__version__', ver_file, pathname, description)
-        version = vermod.version
-        return version
-    finally:
-        if ver_file is not None:
-            ver_file.close()
+    # the imp module is gone in Python 3.12
+    ns = {}
+    with open(os.path.join('src', 'wstool', '__version__.py')) as ver_file:
+        exec(ver_file.read(), ns)
+    return ns['version']
 
 
 def _resolve_prefix(prefix, type):
