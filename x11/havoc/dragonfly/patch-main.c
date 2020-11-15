--- main.c.intermediate	2020-11-15 07:13:41.000000000 +0000
+++ main.c
@@ -15,7 +15,7 @@
 #include <unistd.h>
 #ifdef __linux__
 #include <pty.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/ttycom.h>
 #include <sys/types.h>
 #include <sys/ioctl.h>
