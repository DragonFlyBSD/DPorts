--- tools/gyp/pylib/gyp/common.py.orig	2017-12-12 10:22:53 UTC
+++ tools/gyp/pylib/gyp/common.py
@@ -423,6 +423,8 @@ def GetFlavor(params):
     return 'solaris'
   if sys.platform.startswith('freebsd'):
     return 'freebsd'
+  if sys.platform.startswith('dragon'):
+    return 'freebsd'
   if sys.platform.startswith('openbsd'):
     return 'openbsd'
   if sys.platform.startswith('netbsd'):
