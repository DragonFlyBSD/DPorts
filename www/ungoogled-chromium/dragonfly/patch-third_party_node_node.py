diff --git third_party/node/node.py third_party/node/node.py
index cb330c2d2ba..47154fe513a 100755
--- third_party/node/node.py
+++ third_party/node/node.py
@@ -18,6 +18,7 @@ def GetBinaryPath():
     'Linux': ('linux', 'node-linux-x64', 'bin', 'node'),
     'OpenBSD': ('openbsd', 'node-openbsd', 'bin', 'node'),
     'FreeBSD': ('freebsd', 'node-freebsd', 'bin', 'node'),
+    'DragonFly': ('dragonfly', 'node-dragonfly', 'bin', 'node'),
     'Windows': ('win', 'node.exe'),
   }[platform.system()])
 
