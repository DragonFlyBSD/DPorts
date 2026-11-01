diff --git tools/grit/grit/node/base.py tools/grit/grit/node/base.py
index 468bc8253e9b..7b3280fc0a2e 100644
--- tools/grit/grit/node/base.py
+++ tools/grit/grit/node/base.py
@@ -498,7 +498,7 @@ class Node:
 
       elif name == 'is_linux':
         value = (target_platform == 'linux'
-                 or 'bsd' in target_platform)
+                 or 'bsd' in target_platform or 'dragonfly' in target_platform)
       elif name == 'is_chromeos':
         value = target_platform == 'chromeos'
       elif name == 'is_macosx':
@@ -512,11 +512,12 @@ class Node:
       elif name == 'is_fuchsia':
         value = target_platform == 'fuchsia'
       elif name == 'is_bsd':
-        value = 'bsd' in target_platform
+        value = ('dragonfly' in target_platform or
+                 'bsd' in target_platform)
       elif name == 'is_posix':
         value = (target_platform in ('linux', 'darwin', 'sunos5', 'android',
-                                     'ios', 'chromeos')
-                 or 'bsd' in target_platform)
+                                     'ios', 'chromeos') or
+                 'bsd' in target_platform or 'dragonfly' in target_platform)
 
       elif name == 'pp_ifdef':
         def pp_ifdef(symbol):
