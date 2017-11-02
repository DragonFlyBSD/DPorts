--- psutil/__init__.py.orig	2017-11-02 10:52:12.593964000 +0200
+++ psutil/__init__.py	2017-11-02 10:57:55.867278000 +0200
@@ -80,6 +80,7 @@
 from ._common import LINUX
 from ._common import NETBSD  # NOQA
 from ._common import OPENBSD  # NOQA
+from ._common import DRAGONFLY # NOQA
 from ._common import OSX
 from ._common import POSIX  # NOQA
 from ._common import SUNOS
@@ -194,7 +195,7 @@
     "POWER_TIME_UNKNOWN", "POWER_TIME_UNLIMITED",
 
     "BSD", "FREEBSD", "LINUX", "NETBSD", "OPENBSD", "OSX", "POSIX", "SUNOS",
-    "WINDOWS", "AIX",
+    "WINDOWS", "AIX", "DRAGONFLY"
 
     # classes
     "Process", "Popen",
