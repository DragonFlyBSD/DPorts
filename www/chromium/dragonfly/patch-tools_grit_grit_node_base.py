--- tools/grit/grit/node/base.py.orig
+++ tools/grit/grit/node/base.py
@@ -512,7 +512,7 @@
 
       elif name == 'is_linux':
         value = (target_platform == 'linux'
-                 or 'bsd' in target_platform)
+                 or 'bsd' in target_platform or 'dragonfly' in target_platform)
       elif name == 'is_chromeos':
         value = target_platform == 'chromeos'
       elif name == 'is_macosx':
@@ -526,12 +526,13 @@
       elif name == 'is_fuchsia':
         value = target_platform == 'fuchsia'
       elif name == 'is_bsd':
-        value = 'bsd' in target_platform
+        value = ('dragonfly' in target_platform or
+                 'bsd' in target_platform)
       elif name == 'is_posix':
         value = (
           target_platform
           in ('linux', 'darwin', 'sunos5', 'android', 'ios', 'chromeos')
-          or 'bsd' in target_platform
+          or 'bsd' in target_platform or 'dragonfly' in target_platform
         )
 
       elif name == 'pp_ifdef':
