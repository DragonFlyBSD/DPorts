--- build/gen.py.intermediate	2019-05-27 16:42:32.000000000 +0000
+++ build/gen.py
@@ -39,7 +39,7 @@ class Platform(object):
       self._platform = 'aix'
     elif self._platform.startswith('fuchsia'):
       self._platform = 'fuchsia'
-    elif self._platform.startswith('freebsd'):
+    elif self._platform.startswith('freebsd') or self._platform.lower().startswith('dragonfly'):
       self._platform = 'freebsd'
 
   @staticmethod
