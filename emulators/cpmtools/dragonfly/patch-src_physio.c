--- src/physio.c.orig	1994-05-03 22:47:23 UTC
+++ src/physio.c
@@ -3,6 +3,7 @@
 #include <stdio.h>
 #include "cpmio.h"
 #include <fcntl.h>
+#include <unistd.h>	/* for lseek() */
 
 /*
  * Write physical sector to floppy disk file
