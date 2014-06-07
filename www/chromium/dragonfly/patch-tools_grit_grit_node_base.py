--- tools/grit/grit/node/base.py.orig	2014-05-14 19:24:30.000000000 +0000
+++ tools/grit/grit/node/base.py
@@ -473,10 +473,11 @@ class Node(object):
       elif name == 'is_ios':
         value = target_platform == 'ios'
       elif name == 'is_bsd':
-        value = 'bsd' in target_platform
+        value = (target_platform.startswith('dragonfly') or 'bsd' in target_platform)
       elif name == 'is_posix':
         value = (target_platform in ('darwin', 'linux2', 'linux3', 'sunos5',
                                      'android', 'ios')
+                 or target_platform.startswith('dragonfly')
                  or 'bsd' in target_platform)
 
       elif name == 'pp_ifdef':
