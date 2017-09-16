--- psutil/__init__.py.orig	2017-08-03 16:14:27 UTC
+++ psutil/__init__.py
@@ -78,6 +78,7 @@ from ._common import FREEBSD  # NOQA
 from ._common import LINUX
 from ._common import NETBSD  # NOQA
 from ._common import OPENBSD  # NOQA
+from ._common import DRAGONFLY # NOQA
 from ._common import OSX
 from ._common import POSIX  # NOQA
 from ._common import SUNOS
@@ -185,7 +186,7 @@ __all__ = [
     "POWER_TIME_UNKNOWN", "POWER_TIME_UNLIMITED",
 
     "BSD", "FREEBSD", "LINUX", "NETBSD", "OPENBSD", "OSX", "POSIX", "SUNOS",
-    "WINDOWS",
+    "WINDOWS", "DRAGONFLY",
 
     # classes
     "Process", "Popen",
