--- lib/ephy-sync-utils.c.intermediate	2020-11-14 05:28:17.000000000 +0000
+++ lib/ephy-sync-utils.c
@@ -30,7 +30,7 @@
 #include <libsoup/soup.h>
 #include <stdio.h>
 #include <string.h>
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/random.h>
 #elif defined(__OpenBSD__)
 #include <unistd.h>
