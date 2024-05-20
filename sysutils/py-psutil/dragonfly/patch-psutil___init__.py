diff --git psutil/__init__.py psutil/__init__.py
index ca2d9273..26a567ec 100644
--- psutil/__init__.py
+++ psutil/__init__.py
@@ -14,6 +14,7 @@ sensors) in Python. Supported platforms:
  - FreeBSD
  - OpenBSD
  - NetBSD
+ - DragonFly BSD
  - Sun Solaris
  - AIX
 
@@ -55,6 +56,7 @@ from ._common import CONN_SYN_RECV
 from ._common import CONN_SYN_SENT
 from ._common import CONN_TIME_WAIT
 from ._common import FREEBSD  # NOQA
+from ._common import DRAGONFLY  # NOQA
 from ._common import LINUX
 from ._common import MACOS
 from ._common import NETBSD  # NOQA
@@ -170,7 +172,7 @@ __all__ = [
     "POWER_TIME_UNKNOWN", "POWER_TIME_UNLIMITED",
 
     "BSD", "FREEBSD", "LINUX", "NETBSD", "OPENBSD", "MACOS", "OSX", "POSIX",
-    "SUNOS", "WINDOWS", "AIX",
+    "DRAGONFLY", "SUNOS", "WINDOWS", "AIX",
 
     # "RLIM_INFINITY", "RLIMIT_AS", "RLIMIT_CORE", "RLIMIT_CPU", "RLIMIT_DATA",
     # "RLIMIT_FSIZE", "RLIMIT_LOCKS", "RLIMIT_MEMLOCK", "RLIMIT_NOFILE",
