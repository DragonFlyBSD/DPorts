--- mesonbuild/mesonlib.py.orig	2019-11-28 17:37:44 UTC
+++ mesonbuild/mesonlib.py
@@ -672,7 +672,7 @@ def default_libdir():
                 return 'lib/' + archpath
         except Exception:
             pass
-    if is_freebsd():
+    if is_freebsd() or is_dragonflybsd:
         return 'lib'
     if os.path.isdir('/usr/lib64') and not os.path.islink('/usr/lib64'):
         return 'lib64'
@@ -697,7 +697,7 @@ def get_library_dirs() -> typing.List[st
     # problematic, please raise the issue on the mailing list.
     unixdirs = ['/usr/local/lib', '/usr/lib', '/lib']
 
-    if is_freebsd():
+    if is_freebsd() or is_dragonflybsd:
         return unixdirs
     # FIXME: this needs to be further genericized for aarch64 etc.
     machine = platform.machine()
