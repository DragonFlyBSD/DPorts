--- setup.py.orig	2019-08-07 18:06:42 UTC
+++ setup.py
@@ -1,20 +1,15 @@
 from setuptools import setup
 
-import imp
+import importlib.util
 
 with open('README.rst') as readme_file:
     README = readme_file.read()
 
 def get_version():
-    ver_file = None
-    try:
-        ver_file, pathname, description = imp.find_module('__version__', ['src/vcstools'])
-        vermod = imp.load_module('__version__', ver_file, pathname, description)
-        version = vermod.version
-        return version
-    finally:
-        if ver_file is not None:
-            ver_file.close()
+    spec = importlib.util.spec_from_file_location('__version__', 'src/vcstools/__version__.py')
+    vermod = importlib.util.module_from_spec(spec)
+    spec.loader.exec_module(vermod)
+    return vermod.version
 
 test_required = [
     "nose",
