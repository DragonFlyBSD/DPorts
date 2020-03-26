--- psutil/_common.py.orig	2020-02-18 17:46:14 UTC
+++ psutil/_common.py
@@ -45,7 +45,7 @@ PY3 = sys.version_info[0] == 3
 __all__ = [
     # OS constants
     'FREEBSD', 'BSD', 'LINUX', 'NETBSD', 'OPENBSD', 'MACOS', 'OSX', 'POSIX',
-    'SUNOS', 'WINDOWS',
+    'SUNOS', 'WINDOWS', 'DRAGONFLY',
     # connection constants
     'CONN_CLOSE', 'CONN_CLOSE_WAIT', 'CONN_CLOSING', 'CONN_ESTABLISHED',
     'CONN_FIN_WAIT1', 'CONN_FIN_WAIT2', 'CONN_LAST_ACK', 'CONN_LISTEN',
@@ -86,7 +86,8 @@ OSX = MACOS  # deprecated alias
 FREEBSD = sys.platform.startswith("freebsd")
 OPENBSD = sys.platform.startswith("openbsd")
 NETBSD = sys.platform.startswith("netbsd")
-BSD = FREEBSD or OPENBSD or NETBSD
+DRAGONFLY = sys.platform.startswith("dragonfly")
+BSD = FREEBSD or OPENBSD or NETBSD or DRAGONFLY
 SUNOS = sys.platform.startswith(("sunos", "solaris"))
 AIX = sys.platform.startswith("aix")
 
