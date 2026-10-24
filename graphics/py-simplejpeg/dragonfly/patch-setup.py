--- setup.py.orig	2026-10-23 00:00:00 UTC
+++ setup.py
@@ -112,7 +112,7 @@
 
 
 def make_type():
-    if OS in ('linux', 'darwin', 'freebsd'):
+    if OS in ('linux', 'darwin', 'freebsd', 'dragonfly'):
         return 'Unix Makefiles'
     elif OS == 'windows':
         return 'NMake Makefiles'
@@ -196,7 +196,7 @@
 
 
 def _staticlib():
-    if OS in ('linux', 'darwin', 'freebsd'):
+    if OS in ('linux', 'darwin', 'freebsd', 'dragonfly'):
         return 'libturbojpeg.a'
     elif OS == 'windows':
         return 'turbojpeg-static.lib'
