--- openage/default_dirs.py.intermediate	2019-05-13 14:03:38.000000000 +0000
+++ openage/default_dirs.py
@@ -68,7 +68,7 @@ def get_dir(which):
     elif sys.platform.startswith("win32"):
         platform_table = WINDOWS_DIRS
 
-    elif sys.platform.startswith("freebsd"):
+    elif sys.platform.startswith("freebsd") or sys.platform.startswith("dragonfly"):
     	platform_table = FREEBSD_DIRS
 
     else:
