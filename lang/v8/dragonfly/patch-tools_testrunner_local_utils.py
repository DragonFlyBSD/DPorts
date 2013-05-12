--- tools/testrunner/local/utils.py.orig	2013-05-01 12:56:30.000000000 +0000
+++ tools/testrunner/local/utils.py
@@ -68,6 +68,8 @@ def GuessOS():
     return 'win32'
   elif system == 'FreeBSD':
     return 'freebsd'
+  elif system == 'DragonFly':
+    return 'freebsd'
   elif system == 'OpenBSD':
     return 'openbsd'
   elif system == 'SunOS':
