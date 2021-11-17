--- lib/ephy-sync-utils.c.orig	2021-11-16 13:19:59.580937000 +0100
+++ lib/ephy-sync-utils.c	2021-11-16 13:20:12.170656000 +0100
@@ -30,7 +30,7 @@
 #include <stdio.h>
 #include <string.h>
 #include <webkit2/webkit2.h>
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/random.h>
 #elif defined(__OpenBSD__)
 #include <unistd.h>
