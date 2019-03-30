--- artiste.cc.intermediate	2019-03-20 08:11:50 UTC
+++ artiste.cc
@@ -7,7 +7,11 @@
 #include <stdio.h>
 #include <signal.h>
 #include <sys/ioctl.h>
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 #include <sys/select.h>
 #include <gflags/gflags.h>
 #include <glog/logging.h>
