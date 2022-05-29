--- skbuild/platform_specifics/platform_factory.py.orig	2022-02-07 18:51:43 UTC
+++ skbuild/platform_specifics/platform_factory.py
@@ -21,7 +21,7 @@ def get_platform():
         from . import osx
         return osx.OSXPlatform()
 
-    elif this_platform in {"freebsd", "os400", "openbsd"}:
+    elif this_platform in {"freebsd", "os400", "openbsd", "dragonfly"}:
         from . import bsd
         return bsd.BSDPlatform()
 
