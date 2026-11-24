--- daemon/loader.c.orig
+++ daemon/loader.c
@@ -30,7 +30,7 @@
 
 #include <unistd.h>
 #include <fcntl.h>
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #  include <pty.h>                /* forkpty() */
 #else
 #  include <sys/types.h>
