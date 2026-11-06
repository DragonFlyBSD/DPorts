--- setup/build_environment.py.orig	2025-12-06 03:52:49 UTC
+++ setup/build_environment.py
@@ -11,7 +11,7 @@ from functools import lru_cache
 import subprocess
 from functools import lru_cache
 
-from setup import isfreebsd, ishaiku, islinux, ismacos, iswindows
+from setup import isdragonflybsd, isfreebsd, ishaiku, islinux, ismacos, iswindows
 
 NMAKE = RC = msvc = MT = win_inc = win_lib = win_cc = win_ld = None
 
@@ -129,7 +129,7 @@ podofo_lib = '/usr/lib'
 podofo_inc = '/usr/include/podofo'
 podofo_lib = '/usr/lib'
 
-usb_library = 'usb' if isfreebsd else 'usb-1.0'
+usb_library = 'usb' if isfreebsd or isdragonflybsd else 'usb-1.0'
 
 chmlib_inc_dirs = chmlib_lib_dirs = []
 
