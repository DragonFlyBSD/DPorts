--- src/3rdparty/chromium/tools/grit/grit/node/base.py.intermediate	2026-09-17 10:33:48 UTC
+++ src/3rdparty/chromium/tools/grit/grit/node/base.py
@@ -491,8 +491,9 @@ class Node:
         value = defs
 
       elif name == 'is_linux':
-        value = (target_platform == 'linux'
-                 or 'bsd' in target_platform)
+        value = (target_platform == 'linux' or
+                 'dragonfly' in target_platform or
+                 'bsd' in target_platform)
       elif name == 'is_chromeos':
         value = target_platform == 'chromeos'
       elif name == 'is_macosx':
@@ -506,11 +507,12 @@ class Node:
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
