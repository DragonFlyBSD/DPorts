--- setup.py.orig	2026-07-12 00:34:51 UTC
+++ setup.py
@@ -0,0 +1,13 @@
+from setuptools import setup, find_packages, Extension
+
+setup(
+    name='mutf8',
+    ext_modules=[
+        Extension(
+            'mutf8.cmutf8',
+            ['mutf8/cmutf8.c'],
+            language='c',
+            optional=True
+        )
+    ]
+)
