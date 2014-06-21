--- setup.py.orig	2014-06-05 21:43:04.000000000 +0000
+++ setup.py
@@ -53,6 +53,8 @@ LIBRARIES = {
 platform = sys.platform
 if platform.startswith('linux'):
     platform = 'linux'
+elif platform.startswith('dragonfly'):
+    platform = 'freebsd'
 elif platform.startswith('freebsd'):
     platform = 'freebsd'
 
