--- src/3rdparty/chromium/tools/grit/grit/node/base.py.orig	2018-04-10 14:05:55.000000000 +0000
+++ src/3rdparty/chromium/tools/grit/grit/node/base.py
@@ -473,11 +473,11 @@ class Node(object):
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
