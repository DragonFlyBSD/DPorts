--- readchar/__init__.py.orig	2026-10-23 00:00:00 UTC
+++ readchar/__init__.py
@@ -11,7 +11,7 @@
 from ._config import config
 
 
-if platform.startswith(("linux", "darwin", "freebsd", "openbsd", "android")):
+if platform.startswith(("linux", "darwin", "freebsd", "dragonfly", "openbsd", "android")):
     from . import _posix_key as key
     from ._posix_read import readchar, readkey
 elif platform in ("win32", "cygwin"):
