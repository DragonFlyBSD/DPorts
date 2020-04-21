--- src/3rdparty/gn/build/gen.py.orig	2020-04-21 11:54:35 UTC
+++ src/3rdparty/gn/build/gen.py
@@ -43,10 +43,13 @@ class Platform(object):
       self._platform = 'freebsd'
     elif self._platform.startswith('openbsd'):
       self._platform = 'openbsd'
+    elif self._platform.lower().startswith('dragonfly'):
+      self._platform = 'dragonfly'
+      
 
   @staticmethod
   def known_platforms():
-    return ['linux', 'darwin', 'msvc', 'aix', 'fuchsia', 'openbsd', 'freebsd']
+    return ['linux', 'darwin', 'msvc', 'aix', 'fuchsia', 'openbsd', 'freebsd', 'dragonfly']
 
   def platform(self):
     return self._platform
@@ -72,8 +75,11 @@ class Platform(object):
   def is_freebsd(self):
     return self._platform == 'freebsd'
 
+  def is_dragonfly(self):
+    return self._platform == 'dragonfly'
+
   def is_posix(self):
-    return self._platform in ['linux', 'freebsd', 'darwin', 'aix', 'openbsd']
+    return self._platform in ['linux', 'freebsd', 'darwin', 'aix', 'openbsd', 'dragonfly']
 
 
 def main(argv):
@@ -187,6 +193,7 @@ def WriteGenericNinja(path, static_libra
       'darwin': 'build_mac.ninja.template',
       'linux': 'build_linux.ninja.template',
       'freebsd': 'build_linux.ninja.template',
+      'dragonfly': 'build_linux.ninja.template',
       'aix': 'build_aix.ninja.template',
       'openbsd': 'build_openbsd.ninja.template',
   }[platform.platform()])
@@ -372,13 +379,17 @@ def WriteGNNinja(path, platform, host, o
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
