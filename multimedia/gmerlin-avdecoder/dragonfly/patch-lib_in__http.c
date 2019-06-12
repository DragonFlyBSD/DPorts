--- lib/in_http.c.orig	2012-06-08 11:51:34 UTC
+++ lib/in_http.c
@@ -22,6 +22,7 @@
 #include <stdlib.h>
 #include <string.h>
 #include <stdio.h>
+#include <sys/select.h>
 #include <unistd.h>
 #include <avdec_private.h>
 #include <http.h>
