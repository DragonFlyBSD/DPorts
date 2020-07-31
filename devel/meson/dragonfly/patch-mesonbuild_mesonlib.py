--- mesonbuild/mesonlib.py.orig	2020-06-14 19:40:08 UTC
+++ mesonbuild/mesonlib.py
@@ -729,7 +729,7 @@ def default_libdir() -> str:
                 return 'lib/' + archpath
         except Exception:
             pass
-    if is_freebsd() or is_irix():
+    if is_freebsd() or is_irix() or is_dragonflybsd():
         return 'lib'
     if os.path.isdir('/usr/lib64') and not os.path.islink('/usr/lib64'):
         return 'lib64'
@@ -757,7 +757,7 @@ def get_library_dirs() -> T.List[str]:
     # problematic, please raise the issue on the mailing list.
     unixdirs = ['/usr/local/lib', '/usr/lib', '/lib']
 
-    if is_freebsd():
+    if is_freebsd() or is_dragonflybsd:
         return unixdirs
     # FIXME: this needs to be further genericized for aarch64 etc.
     machine = platform.machine()
