--- setup.py.intermediate	2014-01-26 22:48:18.000000000 +0000
+++ setup.py
@@ -1353,7 +1353,7 @@ class PyBuildExt(build_ext):
         # Backport Issue: http://bugs.python.org/issue12326
         #############################
         if any(platform.startswith(prefix)
-               for prefix in ("linux", "freebsd", "gnukfreebsd")):
+               for prefix in ("linux", "dragonfly", "freebsd", "gnukfreebsd")):
             exts.append( Extension('ossaudiodev', ['ossaudiodev.c']) )
         else:
             missing.append('ossaudiodev')
