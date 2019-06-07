--- minipro.c.orig	2019-02-27 06:19:06 UTC
+++ minipro.c
@@ -21,7 +21,7 @@
 #include <string.h>
 #include <stdint.h>
 #include <unistd.h>
-#if defined (__APPLE__) || defined (__FreeBSD__)
+#if defined (__APPLE__) || defined (__FreeBSD__) || defined(__DragonFly__)
 #include <stdio.h>
 #else
 #include <malloc.h>
