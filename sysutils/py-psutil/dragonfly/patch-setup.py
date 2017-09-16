--- setup.py.orig	2017-08-03 16:14:27 UTC
+++ setup.py
@@ -36,6 +36,7 @@ from _common import FREEBSD  # NOQA
 from _common import LINUX  # NOQA
 from _common import NETBSD  # NOQA
 from _common import OPENBSD  # NOQA
+from _common import DRAGONFLY  # NOQA
 from _common import OSX  # NOQA
 from _common import POSIX  # NOQA
 from _common import SUNOS  # NOQA
@@ -196,6 +197,17 @@ elif NETBSD:
         ],
         define_macros=macros,
         libraries=["kvm"])
+
+elif DRAGONFLY:
+    macros.append(("PSUTIL_DRAGONFLY", 1))
+    ext = Extension(
+        'psutil._psutil_bsd',
+        sources=sources + [
+            'psutil/_psutil_bsd.c',
+            'psutil/arch/bsd/dragonfly.c',
+        ],
+        define_macros=macros,
+        libraries=["kvm"])
 
 elif LINUX:
     def get_ethtool_macro():
