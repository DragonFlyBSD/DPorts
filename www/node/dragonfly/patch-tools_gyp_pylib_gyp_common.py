--- tools/gyp/pylib/gyp/common.py.orig	2014-12-22 21:22:32 UTC
+++ tools/gyp/pylib/gyp/common.py
@@ -415,6 +415,8 @@ def GetFlavor(params):
     return 'solaris'
   if sys.platform.startswith('freebsd'):
     return 'freebsd'
+  if sys.platform.startswith('dragon'):
+    return 'freebsd'
   if sys.platform.startswith('openbsd'):
     return 'openbsd'
   if sys.platform.startswith('aix'):
