--- src/i_fbsdvideo.c.orig	2001-12-02 08:51:58 UTC
+++ src/i_fbsdvideo.c
@@ -8,7 +8,7 @@
 #include <sys/fbio.h>
 #include <sys/kbio.h>
 #include <sys/consio.h>
-#include <sys/termios.h>
+#include <termios.h>
 #include <sys/mman.h>
 #include <stdlib.h>
 #include <unistd.h>
