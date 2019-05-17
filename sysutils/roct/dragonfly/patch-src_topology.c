--- src/topology.c.orig	2018-11-15 20:11:47 UTC
+++ src/topology.c
@@ -28,7 +28,7 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <dirent.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 #include <string.h>
