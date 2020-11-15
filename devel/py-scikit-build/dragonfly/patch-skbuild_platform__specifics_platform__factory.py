--- skbuild/platform_specifics/platform_factory.py.orig	2020-05-07 08:30:32 UTC
+++ skbuild/platform_specifics/platform_factory.py
@@ -17,7 +17,7 @@ def get_platform():
         from . import linux
         return linux.LinuxPlatform()
 
-    elif this_platform == "freebsd":
+    elif this_platform == "freebsd" or this_platform == "dragonfly":
         from . import bsd
         return bsd.BSDPlatform()
 
