--- setup.py.intermediate	2014-08-03 08:39:36.152065000 +0000
+++ setup.py
@@ -1365,6 +1365,10 @@ class PyBuildExt(build_ext):
             macros = dict()
             libraries = ['ws2_32']
 
+        elif platform.startswith('dragonfly'):
+            macros = dict()
+            libraries = ['pthread']
+
         elif platform == 'darwin':          # Mac OSX
             macros = dict()
             libraries = []
@@ -1421,7 +1425,7 @@ class PyBuildExt(build_ext):
         # Backport Issue: http://bugs.python.org/issue12326
         #############################
         if any(platform.startswith(prefix)
-               for prefix in ("linux", "freebsd", "gnukfreebsd")):
+               for prefix in ("linux", "dragonfly", "freebsd", "gnukfreebsd")):
             exts.append( Extension('ossaudiodev', ['ossaudiodev.c']) )
         else:
             missing.append('ossaudiodev')
