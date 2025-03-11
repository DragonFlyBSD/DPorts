diff --git tools/grit/grit/node/base.py tools/grit/grit/node/base.py
index 5923e3f6a8ef..93eff15b1c43 100644
--- tools/grit/grit/node/base.py
+++ tools/grit/grit/node/base.py
@@ -513,11 +513,12 @@ class Node:
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
