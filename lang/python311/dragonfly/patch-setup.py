--- setup.py.orig	2022-07-11 15:25:22 UTC
+++ setup.py
@@ -1176,7 +1176,12 @@ class PyBuildExt(build_ext):
             self.missing.append('_curses_panel')
 
     def detect_crypt(self):
-        self.addext(Extension('_crypt', ['_cryptmodule.c']))
+        if self.compiler.find_library_file(self.lib_dirs, 'crypt'):
+            libs = ['crypt']
+        else:
+            libs = []
+
+        self.addext(Extension('_crypt', ['_cryptmodule.c'], libraries=libs))
 
     def detect_dbm_gdbm(self):
         # Modules that provide persistent dictionary-like semantics.  You will
