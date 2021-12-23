--- setup.py.orig	2021-04-06 11:17:33 UTC
+++ setup.py
@@ -37,7 +37,7 @@ if OS not in ['Windows', 'Darwin']:
     if OS == 'Linux':
         DIST, DIST_VERSION, DIST_NAME = get_distro()
     # platform.dist() returns "('', '', '')" on FreeBSD
-    elif OS == 'FreeBSD':
+    elif OS == 'FreeBSD' or OS == 'DragonFly':
         DIST, DIST_VERSION, DIST_NAME = ('', '', '')
     else:
         DIST, DIST_VERSION, DIST_NAME = platform.dist()
