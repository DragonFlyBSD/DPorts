--- regress/bin/smtpscript.c.orig	2013-06-04 08:13:28.000000000 +0000
+++ regress/bin/smtpscript.c
@@ -30,6 +30,9 @@
 #include <string.h>
 #include <unistd.h>
 #include <vis.h>
+#ifdef __DragonFly__
+#include <netinet/in.h>
+#endif
 
 #include "iobuf.h"
 
