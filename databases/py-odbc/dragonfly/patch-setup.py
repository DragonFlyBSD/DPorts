--- setup.py.orig	2016-06-01 23:18:54 UTC
+++ setup.py
@@ -187,7 +187,7 @@ def get_compiler_settings(version_str):
         # What is the proper way to detect iODBC, MyODBC, unixODBC, etc.?
         settings['libraries'].append('odbc')
 
-	if sys.platform.startswith('freebsd'):
+        if sys.platform.startswith('freebsd') or sys.platform.startswith('dragonfly'):
 	    settings['library_dirs'] = ['/usr/local/lib/']
 	    settings['include_dirs'] = ['/usr/local/include/']
 	    freebsd_prefix = '/usr/local'
