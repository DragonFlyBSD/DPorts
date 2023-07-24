--- site_scons/mongo/platform.py.orig	2022-11-01 18:21:44 UTC
+++ site_scons/mongo/platform.py
@@ -22,6 +22,8 @@ def get_running_os_name():
         running_os = 'linux'
     elif running_os.startswith('freebsd'):
         running_os = 'freebsd'
+    elif running_os.startswith('dragonfly'):
+        running_os = 'dragonfly'
     elif running_os.startswith('openbsd'):
         running_os = 'openbsd'
     elif running_os == 'sunos5':
@@ -42,7 +44,7 @@ def env_get_os_name_wrapper(self):
 def is_os_raw(target_os, os_list_to_check):
     darwin_os_list = ['macOS', 'tvOS', 'tvOS-sim', 'iOS', 'iOS-sim', 'watchOS', 'watchOS-sim']
     linux_os_list = ['android', 'linux']
-    posix_os_list = ['openbsd', 'freebsd', 'solaris', 'emscripten'] + darwin_os_list + linux_os_list
+    posix_os_list = ['openbsd', 'freebsd', 'dragonfly', 'solaris', 'emscripten'] + darwin_os_list + linux_os_list
 
     os_families = {
         "darwin": darwin_os_list,
