
$FreeBSD: ports/net-mgmt/ramond/files/patch-src_main.h,v 1.3 2013/02/01 15:41:58 svnexp Exp $

--- src/main.h.orig
+++ src/main.h
@@ -1,5 +1,6 @@
 #include <stdlib.h>
 #include <stdio.h>
+#include <fcntl.h>
 #include <errno.h>
 #include <unistd.h>
 #include <time.h>
