--- setup.py.orig	2014-06-28 08:44:47.215418000 +0000
+++ setup.py
@@ -1486,6 +1486,10 @@ class PyBuildExt(build_ext):
             macros = dict()
             libraries = []
 
+        elif host_platform.startswith('dragonfly'):
+            macros = dict()
+            libraries = ['pthread']
+
         elif host_platform in ('freebsd4', 'freebsd5', 'freebsd6', 'freebsd7', 'freebsd8'):
             # FreeBSD's P1003.1b semaphore support is very experimental
             # and has many known problems. (as of June 2008)
@@ -1525,7 +1529,7 @@ class PyBuildExt(build_ext):
         # End multiprocessing
 
         # Platform-specific libraries
-        if host_platform.startswith(('linux', 'freebsd', 'gnukfreebsd')):
+        if host_platform.startswith(('linux', 'dragonfly', 'freebsd', 'gnukfreebsd')):
             exts.append( Extension('ossaudiodev', ['ossaudiodev.c']) )
         else:
             missing.append('ossaudiodev')
