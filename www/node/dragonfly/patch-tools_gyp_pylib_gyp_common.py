--- tools/gyp/pylib/gyp/common.py.orig	2013-02-25 21:07:25.000000000 +0000
+++ tools/gyp/pylib/gyp/common.py
@@ -369,6 +369,8 @@ def GetFlavor(params):
     return flavors[sys.platform]
   if sys.platform.startswith('sunos'):
     return 'solaris'
+  if sys.platform.startswith('dragonfly'):
+    return 'freebsd'
   if sys.platform.startswith('freebsd'):
     return 'freebsd'
 
