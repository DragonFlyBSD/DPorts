--- src/unix/SerialPortUNIX.cxx.orig	2018-06-10 12:14:00 UTC
+++ src/unix/SerialPortUNIX.cxx
@@ -19,7 +19,11 @@
 #include <sys/stat.h>
 #include <fcntl.h>
 #include <unistd.h>
+#if !defined(__DragonFly__) && !defined(_FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 #include <sys/types.h>
 #include <sys/ioctl.h>
 #include <cstring>
