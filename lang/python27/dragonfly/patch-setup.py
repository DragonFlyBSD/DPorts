--- setup.py.intermediate	2014-01-26 22:06:26.000000000 +0000
+++ setup.py
@@ -1600,7 +1600,7 @@ class PyBuildExt(build_ext):
         else:
             missing.append('linuxaudiodev')
 
-        if (host_platform in ('linux2', 'freebsd4', 'freebsd5', 'freebsd6',
+        if (host_platform in ('linux2', 'dragonfly3',
                         'freebsd7', 'freebsd8', 'freebsd9', 'freebsd10', 'freebsd11')
             or host_platform.startswith("gnukfreebsd")):
             exts.append( Extension('ossaudiodev', ['ossaudiodev.c']) )
