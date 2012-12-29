--- libv4lconvert/control/libv4lcontrol.c.intermediate	2012-12-29 11:25:43.106059000 +0100
+++ libv4lconvert/control/libv4lcontrol.c	2012-12-29 11:26:33.866130000 +0100
@@ -456,7 +456,7 @@
 	while (isspace(*start)) start++;
 	n = strlen(start);
 	while (n > 0 && isspace(start[n-1])) --n;
-#ifndef __FreeBSD__
+#if !( defined(__FreeBSD__) || defined(__DragonFly__) )
 	trimmed_dmi = strndupa(start, n);
 #else
 	trimmed_dmi = (char *)alloca(n + 1);
