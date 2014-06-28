--- setup.py.intermediate	2014-06-28 08:33:42.225278000 +0000
+++ setup.py
@@ -1465,6 +1465,10 @@ class PyBuildExt(build_ext):
             macros = dict()
             libraries = []
 
+        elif host_platform.startswith('dragonfly'):
+            macros = dict()
+            libraries = []
+
         elif host_platform in ('freebsd7', 'freebsd8', 'freebsd9', 'freebsd10', 'freebsd11'):
             # FreeBSD's P1003.1b semaphore support is very experimental
             # and has many known problems. (as of June 2008)
@@ -1504,7 +1508,7 @@ class PyBuildExt(build_ext):
         # End multiprocessing
 
         # Platform-specific libraries
-        if host_platform.startswith(('linux', 'freebsd', 'gnukfreebsd')):
+        if host_platform.startswith(('linux', 'dragonfly', 'freebsd', 'gnukfreebsd')):
             exts.append( Extension('ossaudiodev', ['ossaudiodev.c']) )
         else:
             missing.append('ossaudiodev')
