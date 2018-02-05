--- scripts/mk_util.py.orig	2018-02-05 13:43:46 UTC
+++ scripts/mk_util.py
@@ -602,7 +602,7 @@ elif os.name == 'posix':
         PREFIX="/usr/local"
     elif os.uname()[0] == 'Linux':
         IS_LINUX=True
-    elif os.uname()[0] == 'FreeBSD':
+    elif os.uname()[0] == 'FreeBSD' or os.uname()[0] == 'DragonFly':
         IS_FREEBSD=True
     elif os.uname()[0] == 'OpenBSD':
         IS_OPENBSD=True
@@ -1240,7 +1240,7 @@ def get_so_ext():
     sysname = os.uname()[0]
     if sysname == 'Darwin':
         return 'dylib'
-    elif sysname == 'Linux' or sysname == 'FreeBSD' or sysname == 'OpenBSD':
+    elif sysname == 'Linux' or sysname == 'FreeBSD' or sysname == 'OpenBSD' or sysname == 'DragonFly':
         return 'so'
     elif sysname == 'CYGWIN' or sysname.startswith('MSYS_NT') or sysname.startswith('MINGW'):
         return 'dll'
@@ -2492,7 +2492,7 @@ def mk_config():
             LDFLAGS        = '%s -lrt' % LDFLAGS
             SLIBFLAGS      = '-shared'
             SLIBEXTRAFLAGS = '%s -lrt' % SLIBEXTRAFLAGS
-        elif sysname == 'FreeBSD':
+        elif sysname == 'FreeBSD' or sysname == 'DragonFly':
             CXXFLAGS       = '%s -D_FREEBSD_' % CXXFLAGS
             OS_DEFINES     = '-D_FREEBSD_'
             SO_EXT         = '.so'
