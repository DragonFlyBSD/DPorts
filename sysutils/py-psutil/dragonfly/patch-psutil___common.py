--- psutil/_common.py.orig	2025-11-26 17:30:32 UTC
+++ psutil/_common.py
@@ -38,7 +38,7 @@ _DEFAULT = object()
 __all__ = [
     # OS constants
     'FREEBSD', 'BSD', 'LINUX', 'NETBSD', 'OPENBSD', 'MACOS', 'OSX', 'POSIX',
-    'SUNOS', 'WINDOWS',
+    'DRAGONFLY', 'SUNOS', 'WINDOWS',
     # connection constants
     'CONN_CLOSE', 'CONN_CLOSE_WAIT', 'CONN_CLOSING', 'CONN_ESTABLISHED',
     'CONN_FIN_WAIT1', 'CONN_FIN_WAIT2', 'CONN_LAST_ACK', 'CONN_LISTEN',
@@ -77,7 +77,8 @@ OSX = MACOS  # deprecated alias
 FREEBSD = sys.platform.startswith(("freebsd", "midnightbsd"))
 OPENBSD = sys.platform.startswith("openbsd")
 NETBSD = sys.platform.startswith("netbsd")
-BSD = FREEBSD or OPENBSD or NETBSD
+DRAGONFLY = sys.platform.startswith("dragonfly")
+BSD = FREEBSD or OPENBSD or NETBSD or DRAGONFLY
 SUNOS = sys.platform.startswith(("sunos", "solaris"))
 AIX = sys.platform.startswith("aix")
 
@@ -102,6 +103,7 @@ STATUS_LOCKED = "locked"  # FreeBSD
 STATUS_WAITING = "waiting"  # FreeBSD
 STATUS_SUSPENDED = "suspended"  # NetBSD
 STATUS_PARKED = "parked"  # Linux
+STATUS_CORE = "core"  # DragonFly
 
 # Process.net_connections() and psutil.net_connections()
 CONN_ESTABLISHED = "ESTABLISHED"
