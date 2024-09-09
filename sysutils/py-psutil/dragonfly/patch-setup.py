--- setup.py.orig	2023-10-27 08:38:43 UTC
+++ setup.py
@@ -48,6 +48,7 @@ sys.path.insert(0, os.path.join(HERE, "p
 from _common import AIX  # NOQA
 from _common import BSD  # NOQA
 from _common import FREEBSD  # NOQA
+from _common import DRAGONFLY  # NOQA
 from _common import LINUX  # NOQA
 from _common import MACOS  # NOQA
 from _common import NETBSD  # NOQA
@@ -262,6 +263,20 @@ elif FREEBSD:
         libraries=["devstat"],
         **py_limited_api)
 
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
@@ -423,6 +438,7 @@ def main():
             'Operating System :: POSIX :: BSD :: FreeBSD',
             'Operating System :: POSIX :: BSD :: NetBSD',
             'Operating System :: POSIX :: BSD :: OpenBSD',
+            'Operating System :: POSIX :: BSD :: DragonFly BSD',
             'Operating System :: POSIX :: BSD',
             'Operating System :: POSIX :: Linux',
             'Operating System :: POSIX :: SunOS/Solaris',
@@ -477,7 +493,7 @@ def main():
             elif MACOS:
                 print(hilite("XCode (https://developer.apple.com/xcode/) "
                              "is not installed", color="red"), file=sys.stderr)
-            elif FREEBSD:
+            elif FREEBSD or DRAGONFLY:
                 if which('pkg'):
                     missdeps("pkg install gcc python%s" % py3)
                 elif which('mport'):   # MidnightBSD
