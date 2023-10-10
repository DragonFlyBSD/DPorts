--- team.c.orig	2023-10-04 06:12:35 UTC
+++ team.c
@@ -91,6 +91,10 @@ static char Notice[] =
 #include <sys/file.h>
 #include <sys/stat.h>
 #include <fcntl.h>
+#include <time.h>
+#include <stdlib.h>
+#include <string.h>
+#include <unistd.h>	/* for lseek() */
 #ifdef HAVE_WAIT_H
 #include <sys/wait.h>
 #endif
@@ -186,12 +190,8 @@ local bool		verbose = false;
 local bool		report = true;
 local bool		guyhaderror = false;
 
-extern int		errno;
 local time_t		origin;
 
-extern time_t		time of((time_t *));
-extern int		atoi of((const char *));
-
 /*
   The  regular Unix read and write calls are not guaranteed to process
   all  the  bytes  requested.  These  procedures guarantee that if the
