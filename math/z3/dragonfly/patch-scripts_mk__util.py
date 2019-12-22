--- scripts/mk_util.py.orig	2019-12-22 14:03:24 UTC
+++ scripts/mk_util.py
@@ -597,7 +597,7 @@ elif os.name == 'posix':
         IS_LINUX=True
     elif os.uname()[0] == 'GNU':
         IS_HURD=True
-    elif os.uname()[0] == 'FreeBSD':
+    elif os.uname()[0] == 'FreeBSD' or os.uname()[0] == 'DragonFly':
         IS_FREEBSD=True
     elif os.uname()[0] == 'NetBSD':
         IS_NETBSD=True
@@ -1264,7 +1264,7 @@ def get_so_ext():
     sysname = os.uname()[0]
     if sysname == 'Darwin':
         return 'dylib'
-    elif sysname == 'Linux' or sysname == 'GNU' or sysname == 'FreeBSD' or sysname == 'NetBSD' or sysname == 'OpenBSD':
+    elif sysname == 'Linux' or sysname == 'GNU' or sysname == 'FreeBSD' or sysname == 'NetBSD' or sysname == 'OpenBSD' or sysname == 'DragonFly':
         return 'so'
     elif sysname == 'CYGWIN' or sysname.startswith('MSYS_NT') or sysname.startswith('MINGW'):
         return 'dll'
@@ -2566,7 +2566,7 @@ def mk_config():
             OS_DEFINES     = '-D_HURD_'
             SO_EXT         = '.so'
             SLIBFLAGS      = '-shared'
-        elif sysname == 'FreeBSD':
+        elif sysname == 'FreeBSD' or sysname == 'DragonFly':
             CXXFLAGS       = '%s -D_FREEBSD_' % CXXFLAGS
             OS_DEFINES     = '-D_FREEBSD_'
             SO_EXT         = '.so'
