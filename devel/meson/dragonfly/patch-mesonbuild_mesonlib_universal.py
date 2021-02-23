--- mesonbuild/mesonlib/universal.py.orig	2021-02-20 13:16:54 UTC
+++ mesonbuild/mesonlib/universal.py
@@ -852,7 +852,7 @@ def default_libdir() -> str:
                 return 'lib/' + archpath
         except Exception:
             pass
-    if is_freebsd() or is_irix():
+    if is_freebsd() or is_irix() or is_dragonflybsd():
         return 'lib'
     if os.path.isdir('/usr/lib64') and not os.path.islink('/usr/lib64'):
         return 'lib64'
@@ -880,7 +880,7 @@ def get_library_dirs() -> T.List[str]:
     # problematic, please raise the issue on the mailing list.
     unixdirs = ['/usr/local/lib', '/usr/lib', '/lib']
 
-    if is_freebsd():
+    if is_freebsd() or is_dragonflybsd():
         return unixdirs
     # FIXME: this needs to be further genericized for aarch64 etc.
     machine = platform.machine()
