--- setup/build_environment.py.intermediate	2020-01-26 14:54:08.000000000 +0000
+++ setup/build_environment.py
@@ -9,7 +9,7 @@ __docformat__ = 'restructuredtext en'
 import os, subprocess, re, sys, sysconfig
 from distutils.spawn import find_executable
 
-from setup import isfreebsd, isosx, iswindows, is64bit, islinux, ishaiku
+from setup import isfreebsd, isosx, iswindows, is64bit, islinux, ishaiku, isdragonflybsd
 is64bit
 
 NMAKE = RC = msvc = MT = win_inc = win_lib = None
@@ -103,7 +103,7 @@ def get_sip_dir():
     if q is None:
         if iswindows:
             q = os.path.join(sys.prefix, 'share', 'sip')
-        elif isfreebsd:
+        elif isfreebsd or isdragonflybsd:
             q = os.path.join(sys.prefix, 'share', 'py-sip')
         else:
             q = os.path.join(os.path.dirname(PyQt5.__file__), 'bindings')
