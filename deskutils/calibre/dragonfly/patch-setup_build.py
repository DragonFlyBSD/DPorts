--- setup/build.py.intermediate	2020-01-26 14:54:08.000000000 +0000
+++ setup/build.py
@@ -10,7 +10,7 @@ __docformat__ = 'restructuredtext en'
 import textwrap, os, shlex, subprocess, glob, shutil, re, sys, json
 from collections import namedtuple
 
-from setup import Command, islinux, isbsd, isfreebsd, isosx, ishaiku, SRC, iswindows, __version__, ispy3
+from setup import Command, islinux, isbsd, isfreebsd, isosx, ishaiku, SRC, iswindows, __version__, ispy3, isdragonflybsd
 isunix = islinux or isosx or isbsd or ishaiku
 
 py_lib = os.path.join(sys.prefix, 'libs', 'python%d%d.lib' % sys.version_info[:2])
@@ -103,7 +103,7 @@ def is_ext_allowed(ext):
     only = ext.get('only', '')
     if only:
         only = set(only.split())
-        q = set(filter(lambda x: globals()["is" + x], ["bsd", "freebsd", "haiku", "linux", "osx", "windows"]))
+        q = set(filter(lambda x: globals()["is" + x], ["bsd", "dragonflybsd", "freebsd", "haiku", "linux", "osx", "windows"]))
         return len(q.intersection(only)) > 0
     return True
 
@@ -122,6 +122,8 @@ def parse_extension(ext):
             ans = ext.pop('osx_' + k, ans)
         elif isbsd:
             ans = ext.pop('bsd_' + k, ans)
+        elif isdragonflybsd:
+            ans = ext.pop('dragonfly_' + k, ans)
         elif isfreebsd:
             ans = ext.pop('freebsd_' + k, ans)
         elif ishaiku:
