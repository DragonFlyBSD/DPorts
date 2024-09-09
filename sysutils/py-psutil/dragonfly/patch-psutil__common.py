diff --git psutil/_common.py psutil/_common.py
index 3414e8ca..d9894b5c 100644
--- psutil/_common.py
+++ psutil/_common.py
@@ -49,7 +49,7 @@ _DEFAULT = object()
 __all__ = [
     # OS constants
     'FREEBSD', 'BSD', 'LINUX', 'NETBSD', 'OPENBSD', 'MACOS', 'OSX', 'POSIX',
-    'SUNOS', 'WINDOWS',
+    'DRAGONFLY', 'SUNOS', 'WINDOWS',
     # connection constants
     'CONN_CLOSE', 'CONN_CLOSE_WAIT', 'CONN_CLOSING', 'CONN_ESTABLISHED',
     'CONN_FIN_WAIT1', 'CONN_FIN_WAIT2', 'CONN_LAST_ACK', 'CONN_LISTEN',
@@ -91,7 +91,8 @@ OSX = MACOS  # deprecated alias
 FREEBSD = sys.platform.startswith(("freebsd", "midnightbsd"))
 OPENBSD = sys.platform.startswith("openbsd")
 NETBSD = sys.platform.startswith("netbsd")
-BSD = FREEBSD or OPENBSD or NETBSD
+DRAGONFLY = sys.platform.startswith("dragonfly")
+BSD = FREEBSD or OPENBSD or NETBSD or DRAGONFLY
 SUNOS = sys.platform.startswith(("sunos", "solaris"))
 AIX = sys.platform.startswith("aix")
 
@@ -116,6 +117,7 @@ STATUS_LOCKED = "locked"  # FreeBSD
 STATUS_WAITING = "waiting"  # FreeBSD
 STATUS_SUSPENDED = "suspended"  # NetBSD
 STATUS_PARKED = "parked"  # Linux
+STATUS_CORE = "core" # DragonFly
 
 # Process.connections() and psutil.net_connections()
 CONN_ESTABLISHED = "ESTABLISHED"
