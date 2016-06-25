--- radio.c.intermediate	2016-06-24 17:36:28.000000000 +0300
+++ radio.c
@@ -66,6 +66,9 @@
 #elif defined(linux)
 #include <linux/bttv.h>
 #include <sys/soundcard.h>
+#elif defined(__DragonFly__)
+#include <sys/soundcard.h>
+#include <dev/video/bktr/ioctl_bt848.h>
 #elif defined(__FreeBSD__)
 #include <sys/soundcard.h>
 #include <dev/bktr/ioctl_bt848.h>
