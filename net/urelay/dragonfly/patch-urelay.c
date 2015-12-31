--- urelay.c.orig	2015-12-26 18:34:27.091155000 +0100
+++ urelay.c	2015-12-26 18:34:42.591227000 +0100
@@ -26,6 +26,7 @@
 
 #include <sys/types.h>
 #include <sys/socket.h>
+#include <sys/select.h>
 
 #include <errno.h>
 #include <fcntl.h>
