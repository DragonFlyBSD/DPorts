--- lib/ephy-sync-utils.c.orig
+++ lib/ephy-sync-utils.c
@@ -30,7 +30,7 @@
 #include <stdio.h>
 #include <string.h>
 #include <webkit/webkit.h>
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/random.h>
 #elif defined(__FreeBSD__) || defined(__OpenBSD__)
 #include <unistd.h>
