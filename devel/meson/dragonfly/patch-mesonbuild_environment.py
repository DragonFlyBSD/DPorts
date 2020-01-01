--- mesonbuild/environment.py.orig	2019-11-28 17:37:44 UTC
+++ mesonbuild/environment.py
@@ -312,7 +312,7 @@ def detect_cpu_family(compilers: Compile
     """
     if mesonlib.is_windows():
         trial = detect_windows_arch(compilers)
-    elif mesonlib.is_freebsd() or mesonlib.is_netbsd() or mesonlib.is_openbsd():
+    elif mesonlib.is_freebsd() or mesonlib.is_netbsd() or mesonlib.is_openbsd() or mesonlib.is_dragonflybsd():
         trial = platform.processor().lower()
     else:
         trial = platform.machine().lower()
@@ -357,7 +357,7 @@ def detect_cpu_family(compilers: Compile
 def detect_cpu(compilers: CompilersDict):
     if mesonlib.is_windows():
         trial = detect_windows_arch(compilers)
-    elif mesonlib.is_freebsd() or mesonlib.is_netbsd() or mesonlib.is_openbsd():
+    elif mesonlib.is_freebsd() or mesonlib.is_netbsd() or mesonlib.is_openbsd() or mesonlib.is_dragonflybsd():
         trial = platform.processor().lower()
     else:
         trial = platform.machine().lower()
