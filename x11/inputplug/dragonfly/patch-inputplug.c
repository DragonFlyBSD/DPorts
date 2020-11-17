--- inputplug.c.intermediate	2020-11-17 06:46:08.000000000 +0000
+++ inputplug.c
@@ -3,9 +3,7 @@
 #include <assert.h>
 #include <unistd.h>
 #include <errno.h>
-#if __FreeBSD__
 #include <signal.h>
-#endif
 #include <stdio.h>
 #include <stdbool.h>
 #include <stdint.h>
