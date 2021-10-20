--- setup.py.orig	2013-07-04 17:15:22.000000000 +0000
+++ setup.py
@@ -109,6 +109,13 @@ elif sys.platform.startswith('cygwin'):
         HAVE_BROKEN_SEM_UNLINK=1
         )
     libraries = []
+elif sys.platform.startswith('dragonfly'):
+    macros = dict(                  # DragonFly
+        HAVE_SEM_OPEN=0,            # Not implemented
+        HAVE_SEM_TIMEDWAIT=0,
+        HAVE_FD_TRANSFER=1,
+        )
+    libraries = []
 elif sys.platform in ('freebsd4', 'freebsd5', 'freebsd6'):
     # FreeBSD's P1003.1b semaphore support is very experimental
     # and has many known problems. (as of June 2008)
