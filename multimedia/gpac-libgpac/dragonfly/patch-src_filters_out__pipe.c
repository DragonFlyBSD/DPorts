For mkfifo()

--- src/filters/out_pipe.c.orig	2020-06-16 16:17:17 UTC
+++ src/filters/out_pipe.c
@@ -36,7 +36,7 @@
 #include <fcntl.h>
 #include <unistd.h>
 
-#ifdef GPAC_CONFIG_LINUX
+#if defined(GPAC_CONFIG_LINUX) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/stat.h>
 #endif
