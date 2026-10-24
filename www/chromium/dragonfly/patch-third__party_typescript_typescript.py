--- third_party/typescript/typescript.py.orig
+++ third_party/typescript/typescript.py
@@ -21,6 +21,7 @@
     'Linux': ('linux-amd64', 'src', 'lib', 'tsc'),
     'OpenBSD': ('linux-amd64', 'src', 'lib', 'tsc'),
     'FreeBSD': ('linux-amd64', 'src', 'lib', 'tsc'),
+    'DragonFly': ('linux-amd64', 'src', 'lib', 'tsc'),
     'Windows': ('windows-amd64', 'src', 'lib', 'tsc.exe'),
   }[platform.system()]))
 
