--- tools/gyp/pylib/gyp/common.py.orig	2019-08-15 19:20:13 UTC
+++ tools/gyp/pylib/gyp/common.py
@@ -421,7 +421,7 @@ def GetFlavor(params):
     return flavors[sys.platform]
   if sys.platform.startswith('sunos'):
     return 'solaris'
-  if sys.platform.startswith('freebsd'):
+  if sys.platform.startswith('freebsd') or sys.platform.startswith('dragonfly'):
     return 'freebsd'
   if sys.platform.startswith('openbsd'):
     return 'openbsd'
