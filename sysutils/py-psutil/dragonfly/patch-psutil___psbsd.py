--- psutil/_psbsd.py.orig	2019-06-28 13:13:13 UTC
+++ psutil/_psbsd.py
@@ -23,6 +23,7 @@ from ._common import memoize
 from ._common import memoize_when_activated
 from ._common import NETBSD
 from ._common import OPENBSD
+from ._common import DRAGONFLY
 from ._common import usage_percent
 from ._compat import FileNotFoundError
 from ._compat import PermissionError
