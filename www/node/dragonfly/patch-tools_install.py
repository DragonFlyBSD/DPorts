--- tools/install.py.orig	2013-02-25 21:07:25.000000000 +0000
+++ tools/install.py
@@ -203,7 +203,7 @@ def files(action):
   # with dtrace support now (oracle's "unbreakable" linux)
   action(['src/node.d'], 'lib/dtrace/')
 
-  if 'freebsd' in sys.platform or 'openbsd' in sys.platform:
+  if 'freebsd' in sys.platform or 'dragonfly' in sys.platform:
     action(['doc/node.1'], 'man/man1/')
   else:
     action(['doc/node.1'], 'share/man/man1/')
