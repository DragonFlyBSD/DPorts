--- setup.py.intermediate	2013-10-30 13:25:18.347948000 +0000
+++ setup.py
@@ -156,7 +156,7 @@ def get_compiler_settings(version_str):
         # What is the proper way to detect iODBC, MyODBC, unixODBC, etc.?
         settings['libraries'].append('odbc')
 
-        if sys.platform.startswith('freebsd'):
+        if sys.platform.startswith('freebsd') or sys.platform.startswith('dragonfly'):
             settings['library_dirs'] = ['/usr/local/lib/']
             settings['include_dirs'] = ['/usr/local/include/']
             freebsd_prefix = '/usr/local'
