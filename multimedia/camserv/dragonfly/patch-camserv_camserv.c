--- camserv/camserv.c.orig	2002-05-12 20:05:55.000000000 +0200
+++ camserv/camserv.c
@@ -25,6 +25,9 @@
 #include <stdarg.h>
 #include <signal.h>
 #include <sys/param.h>
+#ifdef __DragonFly__
+#include <errno.h>
+#endif
 
 #include "camconfig.h"
 #include "camshm.h"
@@ -153,7 +156,9 @@ int main( int argc, char *argv[] ){
   CamConfig *camcfg;
   char *shm_segment, tmpbuf[ 1024 ], cfg_path[ MAXPATHLEN ];
   int fd, shm_alloc, donecfg;
+#ifndef __DragonFly__
   extern int errno;
+#endif
 
   donecfg = 0;
   if (argc >= 2) {
