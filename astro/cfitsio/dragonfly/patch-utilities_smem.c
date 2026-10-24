--- utilities/smem.c.orig	2026-04-27 19:00:54 UTC
+++ utilities/smem.c
@@ -1,7 +1,7 @@
 #include <stdio.h>
 #include <memory.h>
 #include <string.h>
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #else
 #include <malloc.h>
