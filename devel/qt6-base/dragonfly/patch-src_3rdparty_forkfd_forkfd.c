--- src/3rdparty/forkfd/forkfd.c.orig
+++ src/3rdparty/forkfd/forkfd.c
@@ -930,6 +930,8 @@
 #  include "forkfd_freebsd.c"
 #elif defined(__linux__)
 #  include "forkfd_linux.c"
+#elif defined(__DragonFly__)
+#  include "forkfd_dragonfly.c"
 #else
 int system_has_forkfd()
 {
