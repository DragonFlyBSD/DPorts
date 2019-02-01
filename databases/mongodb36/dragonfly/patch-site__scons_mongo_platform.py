--- site_scons/mongo/platform.py.orig	2019-01-31 18:28:54 UTC
+++ site_scons/mongo/platform.py
@@ -20,6 +20,8 @@ def get_running_os_name():
     running_os = os.sys.platform
     if running_os.startswith('linux'):
         running_os = 'linux'
+    elif running_os.startswith('dragonfly'):
+        running_os = 'dragonfly'
     elif running_os.startswith('freebsd'):
         running_os = 'freebsd'
     elif running_os.startswith('openbsd'):
