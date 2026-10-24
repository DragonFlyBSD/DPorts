--- thefuck/types.py.orig	2021-12-19 20:26:39 UTC
+++ thefuck/types.py
@@ -1,9 +1,8 @@
-from imp import load_source
 import os
 import sys
 from . import logs
 from .shells import shell
-from .conf import settings
+from .conf import settings, load_source
 from .const import DEFAULT_PRIORITY, ALL_ENABLED
 from .exceptions import EmptyCommand
 from .utils import get_alias, format_raw_script
