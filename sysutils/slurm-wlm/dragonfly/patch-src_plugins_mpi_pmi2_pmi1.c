--- src/plugins/mpi/pmi2/pmi1.c.orig	2019-04-12 04:20:25 UTC
+++ src/plugins/mpi/pmi2/pmi1.c
@@ -37,7 +37,7 @@
 
 #include "config.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/socket.h> /* AF_INET */
 #endif
 
