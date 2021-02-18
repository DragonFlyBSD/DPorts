--- setup/build.py.orig	2021-02-18 15:47:43 UTC
+++ setup/build.py
@@ -8,7 +8,7 @@ __docformat__ = 'restructuredtext en'
 import textwrap, os, shlex, subprocess, glob, shutil, sys, json
 from collections import namedtuple
 
-from setup import Command, islinux, isbsd, isfreebsd, ismacos, ishaiku, SRC, iswindows
+from setup import Command, islinux, isbsd, isfreebsd, isdragonflybsd, ismacos, ishaiku, SRC, iswindows
 isunix = islinux or ismacos or isbsd or ishaiku
 
 py_lib = os.path.join(sys.prefix, 'libs', 'python%d%d.lib' % sys.version_info[:2])
@@ -109,7 +109,7 @@ def is_ext_allowed(ext):
     only = ext.get('only', '')
     if only:
         only = set(only.split())
-        q = set(filter(lambda x: globals()["is" + x], ["bsd", "freebsd", "haiku", "linux", "macos", "windows"]))
+        q = set(filter(lambda x: globals()["is" + x], ["bsd", "dragonflybsd", "freebsd", "haiku", "linux", "macos", "windows"]))
         return len(q.intersection(only)) > 0
     return True
 
@@ -130,6 +130,8 @@ def parse_extension(ext):
             ans = ext.pop('bsd_' + k, ans)
         elif isfreebsd:
             ans = ext.pop('freebsd_' + k, ans)
+        elif isdragonflybsd:
+            ans = ext.pop('dragonfly_' + k, ans)
         elif ishaiku:
             ans = ext.pop('haiku_' + k, ans)
         else:
