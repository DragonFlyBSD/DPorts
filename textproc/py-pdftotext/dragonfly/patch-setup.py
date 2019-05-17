--- setup.py.orig	2018-10-07 19:46:45 UTC
+++ setup.py
@@ -20,7 +20,7 @@ def poppler_cpp_at_least(version):
 
 
 # On some BSDs, poppler is in /usr/local, which is not searched by default
-if platform.system() in ["FreeBSD", "OpenBSD"]:
+if platform.system() in ["FreeBSD", "OpenBSD", "DragonFly"]:
     include_dirs = ["/usr/local/include"]
 else:
     include_dirs = None
