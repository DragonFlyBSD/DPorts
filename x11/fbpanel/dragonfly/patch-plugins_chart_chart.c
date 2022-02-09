--- plugins/chart/chart.c.intermediate	2022-02-09 12:55:47.000000000 +0000
+++ plugins/chart/chart.c
@@ -24,7 +24,7 @@
 #include <string.h>
 #include <sys/time.h>
 #include <time.h>
-#ifdef __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 # include <sys/types.h>
 # include <sys/resource.h>
 # include <sys/sysctl.h>
