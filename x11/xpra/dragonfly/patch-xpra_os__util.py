--- xpra/os_util.py.orig	2020-11-18 03:30:10 UTC
+++ xpra/os_util.py
@@ -26,6 +26,7 @@ LINUX = sys.platform.startswith("linux")
 NETBSD = sys.platform.startswith("netbsd")
 OPENBSD = sys.platform.startswith("openbsd")
 FREEBSD  = sys.platform.startswith("freebsd")
+DRAGONFLY  = sys.platform.startswith("dragonfly")
 
 POSIX = os.name=="posix"
 
