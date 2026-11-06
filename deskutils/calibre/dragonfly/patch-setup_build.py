--- setup/build.py.orig	2025-12-06 03:52:49 UTC
+++ setup/build.py
@@ -17,7 +17,7 @@ from typing import NamedTuple
 from functools import partial
 from typing import NamedTuple
 
-from setup import SRC, Command, isbsd, isfreebsd, ishaiku, islinux, ismacos, iswindows
+from setup import SRC, Command, isbsd, isdragonflybsd, isfreebsd, ishaiku, islinux, ismacos, iswindows
 
 isunix = islinux or ismacos or isbsd or ishaiku
 
@@ -120,7 +120,7 @@ def is_ext_allowed(cross_compile_for: str, ext: Extens
         if islinux and only == cross_compile_for:
             return True
         only = set(only.split())
-        q = set(filter(lambda x: globals()['is' + x], ['bsd', 'freebsd', 'haiku', 'linux', 'macos', 'windows']))
+        q = set(filter(lambda x: globals()['is' + x], ['bsd', 'dragonflybsd', 'freebsd', 'haiku', 'linux', 'macos', 'windows']))
         return len(q.intersection(only)) > 0
     return True
 
