--- src/3rdparty/gn/build/gen.py.intermediate	2019-05-06 11:25:32.000000000 +0000
+++ src/3rdparty/gn/build/gen.py
@@ -43,6 +43,8 @@ class Platform(object):
       self._platform = 'fuchsia'
     elif self._platform.lower().startswith('freebsd'):
       self._platform = 'bsd'
+    elif self._platform.lower().startswith('dragonfly'):
+      self._platform = 'bsd'
 
   @staticmethod
   def known_platforms():
@@ -395,14 +397,13 @@ def WriteGNNinja(path, platform, host, o
       cflags_cc.append('-maix64')
       ldflags.extend(['-maix64', '-pthread'])
     elif platform.is_bsd():
-      cflags.extend(['-Wno-deprecated-register', '-Wno-parentheses-equality'])
       ldflags.extend(['-pthread'])
       libs.extend(['-lexecinfo', '-lkvm'])
       include_dirs += ['/usr/local/include']
 
     if options.use_lto:
-      cflags.extend(['-flto', '-fwhole-program-vtables'])
-      ldflags.extend(['-flto', '-fwhole-program-vtables'])
+      cflags.extend(['-flto'])
+      ldflags.extend(['-flto'])
 
   elif platform.is_msvc():
     if not options.debug:
