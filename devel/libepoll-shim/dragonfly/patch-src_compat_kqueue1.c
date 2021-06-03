--- src/compat_kqueue1.c.orig	2021-06-01 09:17:29.014922000 +0200
+++ src/compat_kqueue1.c	2021-06-03 18:59:56.731661000 +0200
@@ -6,6 +6,7 @@
 #include <sys/time.h>
 
 #include <errno.h>
+#include <stdlib.h>
 
 #include <fcntl.h>
 #include <unistd.h>
