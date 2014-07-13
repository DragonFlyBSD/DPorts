--- setup.py.intermediate	2014-01-30 14:00:56.179431000 +0000
+++ setup.py
@@ -1549,6 +1549,10 @@ class PyBuildExt(build_ext):
             macros = dict()
             libraries = []
 
+        elif host_platform.startswith('dragonfly'):
+            macros = dict()
+            libraries = ['pthread']
+
         elif host_platform in ('freebsd4', 'freebsd5', 'freebsd6', 'freebsd7', 'freebsd8', 'freebsd9', 'freebsd10', 'freebsd11'):
             # FreeBSD's P1003.1b semaphore support is very experimental
             # and has many known problems. (as of June 2008)
@@ -1600,8 +1604,9 @@ class PyBuildExt(build_ext):
         else:
             missing.append('linuxaudiodev')
 
-        if (host_platform in ('linux2', 'freebsd4', 'freebsd5', 'freebsd6',
-                        'freebsd7', 'freebsd8', 'freebsd9', 'freebsd10', 'freebsd11')
+        if (host_platform in ('linux2')
+            or host_platform.startswith("freebsd")
+            or host_platform.startswith("dragonfly")
             or host_platform.startswith("gnukfreebsd")):
             exts.append( Extension('ossaudiodev', ['ossaudiodev.c']) )
         else:
