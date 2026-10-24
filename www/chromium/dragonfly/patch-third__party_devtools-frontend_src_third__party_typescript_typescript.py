--- third_party/devtools-frontend/src/third_party/typescript/typescript.py.orig
+++ third_party/devtools-frontend/src/third_party/typescript/typescript.py
@@ -10,7 +10,7 @@
 
 
 def GetBinaryPath():
-    if platform.system() in ['OpenBSD', 'FreeBSD']:
+    if platform.system() in ['OpenBSD', 'FreeBSD', 'DragonFly']:
         return "tsc"
 
     if platform.machine() == 'arm64':
