--- setup.py.intermediate	2014-06-28 07:44:16.389272000 +0000
+++ setup.py
@@ -1375,6 +1375,10 @@ class PyBuildExt(build_ext):
             macros = dict()
             libraries = []
 
+        elif platform.startswith('dragonfly'):
+            macros = dict()
+            libraries = ['pthread']
+
         elif platform in ('freebsd7', 'freebsd8', 'freebsd9', 'freebsd10'):
             # FreeBSD's P1003.1b semaphore support is very experimental
             # and has many known problems. (as of June 2008)
@@ -1423,7 +1427,7 @@ class PyBuildExt(build_ext):
         # Backport Issue: http://bugs.python.org/issue12326
         #############################
         if any(platform.startswith(prefix)
-               for prefix in ("linux", "freebsd", "gnukfreebsd")):
+               for prefix in ("linux", "dragonfly", "freebsd", "gnukfreebsd")):
             exts.append( Extension('ossaudiodev', ['ossaudiodev.c']) )
         else:
             missing.append('ossaudiodev')
