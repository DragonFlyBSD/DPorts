--- libanjuta/anjuta-utils.c.intermediate	2019-03-20 08:26:29 UTC
+++ libanjuta/anjuta-utils.c
@@ -39,7 +39,11 @@
 #include <sys/stat.h>
 #include <sys/types.h>
 #include <sys/fcntl.h>
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 #include <dirent.h>
 #include <unistd.h>
 #include <stdio.h>
