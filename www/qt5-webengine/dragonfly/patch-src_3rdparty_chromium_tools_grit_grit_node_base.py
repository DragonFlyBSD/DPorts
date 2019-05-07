--- src/3rdparty/chromium/tools/grit/grit/node/base.py.orig	2019-03-07 09:23:57 UTC
+++ src/3rdparty/chromium/tools/grit/grit/node/base.py
@@ -476,11 +476,11 @@ class Node(object):
       elif name == 'is_ios':
         value = target_platform == 'ios'
       elif name == 'is_bsd':
-        value = 'bsd' in target_platform
+        value = 'bsd' in target_platform or 'dragonfly' in target_platform
       elif name == 'is_posix':
         value = (target_platform in ('darwin', 'linux2', 'linux3', 'sunos5',
                                      'android', 'ios')
-                 or 'bsd' in target_platform)
+                 or 'bsd' in target_platform or 'dragonfly' in target_platform)
 
       elif name == 'pp_ifdef':
         def pp_ifdef(symbol):
