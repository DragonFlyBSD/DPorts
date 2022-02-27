--- plugins/net/net.c.intermediate	2022-02-09 12:55:47.000000000 +0000
+++ plugins/net/net.c
@@ -25,7 +25,7 @@
 
 #include "../chart/chart.h"
 
-#ifdef __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #include <sys/types.h>
 #include <sys/param.h>
 #include <sys/socket.h>
@@ -115,7 +115,7 @@ end:
     RET(TRUE);
 
 }
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 static inline	gboolean
 parse_stats(char *buf,
 	    int prx_idx,
