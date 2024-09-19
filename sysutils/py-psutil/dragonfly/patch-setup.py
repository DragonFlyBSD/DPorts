--- setup.py.orig	2024-06-02 23:32:26 UTC
+++ setup.py
@@ -49,6 +49,7 @@ sys.path.insert(0, os.path.join(HERE, "p
 from _common import AIX  # NOQA
 from _common import BSD  # NOQA
 from _common import FREEBSD  # NOQA
+from _common import DRAGONFLY  # NOQA
 from _common import LINUX  # NOQA
 from _common import MACOS  # NOQA
 from _common import NETBSD  # NOQA
@@ -291,6 +292,20 @@ elif FREEBSD:
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
 elif OPENBSD:
     macros.append(("PSUTIL_OPENBSD", 1))
     ext = Extension(
@@ -483,6 +498,7 @@ def main():
             'Operating System :: POSIX :: BSD :: FreeBSD',
             'Operating System :: POSIX :: BSD :: NetBSD',
             'Operating System :: POSIX :: BSD :: OpenBSD',
+            'Operating System :: POSIX :: BSD :: DragonFly BSD',
             'Operating System :: POSIX :: BSD',
             'Operating System :: POSIX :: Linux',
             'Operating System :: POSIX :: SunOS/Solaris',
@@ -549,7 +565,7 @@ def main():
                     " is not installed"
                 )
                 print(hilite(msg, color="red"), file=sys.stderr)
-            elif FREEBSD:
+            elif FREEBSD or DRAGONFLY:
                 if which('pkg'):
                     missdeps("pkg install gcc python%s" % py3)
                 elif which('mport'):  # MidnightBSD
