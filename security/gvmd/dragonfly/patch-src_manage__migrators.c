--- src/manage_migrators.c.orig	2021-02-02 14:44:09 UTC
+++ src/manage_migrators.c
@@ -123,7 +123,7 @@
 #include <sys/param.h>
 #include <sys/stat.h>
 #include <time.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/wait.h>
 #endif
 #include "manage_migrators_219_to_220_names.h"
