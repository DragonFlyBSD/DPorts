--- lib/path-concat.c.orig	1999-10-10 18:34:46.000000000 +0000
+++ lib/path-concat.c
@@ -21,7 +21,7 @@
 # include <config.h>
 #endif
 
-#ifndef HAVE_MEMPCPY
+#if !defined(HAVE_MEMPCPY) && !defined(__DragonFly__)
 # define mempcpy(D, S, N) ((void *) ((char *) memcpy (D, S, N) + (N)))
 #endif
 
