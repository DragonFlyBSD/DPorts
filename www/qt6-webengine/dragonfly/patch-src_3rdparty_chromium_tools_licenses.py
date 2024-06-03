--- src/3rdparty/chromium/tools/licenses.py.intermediate	2024-01-27 00:43:10 UTC
+++ src/3rdparty/chromium/tools/licenses.py
@@ -582,7 +582,7 @@ def _GnBinary():
   exe = 'gn'
   if sys.platform.startswith('linux'):
     subdir = 'linux64'
-  elif sys.platform.startswith('freebsd'):
+  elif sys.platform.startswith('freebsd') or sys.platform.startswith('dragonfly'):
     subdir = '../../../../.build/install/bin'
   elif sys.platform == 'darwin':
     subdir = 'mac'
