--- src/3rdparty/chromium/tools/licenses/licenses.py.intermediate	2024-06-09 12:51:37 UTC
+++ src/3rdparty/chromium/tools/licenses/licenses.py
@@ -618,7 +618,7 @@ def _GnBinary():
   exe = 'gn'
   if sys.platform.startswith('linux'):
     subdir = 'linux64'
-  elif sys.platform.startswith('freebsd'):
+  elif sys.platform.startswith('freebsd') or sys.platform.startswith('dragonfly'):
     subdir = '../../../../.build/install/bin'
   elif sys.platform == 'darwin':
     subdir = 'mac'
