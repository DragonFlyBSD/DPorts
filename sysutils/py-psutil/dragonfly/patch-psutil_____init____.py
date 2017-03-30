--- psutil/__init__.py.orig	2017-03-24 14:27:36 UTC
+++ psutil/__init__.py
@@ -67,6 +67,7 @@ from ._common import FREEBSD  # NOQA
 from ._common import LINUX
 from ._common import NETBSD  # NOQA
 from ._common import OPENBSD  # NOQA
+from ._common import DRAGONFLY # NOQA
 from ._common import OSX
 from ._common import POSIX  # NOQA
 from ._common import SUNOS
@@ -174,7 +175,7 @@ __all__ = [
     "POWER_TIME_UNKNOWN", "POWER_TIME_UNLIMITED",
 
     "BSD", "FREEBSD", "LINUX", "NETBSD", "OPENBSD", "OSX", "POSIX", "SUNOS",
-    "WINDOWS",
+    "WINDOWS", "DRAGONFLY",
 
     # classes
     "Process", "Popen",
