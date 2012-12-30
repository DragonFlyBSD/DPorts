
$FreeBSD: ports/net-mgmt/ramond/files/patch-src_main.h,v 1.2 2012/11/17 06:00:37 svnexp Exp $

--- src/main.h.orig
+++ src/main.h
@@ -1,5 +1,6 @@
 #include <stdlib.h>
 #include <stdio.h>
+#include <fcntl.h>
 #include <errno.h>
 #include <unistd.h>
 #include <time.h>