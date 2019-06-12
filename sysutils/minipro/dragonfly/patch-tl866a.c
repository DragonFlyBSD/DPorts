--- tl866a.c.orig	2019-02-27 06:19:06 UTC
+++ tl866a.c
@@ -19,7 +19,7 @@
 #include <string.h>
 #include <stdint.h>
 #include <unistd.h>
-#if defined (__APPLE__) || defined (__FreeBSD__)
+#if defined (__APPLE__) || defined (__FreeBSD__) || defined(__DragonFly__)
 #include <stdio.h>
 #else
 #include <malloc.h>
