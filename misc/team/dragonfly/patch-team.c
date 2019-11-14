--- team.c.intermediate	2019-11-08 19:05:41.000000000 +0000
+++ team.c
@@ -86,6 +86,10 @@ static char Notice[] =
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
@@ -176,16 +180,7 @@ local bool		verbose = false;
 local bool		report = true;
 local bool		guyhaderror = false;
 
-extern int		errno;
 local time_t		origin;
-
-extern time_t		time of((time_t *));
-extern int		atoi of((const char *));
-extern char		*malloc of((unsigned));
-extern char		*calloc of((address,unsigned));
-extern char		*strchr of((const char *,int));
-
-extern int		getopt of((int,char *[],const char *));
 extern char		*optarg;
 extern int		optind;
 
