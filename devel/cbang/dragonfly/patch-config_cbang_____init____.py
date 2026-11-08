--- config/cbang/__init__.py.orig
+++ config/cbang/__init__.py
@@ -112,7 +112,7 @@
     if with_local_boost: conf.CBRequireLib('cbang-boost')
 
     conf.CBRequireLib('cbang')
-    if platform.system() == 'FreeBSD': conf.CBRequireLib('sysinfo')
+    if platform.system() in ('FreeBSD', 'DragonFly'): conf.CBRequireLib('sysinfo')
     conf.CBRequireCXXHeader('cbang/Exception.h')
     env.CBDefine('HAVE_CBANG')
 
