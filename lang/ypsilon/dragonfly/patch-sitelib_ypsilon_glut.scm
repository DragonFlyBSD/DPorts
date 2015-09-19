--- sitelib/ypsilon/glut.scm.orig	2008-12-23 10:55:52.000000000 +0200
+++ sitelib/ypsilon/glut.scm
@@ -179,6 +179,7 @@
                         (on-windows (load-shared-object "glut32.dll"))
                         (on-linux   (load-shared-object "libglut.so.3"))
                         (on-freebsd (load-shared-object "libglut.so"))
+                        (on-dragonfly (load-shared-object "libglut.so"))
                         (on-openbsd (begin (load-shared-object "libXmu.so.10.0")
                                       (load-shared-object "libGLU.so.7.0")
                                       (load-shared-object "libglut.so.3.7")))
