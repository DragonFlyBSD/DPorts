--- tools/install.py.orig	2014-12-22 21:22:32 UTC
+++ tools/install.py
@@ -132,7 +132,7 @@ def files(action):
   if 'true' == variables.get('node_use_dtrace'):
     action(['out/Release/node.d'], 'lib/dtrace/node.d')
 
-  if 'freebsd' in sys.platform or 'openbsd' in sys.platform:
+  if 'freebsd' in sys.platform or 'dragonfly' in sys.platform:
     action(['doc/node.1'], 'man/man1/')
   else:
     action(['doc/node.1'], 'share/man/man1/')
