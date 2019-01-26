--- scripts/mk_util.py.orig	2019-01-26 18:56:21 UTC
+++ scripts/mk_util.py
@@ -623,7 +623,7 @@ elif os.name == 'posix':
         PREFIX="/usr/local"
     elif os.uname()[0] == 'Linux':
         IS_LINUX=True
-    elif os.uname()[0] == 'FreeBSD':
+    elif os.uname()[0] == 'FreeBSD' or os.uname()[0] == 'DragonFly':
         IS_FREEBSD=True
     elif os.uname()[0] == 'NetBSD':
         IS_NETBSD=True
@@ -1294,7 +1294,7 @@ def get_so_ext():
     sysname = os.uname()[0]
     if sysname == 'Darwin':
         return 'dylib'
-    elif sysname == 'Linux' or sysname == 'FreeBSD' or sysname == 'NetBSD' or sysname == 'OpenBSD':
+    elif sysname == 'Linux' or sysname == 'FreeBSD' or sysname == 'NetBSD' or sysname == 'OpenBSD' or sysname == 'DragonFly':
         return 'so'
     elif sysname == 'CYGWIN' or sysname.startswith('MSYS_NT') or sysname.startswith('MINGW'):
         return 'dll'
@@ -2746,7 +2746,7 @@ def mk_config():
             SLIBFLAGS      = '-shared'
             SLIBEXTRAFLAGS = '%s -lrt' % SLIBEXTRAFLAGS
             SLIBEXTRAFLAGS = '%s -Wl,-soname,libz3.so' % SLIBEXTRAFLAGS
-        elif sysname == 'FreeBSD':
+        elif sysname == 'FreeBSD' or sysname == 'DragonFly':
             CXXFLAGS       = '%s -D_FREEBSD_' % CXXFLAGS
             OS_DEFINES     = '-D_FREEBSD_'
             SO_EXT         = '.so'
