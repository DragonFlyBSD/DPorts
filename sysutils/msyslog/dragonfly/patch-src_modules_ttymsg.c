--- src/modules/ttymsg.c.orig	2014-06-22 12:55:44.538156000 +0000
+++ src/modules/ttymsg.c
@@ -51,6 +51,10 @@
 # define MAXNAMLEN 128
 # warning Using MAXNAMLEN of 128
 #endif
+#ifndef MAXNAMLEN
+#include <limits.h>
+#define MAXNAMLEN NAME_MAX
+#endif
 #include <errno.h>
 #include <fcntl.h>
 #ifdef HAVE_PATHS_H
