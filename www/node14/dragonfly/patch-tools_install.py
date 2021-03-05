--- tools/install.py.intermediate	2021-03-05 11:45:19.000000000 +0000
+++ tools/install.py
@@ -147,7 +147,7 @@ def files(action):
   action(['deps/v8/tools/gdbinit'], 'share/doc/node/')
   action(['deps/v8/tools/lldb_commands.py'], 'share/doc/node/')
 
-  if 'freebsd' in sys.platform or 'openbsd' in sys.platform:
+  if 'freebsd' in sys.platform or 'openbsd' or 'dragonfly' in sys.platform:
     action(['doc/node.1'], 'man/man1/')
   else:
     action(['doc/node.1'], 'share/man/man1/')
