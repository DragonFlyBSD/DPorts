--- skbuild/platform_specifics/platform_factory.py.orig	2022-04-07 21:06:30 UTC
+++ skbuild/platform_specifics/platform_factory.py
@@ -26,7 +26,7 @@ def get_platform():
 
         return osx.OSXPlatform()
 
-    if this_platform in {"freebsd", "os400", "openbsd"}:
+    if this_platform in {"freebsd", "os400", "openbsd", "dragonfly"}:
         from . import bsd
 
         return bsd.BSDPlatform()
