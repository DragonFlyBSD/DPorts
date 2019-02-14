--- ffi/build.py.orig	2018-09-21 19:31:30 UTC
+++ ffi/build.py
@@ -155,7 +155,7 @@ def main():
         main_win32()
     elif sys.platform.startswith('linux'):
         main_posix('linux', '.so')
-    elif sys.platform.startswith(('freebsd','openbsd')):
+    elif sys.platform.startswith(('freebsd','openbsd', 'dragonfly')):
         main_posix('freebsd', '.so')
     elif sys.platform == 'darwin':
         main_posix('osx', '.dylib')
