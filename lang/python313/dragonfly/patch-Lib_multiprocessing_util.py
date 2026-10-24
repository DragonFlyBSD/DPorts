--- Lib/multiprocessing/util.py.orig	2026-08-05 12:25:43 UTC
+++ Lib/multiprocessing/util.py
@@ -137,7 +137,7 @@ abstract_sockets_supported = _platform_supports_abstra
 
 if sys.platform == 'linux':
     _SUN_PATH_MAX = 108
-elif sys.platform.startswith(('openbsd', 'freebsd')):
+elif sys.platform.startswith(('openbsd', 'freebsd', 'dragonfly')):
     _SUN_PATH_MAX = 104
 else:
     # On Windows platforms, we do not create AF_UNIX sockets.
