--- Lib/multiprocessing/__init__.py.orig	2014-06-30 02:05:29 UTC
+++ Lib/multiprocessing/__init__.py
@@ -115,7 +115,7 @@ def cpu_count():
             num = int(os.environ['NUMBER_OF_PROCESSORS'])
         except (ValueError, KeyError):
             num = 0
-    elif 'bsd' in sys.platform or sys.platform == 'darwin':
+    elif 'bsd' in sys.platform or sys.platform.startswith('dragonfly'):
         comm = '/sbin/sysctl -n hw.ncpu'
         if sys.platform == 'darwin':
             comm = '/usr' + comm
