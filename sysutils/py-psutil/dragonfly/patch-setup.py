--- setup.py.orig	2025-06-13 18:12:17.346305000 +0200
+++ setup.py	2025-06-13 18:14:40.708941000 +0200
@@ -60,6 +60,7 @@ sys.path.insert(0, os.path.join(HERE, "p
 
 from _common import AIX  # noqa: E402
 from _common import BSD  # noqa: E402
+from _common import DRAGONFLY  # noqa: E402
 from _common import FREEBSD  # noqa: E402
 from _common import LINUX  # noqa: E402
 from _common import MACOS  # noqa: E402
@@ -315,6 +316,20 @@ elif MACOS:
         # fmt: on
     )
 
+elif DRAGONFLY:
+    macros.append(("PSUTIL_DRAGONFLY", 1))
+    ext = Extension(
+        'psutil._psutil_bsd',
+        sources=(
+            sources +
+            ["psutil/_psutil_bsd.c"] +
+            glob.glob("psutil/arch/bsd/*.c") +
+            glob.glob("psutil/arch/dragonfly/*.c")
+        ),
+        define_macros=macros,
+        libraries=["kvm", "kinfo", "devstat"],
+        **py_limited_api)
+
 elif FREEBSD:
     macros.append(("PSUTIL_FREEBSD", 1))
     ext = Extension(
@@ -512,6 +527,7 @@ def main():
             'Operating System :: Microsoft',
             'Operating System :: OS Independent',
             'Operating System :: POSIX :: AIX',
+            'Operating System :: POSIX :: BSD :: DragonFly BSD',
             'Operating System :: POSIX :: BSD :: FreeBSD',
             'Operating System :: POSIX :: BSD :: NetBSD',
             'Operating System :: POSIX :: BSD :: OpenBSD',
@@ -578,7 +594,7 @@ def main():
                     " is not installed"
                 )
                 print(hilite(msg, color="red"), file=sys.stderr)
-            elif FREEBSD:
+            elif DRAGONFLY or FREEBSD:
                 if shutil.which("pkg"):
                     missdeps("pkg install gcc python3")
                 elif shutil.which("mport"):  # MidnightBSD
