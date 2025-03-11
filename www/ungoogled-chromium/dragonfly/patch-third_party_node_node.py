diff --git third_party/node/node.py third_party/node/node.py
index 17a7633dbc5b..00593cc639d1 100755
--- third_party/node/node.py
+++ third_party/node/node.py
@@ -22,6 +22,7 @@ def GetBinaryPath():
     'Linux': ('linux', 'node-linux-x64', 'bin', 'node'),
     'OpenBSD': ('openbsd', 'node-openbsd', 'bin', 'node'),
     'FreeBSD': ('freebsd', 'node-freebsd', 'bin', 'node'),
+    'DragonFly': ('dragonfly', 'node-dragonfly', 'bin', 'node'),
     'Windows': ('win', 'node.exe'),
   }[platform.system()])
 
