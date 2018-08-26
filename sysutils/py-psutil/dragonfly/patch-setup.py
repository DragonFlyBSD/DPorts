--- setup.py.orig	2018-08-13 23:51:39 UTC
+++ setup.py
@@ -35,6 +35,7 @@ from _common import LINUX  # NOQA
 from _common import MACOS  # NOQA
 from _common import NETBSD  # NOQA
 from _common import OPENBSD  # NOQA
+from _common import DRAGONFLY  # NOQA
 from _common import POSIX  # NOQA
 from _common import SUNOS  # NOQA
 from _common import WINDOWS  # NOQA
@@ -193,6 +194,17 @@ elif NETBSD:
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
