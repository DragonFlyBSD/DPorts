--- src/os/unix/SerialPortUNIX.cxx.orig
+++ src/os/unix/SerialPortUNIX.cxx
@@ -17,7 +17,11 @@
 
 #include <fcntl.h>
 #include <unistd.h>
+#ifdef __DragonFly__
+#include <termios.h>
+#else
 #include <sys/termios.h>
+#endif
 #include <sys/ioctl.h>
 #include <cstring>
 
