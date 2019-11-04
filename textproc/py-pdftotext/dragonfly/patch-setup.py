--- setup.py.orig	2019-08-07 02:41:37 UTC
+++ setup.py
@@ -20,7 +20,7 @@ def poppler_cpp_at_least(version):
 
 
 # On some BSDs, poppler is in /usr/local, which is not searched by default
-if platform.system() in ["Darwin", "FreeBSD", "OpenBSD"]:
+if platform.system() in ["Darwin", "DragonFly", "FreeBSD", "OpenBSD"]:
     include_dirs = ["/usr/local/include"]
     library_dirs = ["/usr/local/lib"]
 else:
