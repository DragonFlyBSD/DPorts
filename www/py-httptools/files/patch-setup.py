--- setup.py.orig	2026-05-25 22:07:13 UTC
+++ setup.py
@@ -44,7 +44,7 @@ class httptools_build_ext(build_ext):
 
         super().initialize_options()
         self.use_system_llhttp = False
-        self.use_system_http_parser = False
+        self.use_system_http_parser = True
         self.cython_always = False
         self.cython_annotate = None
         self.cython_directives = None
