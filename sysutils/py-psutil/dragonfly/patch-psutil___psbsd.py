--- psutil/_psbsd.py.orig	2021-12-15 09:34:00 UTC
+++ psutil/_psbsd.py
@@ -19,6 +19,7 @@ from . import _psutil_posix as cext_posi
 from ._common import FREEBSD
 from ._common import NETBSD
 from ._common import OPENBSD
+from ._common import DRAGONFLY
 from ._common import AccessDenied
 from ._common import NoSuchProcess
 from ._common import ZombieProcess
