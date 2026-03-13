--- psutil/__init__.py.orig	2025-06-13 17:26:29.485747000 +0200
+++ psutil/__init__.py	2025-06-13 17:27:29.016832000 +0200
@@ -9,6 +9,7 @@ sensors) in Python. Supported platforms:
  - Linux
  - Windows
  - macOS
+ - DragonFlyBSD
  - FreeBSD
  - OpenBSD
  - NetBSD
@@ -51,6 +52,7 @@ from ._common import CONN_NONE
 from ._common import CONN_SYN_RECV
 from ._common import CONN_SYN_SENT
 from ._common import CONN_TIME_WAIT
+from ._common import DRAGONFLY
 from ._common import FREEBSD
 from ._common import LINUX
 from ._common import MACOS
@@ -165,7 +167,7 @@ __all__ = [
     "POWER_TIME_UNKNOWN", "POWER_TIME_UNLIMITED",
 
     "BSD", "FREEBSD", "LINUX", "NETBSD", "OPENBSD", "MACOS", "OSX", "POSIX",
-    "SUNOS", "WINDOWS", "AIX",
+    "DRAGONFLY", "SUNOS", "WINDOWS", "AIX",
 
     # "RLIM_INFINITY", "RLIMIT_AS", "RLIMIT_CORE", "RLIMIT_CPU", "RLIMIT_DATA",
     # "RLIMIT_FSIZE", "RLIMIT_LOCKS", "RLIMIT_MEMLOCK", "RLIMIT_NOFILE",
