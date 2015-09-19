--- sitelib/ypsilon/gl.scm.orig	2008-12-23 10:55:52.000000000 +0200
+++ sitelib/ypsilon/gl.scm
@@ -1240,6 +1240,7 @@
                       (on-windows (load-shared-object "opengl32.dll"))
                       (on-linux   (load-shared-object "libGL.so.1"))
                       (on-freebsd (load-shared-object "libGL.so"))
+                      (on-dragonfly (load-shared-object "libGL.so"))
                       (on-openbsd (load-shared-object "libGL.so.7.3"))
                       (else
                        (assertion-violation #f "can not locate OpenGL library, unknown operating system"))))
