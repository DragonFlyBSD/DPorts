--- skbuild/platform_specifics/platform_factory.py.orig	Sun Feb  2 00:00:00 2020
+++ skbuild/platform_specifics/platform_factory.py	Sun Nov
@@ -35,7 +35,7 @@ def get_platform() -> abstract.CMakePlatform:
 
         return osx.OSXPlatform()
 
-    if this_platform in {"freebsd", "netbsd", "os400", "openbsd"}:
+    if this_platform in {"freebsd", "netbsd", "os400", "openbsd", "dragonfly"}:
         from . import bsd
 
         return bsd.BSDPlatform()
