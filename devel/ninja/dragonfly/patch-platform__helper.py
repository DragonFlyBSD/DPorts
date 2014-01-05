--- platform_helper.py.orig	2013-09-12 02:15:28.000000000 +0000
+++ platform_helper.py
@@ -29,6 +29,8 @@ class Platform( object ):
         self._platform = sys.platform
         if self._platform.startswith('linux'):
             self._platform = 'linux'
+        elif self._platform.startswith('dragonfly'):
+            self._platform = 'freebsd'
         elif self._platform.startswith('freebsd'):
             self._platform = 'freebsd'
         elif self._platform.startswith('gnukfreebsd8'):
