--- scripts/mk_util.py.intermediate	2016-12-17 16:11:47.000000000 +0200
+++ scripts/mk_util.py
@@ -605,7 +605,7 @@ elif os.name == 'posix':
         PREFIX="/usr/local"
     elif os.uname()[0] == 'Linux':
         IS_LINUX=True
-    elif os.uname()[0] == 'FreeBSD':
+    elif os.uname()[0] == 'FreeBSD' or os.uname()[0] == 'DragonFly':
         IS_FREEBSD=True
     elif os.uname()[0] == 'OpenBSD':
         IS_OPENBSD=True
@@ -1227,7 +1227,7 @@ def get_so_ext():
     sysname = os.uname()[0]
     if sysname == 'Darwin':
         return 'dylib'
-    elif sysname == 'Linux' or sysname == 'FreeBSD' or sysname == 'OpenBSD':
+    elif sysname == 'Linux' or sysname == 'FreeBSD' or sysname == 'OpenBSD' or sysname == 'DragonFly':
         return 'so'
     elif sysname == 'CYGWIN':
         return 'dll'
@@ -2444,7 +2444,7 @@ def mk_config():
             LDFLAGS        = '%s -lrt' % LDFLAGS
             SLIBFLAGS      = '-shared'
             SLIBEXTRAFLAGS = '%s -lrt' % SLIBEXTRAFLAGS
-        elif sysname == 'FreeBSD':
+        elif sysname == 'FreeBSD' or sysname == 'DragonFly':
             CXXFLAGS       = '%s -fno-strict-aliasing -D_FREEBSD_' % CXXFLAGS
             OS_DEFINES     = '-D_FREEBSD_'
             SO_EXT         = '.so'
