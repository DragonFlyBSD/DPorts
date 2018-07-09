--- scripts/mk_util.py.orig	2018-07-09 15:47:08 UTC
+++ scripts/mk_util.py
@@ -606,7 +606,7 @@ elif os.name == 'posix':
         PREFIX="/usr/local"
     elif os.uname()[0] == 'Linux':
         IS_LINUX=True
-    elif os.uname()[0] == 'FreeBSD':
+    elif os.uname()[0] == 'FreeBSD' or os.uname()[0] == 'DragonFly':
         IS_FREEBSD=True
     elif os.uname()[0] == 'NetBSD':
         IS_NETBSD=True
@@ -1251,7 +1251,7 @@ def get_so_ext():
     sysname = os.uname()[0]
     if sysname == 'Darwin':
         return 'dylib'
-    elif sysname == 'Linux' or sysname == 'FreeBSD' or sysname == 'NetBSD' or sysname == 'OpenBSD':
+    elif sysname == 'Linux' or sysname == 'FreeBSD' or sysname == 'NetBSD' or sysname == 'OpenBSD' or sysname == 'DragonFly':
         return 'so'
     elif sysname == 'CYGWIN' or sysname.startswith('MSYS_NT') or sysname.startswith('MINGW'):
         return 'dll'
@@ -2511,7 +2511,7 @@ def mk_config():
             LDFLAGS        = '%s -lrt' % LDFLAGS
             SLIBFLAGS      = '-shared'
             SLIBEXTRAFLAGS = '%s -lrt' % SLIBEXTRAFLAGS
-        elif sysname == 'FreeBSD':
+        elif sysname == 'FreeBSD' or sysname == 'DragonFly':
             CXXFLAGS       = '%s -D_FREEBSD_' % CXXFLAGS
             OS_DEFINES     = '-D_FREEBSD_'
             SO_EXT         = '.so'
