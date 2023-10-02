--- setup.py.orig	2023-10-01 13:09:56 UTC
+++ setup.py
@@ -110,6 +110,9 @@ elif platform.system() == "Windows":
 elif platform.system() == "FreeBSD":
     plat = "freebsd"
     compiler = "cc"
+elif platform.system() == "DragonFly":
+    plat = "dragonfly"
+    compiler = "cc"
 else:
     raise NotImplementedError(platform.system())
 
