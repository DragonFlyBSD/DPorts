--- camserv/picture_loop.c.orig	2002-03-11 02:51:44.000000000 +0200
+++ camserv/picture_loop.c
@@ -4,6 +4,9 @@
 #include <dlfcn.h>
 #include <sys/types.h>
 #include <signal.h>
+#ifdef __DragonFly__
+#include <errno.h>
+#endif
 
 #include "camserv.h"
 #include "camconfig.h"
@@ -244,7 +247,9 @@ int picture_single( CamConfig *ccfg, con
 {
   Filter *filters;
   Video_Funcs vfuncs;
+#ifndef __DragonFly__
   extern int errno;
+#endif
   void *vid_device = NULL;
   char *pic_snap = NULL, vidsec[ 1024 ];
   Video_Geometry geom;
