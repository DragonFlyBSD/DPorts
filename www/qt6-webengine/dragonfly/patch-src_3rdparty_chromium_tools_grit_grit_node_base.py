diff --git tools/grit/grit/node/base.py tools/grit/grit/node/base.py
index 8f787d882dc..b139f3996f7 100644
--- src/3rdparty/chromium/tools/grit/grit/node/base.py
+++ src/3rdparty/chromium/tools/grit/grit/node/base.py
@@ -522,11 +522,12 @@ class Node(object):
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
