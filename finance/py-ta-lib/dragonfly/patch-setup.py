--- setup.py.orig	2018-01-17 21:44:53 UTC
+++ setup.py
@@ -25,7 +25,7 @@ lib_talib_name = 'ta_lib'  # the underly
 runtime_lib_dirs = []
 
 platform_supported = False
-for prefix in ['darwin', 'linux', 'bsd', 'sunos']:
+for prefix in ['darwin', 'linux', 'dragonfly', 'bsd', 'sunos']:
     if prefix in sys.platform:
         platform_supported = True
         include_dirs = [
