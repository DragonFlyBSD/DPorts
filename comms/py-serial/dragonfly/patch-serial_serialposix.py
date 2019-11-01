--- serial/serialposix.py.orig	2017-07-14 19:49:14 UTC
+++ serial/serialposix.py
@@ -192,7 +192,8 @@ elif plat[:6] == 'darwin':   # OS X
 elif plat[:3] == 'bsd' or \
      plat[:7] == 'freebsd' or \
      plat[:6] == 'netbsd' or \
-     plat[:7] == 'openbsd':
+     plat[:7] == 'openbsd' or \
+     plat[:9] == 'dragonfly':
 
     class ReturnBaudrate(object):
         def __getitem__(self, key):
