--- cotty-0.4c.c.intermediate	2016-06-27 09:51:20 UTC
+++ cotty-0.4c.c
@@ -229,7 +229,7 @@ Solaris 2 (without termios resetting)
 #include <linux/limits.h>
 #define LEAVE_PROCESS_GROUP() setpgrp()
 
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 /* Reported to work on FreeBSD 4.x and OpenBSD 2.9 */
 #define PTY_BSD_64
 #undef PTY_BSD_256
