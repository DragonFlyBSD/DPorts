--- setup.py.orig	2015-06-04 18:34:41.000000000 +0300
+++ setup.py
@@ -25,7 +25,7 @@ if sys.version_info < (2, 4):
     sys.exit(1)
 
 # check linux platform
-if not platform.startswith('linux') and not platform.startswith('freebsd'):
+if not platform.startswith('linux') and not platform.startswith('freebsd') and not platform.startswith('dragonfly'):
     sys.stderr.write("inotify is not available on %s\n" % platform)
     sys.exit(1)
 
@@ -71,7 +71,7 @@ def should_compile_ext_mod():
         return True
 
     try_libc_name = 'c'
-    if platform.startswith('freebsd'):
+    if platform.startswith('freebsd') or platform.startswith('dragonfly'):
         try_libc_name = 'inotify'
 
     libc_name = None
