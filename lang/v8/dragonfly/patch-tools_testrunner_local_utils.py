--- tools/testrunner/local/utils.py.orig	2020-11-11 06:36:03 UTC
+++ tools/testrunner/local/utils.py
@@ -84,6 +84,8 @@ def GuessOS():
     return 'windows'
   elif system == 'FreeBSD':
     return 'freebsd'
+  elif system == 'DragonFly':
+    return 'dragonfly'
   elif system == 'OpenBSD':
     return 'openbsd'
   elif system == 'SunOS':
