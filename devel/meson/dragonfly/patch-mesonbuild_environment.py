--- mesonbuild/envconfig.py.orig
+++ mesonbuild/envconfig.py
@@ -584,6 +584,6 @@
     if mesonlib.is_windows():
         trial = detect_windows_arch(compilers)
-    elif mesonlib.is_freebsd() or mesonlib.is_netbsd() or mesonlib.is_openbsd() or mesonlib.is_qnx() or mesonlib.is_aix():
+    elif mesonlib.is_freebsd() or mesonlib.is_netbsd() or mesonlib.is_openbsd() or mesonlib.is_qnx() or mesonlib.is_aix() or mesonlib.is_dragonflybsd():
         trial = platform.processor().lower()
     else:
         trial = platform.machine().lower()
@@ -650,6 +650,6 @@
 def detect_cpu(compilers: T.Dict[str, Compiler]) -> str:
     if mesonlib.is_windows():
         trial = detect_windows_arch(compilers)
-    elif mesonlib.is_freebsd() or mesonlib.is_netbsd() or mesonlib.is_openbsd() or mesonlib.is_aix():
+    elif mesonlib.is_freebsd() or mesonlib.is_netbsd() or mesonlib.is_openbsd() or mesonlib.is_aix() or mesonlib.is_dragonflybsd():
         trial = platform.processor().lower()
     else:
         trial = platform.machine().lower()
