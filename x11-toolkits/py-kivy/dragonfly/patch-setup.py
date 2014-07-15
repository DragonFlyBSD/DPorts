--- setup.py.intermediate	2014-07-15 15:03:46.753455000 +0000
+++ setup.py
@@ -283,7 +283,7 @@ def determine_base_flags():
                        'ApplicationServices.framework/Frameworks')
         flags['extra_compile_args'] += ['-F%s' % sysroot]
         flags['extra_link_args'] += ['-F%s' % sysroot]
-    elif platform.startswith('freebsd'):
+    elif platform.startswith('freebsd') or platform.startswith('dragonfly'):
         flags['include_dirs'] += [join(environ.get('LOCALBASE', '/usr/local'), 'include')]
         flags['extra_link_args'] += ['-L', join(environ.get('LOCALBASE', '/usr/local'), 'lib')]
     return flags
