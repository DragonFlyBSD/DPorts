--- mesonbuild/environment.py.orig	2020-09-10 16:39:24 UTC
+++ mesonbuild/environment.py
@@ -339,7 +339,7 @@ def detect_cpu_family(compilers: Compile
     """
     if mesonlib.is_windows():
         trial = detect_windows_arch(compilers)
-    elif mesonlib.is_freebsd() or mesonlib.is_netbsd() or mesonlib.is_openbsd() or mesonlib.is_qnx():
+    elif mesonlib.is_freebsd() or mesonlib.is_netbsd() or mesonlib.is_openbsd() or mesonlib.is_qnx() or or mesonlib.is_dragonflybsd():
         trial = platform.processor().lower()
     else:
         trial = platform.machine().lower()
@@ -390,7 +390,7 @@ def detect_cpu_family(compilers: Compile
 def detect_cpu(compilers: CompilersDict):
     if mesonlib.is_windows():
         trial = detect_windows_arch(compilers)
-    elif mesonlib.is_freebsd() or mesonlib.is_netbsd() or mesonlib.is_openbsd():
+    elif mesonlib.is_freebsd() or mesonlib.is_netbsd() or mesonlib.is_openbsd() or mesonlib.is_dragonflybsd():
         trial = platform.processor().lower()
     else:
         trial = platform.machine().lower()
