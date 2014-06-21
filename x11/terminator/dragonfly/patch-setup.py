--- setup.py.orig	2013-03-26 18:07:25.000000000 +0000
+++ setup.py
@@ -150,7 +150,7 @@ class InstallData(install_data):
     return data_files
 
 
-if platform.system() in ['FreeBSD', 'OpenBSD']:
+if platform.system() in ['FreeBSD', 'OpenBSD', 'DragonFly']:
   man_dir = 'man'
 else:
   man_dir = 'share/man'
