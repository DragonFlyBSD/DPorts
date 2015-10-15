--- os.h.bak	2015-10-04 11:31:20.000000000 +0300
+++ os.h
@@ -69,7 +69,7 @@
 #include <sys/mib.h>
 #include <arpa/inet.h>
 #include <net/if.h>
-#elif __FreeBSD__           /* F R E E B S D */
+#elif __FreeBSD__ || __DragonFly__           /* F R E E B S D */
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdarg.h>
