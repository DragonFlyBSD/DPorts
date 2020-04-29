--- src/system_info.c.intermediate	2020-04-29 15:27:43 UTC
+++ src/system_info.c
@@ -6,6 +6,9 @@
 * Please visit the FastDFS Home Page http://www.csource.org/ for more detail.
 **/
 
+/* sys/user.h has to come first */
+#include <sys/user.h>
+
 #include <time.h>
 #include <stdio.h>
 #include <stdlib.h>
