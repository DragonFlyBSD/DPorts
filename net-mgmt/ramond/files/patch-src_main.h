
$FreeBSD: net-mgmt/ramond/files/patch-src_main.h 311381 2013-02-01 15:04:00Z ak $

--- src/main.h.orig
+++ src/main.h
@@ -1,5 +1,6 @@
 #include <stdlib.h>
 #include <stdio.h>
+#include <fcntl.h>
 #include <errno.h>
 #include <unistd.h>
 #include <time.h>
