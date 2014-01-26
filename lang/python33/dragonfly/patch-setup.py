--- setup.py.intermediate	2014-01-26 22:34:35.000000000 +0000
+++ setup.py
@@ -1504,7 +1504,7 @@ class PyBuildExt(build_ext):
         # End multiprocessing
 
         # Platform-specific libraries
-        if host_platform.startswith(('linux', 'freebsd', 'gnukfreebsd')):
+        if host_platform.startswith(('linux', 'dragonfly', 'freebsd', 'gnukfreebsd')):
             exts.append( Extension('ossaudiodev', ['ossaudiodev.c']) )
         else:
             missing.append('ossaudiodev')
