-- Fix setup.py for Python 3.12 compatibility.
-- The 'imp' module was removed in Python 3.12; replace imp.load_source
-- with importlib.util.module_from_spec/spec_from_file_location.

--- setup.py.orig	2023-04-10 00:00:00 UTC
+++ setup.py
@@ -4,7 +4,7 @@ descr = """A Python module for data fusion built on top of factorized models."""
 from setuptools import setup, find_packages
 import subprocess
 import os
-import imp
+import importlib.util

 DISTNAME = 'scikit-fusion'
 DESCRIPTION = 'A Python module for data fusion built on top of factorized models.'
@@ -69,8 +69,11 @@ def write_version_py(filename='skfusion/version.py'):
     elif os.path.exists('skfusion/version.py'):
         # must be a source distribution, use existing version file
-        version = imp.load_source("skfusion.version", "skfusion/version.py")
-        GIT_REVISION = version.git_revision
+        spec = importlib.util.spec_from_file_location("skfusion.version",
+                                                       "skfusion/version.py")
+        version = importlib.util.module_from_spec(spec)
+        spec.loader.exec_module(version)
+        GIT_REVISION = getattr(version, 'git_revision', "Unknown")
     else:
         GIT_REVISION = "Unknown"
