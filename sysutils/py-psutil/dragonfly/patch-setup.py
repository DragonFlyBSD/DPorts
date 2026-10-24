--- setup.py.intermediate	2026-01-20 14:38:58 UTC
+++ setup.py
@@ -57,6 +57,7 @@ sys.path.insert(0, os.path.join(HERE, "psutil"))
 
 from _common import AIX  # noqa: E402
 from _common import BSD  # noqa: E402
+from _common import DRAGONFLY  # noqa: E402
 from _common import FREEBSD  # noqa: E402
 from _common import LINUX  # noqa: E402
 from _common import MACOS  # noqa: E402
@@ -213,7 +214,7 @@ def get_sysdeps():
             )
     elif MACOS:
         return "xcode-select --install"
-    elif FREEBSD:
+    elif DRAGONFLY or FREEBSD:
         if shutil.which("pkg"):
             return "pkg install gcc python3"
         elif shutil.which("mport"):  # MidnightBSD
@@ -362,6 +363,25 @@ elif FREEBSD:
         # fmt: on
     )
 
+elif DRAGONFLY:
+    macros.append(("PSUTIL_DRAGONFLY", 1))
+
+    ext = Extension(
+        'psutil._psutil_bsd',
+        sources=(
+            sources
+            + ["psutil/_psutil_bsd.c"]
+            + glob.glob("psutil/arch/bsd/*.c")
+            + glob.glob("psutil/arch/dragonfly/*.c")
+        ),
+        define_macros=macros,
+        libraries=["kvm", "kinfo", "devstat"],
+        # fmt: off
+        # python 2.7 compatibility requires no comma
+        **py_limited_api
+        # fmt: on
+    )
+
 elif OPENBSD:
     macros.append(("PSUTIL_OPENBSD", 1))
 
@@ -503,6 +523,7 @@ def main():
             'Operating System :: Microsoft',
             'Operating System :: OS Independent',
             'Operating System :: POSIX :: AIX',
+            'Operating System :: POSIX :: BSD :: DragonFly BSD',
             'Operating System :: POSIX :: BSD :: FreeBSD',
             'Operating System :: POSIX :: BSD :: NetBSD',
             'Operating System :: POSIX :: BSD :: OpenBSD',
