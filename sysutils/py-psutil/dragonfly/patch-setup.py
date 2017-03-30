--- setup.py.orig	2017-02-03 17:14:32 UTC
+++ setup.py
@@ -30,6 +30,7 @@ from _common import FREEBSD  # NOQA
 from _common import LINUX  # NOQA
 from _common import NETBSD  # NOQA
 from _common import OPENBSD  # NOQA
+from _common import DRAGONFLY  # NOQA
 from _common import OSX  # NOQA
 from _common import POSIX  # NOQA
 from _common import SUNOS  # NOQA
@@ -184,6 +185,20 @@ elif NETBSD:
         define_macros=macros,
         libraries=["kvm"])
 
+# DragonFly
+elif DRAGONFLY:
+    macros.append(("PSUTIL_DRAGONFLY", 1))
+    ext = Extension(
+        'psutil._psutil_bsd',
+        sources=[
+            'psutil/_psutil_bsd.c',
+            'psutil/_psutil_common.c',
+            'psutil/arch/bsd/dragonfly.c',
+        ],
+        define_macros=macros,
+        libraries=["kvm"])
+
+
 # Linux
 elif LINUX:
     def get_ethtool_macro():
