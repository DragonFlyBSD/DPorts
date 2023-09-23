diff --git tools/gn/build/gen.py tools/gn/build/gen.py
index 309ac63298d..9f85204acbb 100755
--- tools/gn/build/gen.py
+++ tools/gn/build/gen.py
@@ -51,6 +51,8 @@ class Platform(object):
       self._platform = 'netbsd'
     elif self._platform.startswith('openbsd'):
       self._platform = 'openbsd'
+    elif self._platform.lower().startswith('dragonfly'):
+      self._platform = 'dragonfly'
     elif self._platform.startswith('haiku'):
       self._platform = 'haiku'
     elif self._platform.startswith('sunos'):
@@ -62,7 +64,7 @@ class Platform(object):
 
   @staticmethod
   def known_platforms():
-    return ['linux', 'darwin', 'mingw', 'msys', 'msvc', 'aix', 'fuchsia', 'freebsd', 'netbsd', 'openbsd', 'haiku', 'solaris', 'zos', 'serenity']
+    return ['linux', 'darwin', 'mingw', 'msys', 'msvc', 'aix', 'fuchsia', 'freebsd', 'netbsd', 'openbsd', 'haiku', 'solaris', 'zos', 'serenity', 'dragonfly']
 
   def platform(self):
     return self._platform
@@ -100,8 +102,11 @@ class Platform(object):
   def is_freebsd(self):
     return self._platform == 'freebsd'
 
+  def is_dragonfly(self):
+    return self._platform == 'dragonfly'
+
   def is_posix(self):
-    return self._platform in ['linux', 'freebsd', 'darwin', 'aix', 'openbsd', 'haiku', 'solaris', 'msys', 'netbsd', 'serenity']
+    return self._platform in ['linux', 'freebsd', 'darwin', 'aix', 'openbsd', 'haiku', 'solaris', 'msys', 'netbsd', 'serenity', 'dragonfly']
 
   def is_zos(self):
     return self._platform == 'zos'
@@ -293,6 +298,7 @@ def WriteGenericNinja(path, static_libraries, executables,
       'darwin': 'build_mac.ninja.template',
       'linux': 'build_linux.ninja.template',
       'freebsd': 'build_linux.ninja.template',
+      'dragonfly': 'build_linux.ninja.template',
       'aix': 'build_aix.ninja.template',
       'openbsd': 'build_linux.ninja.template',
       'haiku': 'build_haiku.ninja.template',
