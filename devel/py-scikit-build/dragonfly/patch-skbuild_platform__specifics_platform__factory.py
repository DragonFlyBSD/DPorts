--- skbuild/platform_specifics/platform_factory.py.orig	2020-02-02 00:00:00 UTC
+++ skbuild/platform_specifics/platform_factory.py
@@ -35,7 +35,7 @@ def get_platform() -> abstract.CMakePlatform:
 
         return osx.OSXPlatform()
 
-    if this_platform in {"freebsd", "netbsd", "os400", "openbsd"}:
+    if this_platform in {"freebsd", "netbsd", "os400", "openbsd", "dragonfly"}:
         from . import bsd  # noqa: PLC0415
 
         return bsd.BSDPlatform()
