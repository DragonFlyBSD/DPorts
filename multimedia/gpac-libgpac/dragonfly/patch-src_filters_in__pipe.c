For mkfifo()

--- src/filters/in_pipe.c.orig	2020-06-16 16:17:17 UTC
+++ src/filters/in_pipe.c
@@ -37,7 +37,7 @@
 #include <fcntl.h>
 #include <unistd.h>
 
-#ifdef GPAC_CONFIG_LINUX
+#if defined(GPAC_CONFIG_LINUX) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/stat.h>
 #endif
