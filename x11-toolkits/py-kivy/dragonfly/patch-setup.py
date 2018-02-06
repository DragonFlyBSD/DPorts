--- setup.py.orig	2015-12-31 23:39:28 UTC
+++ setup.py
@@ -520,7 +520,7 @@ def determine_base_flags():
         flags['include_dirs'] += [sysroot]
         flags['extra_compile_args'] += ['-isysroot', sysroot]
         flags['extra_link_args'] += ['-isysroot', sysroot]
-    elif platform.startswith('freebsd'):
+    elif platform.startswith('freebsd') or platform.startswith('dragonfly'):
         flags['include_dirs'] += [join(
             environ.get('LOCALBASE', '/usr/local'), 'include')]
         flags['extra_link_args'] += ['-L', join(
