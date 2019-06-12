--- add_build_info.py.orig	2019-03-19 15:05:05 UTC
+++ add_build_info.py
@@ -205,7 +205,7 @@ def get_platform_name():
         except:
             pass
         return "Microsoft Windows"
-    if sys.platform.find("bsd")>=0:
+    if sys.platform.find("bsd")>=0 or sys.platform.startswith("dragonfly"):
         return "BSD"
     try:
         from xpra.os_util import get_linux_distribution
