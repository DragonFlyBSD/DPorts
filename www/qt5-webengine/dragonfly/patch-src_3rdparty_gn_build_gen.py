--- src/3rdparty/gn/build/gen.py.orig	2019-12-19 23:26:04 UTC
+++ src/3rdparty/gn/build/gen.py
@@ -41,10 +41,13 @@ class Platform(object):
       self._platform = 'fuchsia'
     elif self._platform.startswith('freebsd'):
       self._platform = 'freebsd'
+    elif self._platform.lower().startswith('dragonfly'):
+      self._platform = 'dragonfly'
+
 
   @staticmethod
   def known_platforms():
-    return ['linux', 'darwin', 'msvc', 'aix', 'fuchsia', 'freebsd']
+    return ['linux', 'darwin', 'msvc', 'aix', 'fuchsia', 'freebsd', 'dragonfly']
 
   def platform(self):
     return self._platform
@@ -70,8 +73,11 @@ class Platform(object):
   def is_freebsd(self):
     return self._platform == 'freebsd'
 
+  def is_dragonfly(self):
+    return self._platform == 'dragonfly'
+
   def is_posix(self):
-    return self._platform in ['linux', 'freebsd', 'darwin', 'aix']
+    return self._platform in ['linux', 'freebsd', 'darwin', 'aix', 'dragonfly']
 
 
 def main(argv):
@@ -185,6 +191,7 @@ def WriteGenericNinja(path, static_libra
       'darwin': 'build_mac.ninja.template',
       'linux': 'build_linux.ninja.template',
       'freebsd': 'build_linux.ninja.template',
+      'dragonfly': 'build_linux.ninja.template',
       'aix': 'build_aix.ninja.template',
   }[platform.platform()])
 
@@ -370,13 +377,17 @@ def WriteGNNinja(path, platform, host, o
       ldflags.extend(['-pthread'])
       libs.extend(['-lexecinfo', '-lkvm', '-lutil'])
       include_dirs += ['/usr/local/include']
+    elif platform.is_dragonfly():
+      ldflags.extend(['-pthread'])
+      libs.extend(['-lexecinfo', '-lkvm', '-lutil'])
+      include_dirs += ['/usr/local/include']
 
     if platform.is_posix():
       ldflags.append('-pthread')
 
     if options.use_lto:
-      cflags.extend(['-flto', '-fwhole-program-vtables'])
-      ldflags.extend(['-flto', '-fwhole-program-vtables'])
+      cflags.extend(['-flto'])
+      ldflags.extend(['-flto'])
 
   elif platform.is_msvc():
     if not options.debug:
