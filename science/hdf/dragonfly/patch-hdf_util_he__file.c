--- hdf/util/he_file.c.orig	2020-03-03 17:40:50 UTC
+++ hdf/util/he_file.c
@@ -17,7 +17,7 @@
 #include "he.h"
 
 /* get the prototype for the wait() func. */
-#if defined SUN | defined HP9000 | defined IRIX | defined UNIX386
+#if defined SUN | defined HP9000 | defined IRIX | defined UNIX386 | defined(__DragonFly__)
 #include <sys/wait.h>
 #endif /* SUN | HP9000 */
 #ifdef H4_HAVE_UNISTD_H
