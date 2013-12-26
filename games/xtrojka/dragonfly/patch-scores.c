--- scores.c.orig	1996-07-27 18:05:03.000000000 +0000
+++ scores.c
@@ -15,6 +15,7 @@
 
 #include "_strdefs.h"
 
+#include <errno.h>
 #include <stdio.h>
 #include <sys/types.h>
 #include <sys/time.h>
@@ -37,7 +38,6 @@ SCORES cur;
 extern flag is_wizard;
 extern time_t last_time;
 
-extern int errno;
 
 int position;
 
