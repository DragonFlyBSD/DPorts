--- setup.py.orig	2022-01-09 17:33:10 UTC
+++ setup.py
@@ -22,7 +22,7 @@ lib_talib_name = 'ta_lib'  # the underly
 
 platform_supported = False
 
-if any(s in sys.platform for s in ['darwin', 'linux', 'bsd', 'sunos']):
+if any(s in sys.platform for s in ['darwin', 'linux', 'dragonfly', 'bsd', 'sunos']):
     platform_supported = True
     include_dirs = [
         '/usr/include',
