--- ffi/build.py.orig	2026-09-13 11:33:11 UTC
+++ ffi/build.py
@@ -219,7 +219,8 @@ def main_posix(library_ext):
 
 
 def main():
-    ELF_systems = ('linux', 'gnu', 'freebsd', 'openbsd', 'netbsd')
+    ELF_systems = ('linux', 'gnu', 'freebsd', 'openbsd', 'netbsd',
+                   'dragonfly')
     if sys.platform == 'win32':
         main_windows()
     elif sys.platform.startswith(ELF_systems):
