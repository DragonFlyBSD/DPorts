--- psutil/_common.py.orig	2017-02-16 18:57:27 UTC
+++ psutil/_common.py
@@ -35,7 +35,7 @@ else:
 __all__ = [
     # OS constants
     'FREEBSD', 'BSD', 'LINUX', 'NETBSD', 'OPENBSD', 'OSX', 'POSIX', 'SUNOS',
-    'WINDOWS',
+    'WINDOWS', 'DRAGONFLY',
     # connection constants
     'CONN_CLOSE', 'CONN_CLOSE_WAIT', 'CONN_CLOSING', 'CONN_ESTABLISHED',
     'CONN_FIN_WAIT1', 'CONN_FIN_WAIT2', 'CONN_LAST_ACK', 'CONN_LISTEN',
@@ -70,7 +70,8 @@ OSX = sys.platform.startswith("darwin")
 FREEBSD = sys.platform.startswith("freebsd")
 OPENBSD = sys.platform.startswith("openbsd")
 NETBSD = sys.platform.startswith("netbsd")
-BSD = FREEBSD or OPENBSD or NETBSD
+DRAGONFLY = sys.platform.startswith("dragonfly")
+BSD = FREEBSD or OPENBSD or NETBSD or DRAGONFLY
 SUNOS = sys.platform.startswith("sunos") or sys.platform.startswith("solaris")
 
 
