--- src/mpeg2dec/mpeg2dec.c.orig	1996-07-19 22:27:38 UTC
+++ src/mpeg2dec/mpeg2dec.c
@@ -32,6 +32,7 @@
 #include <stdlib.h>
 #include <ctype.h>
 #include <fcntl.h>
+#include <unistd.h>	/* for lseek() */
 
 #define GLOBAL
 #include "config.h"
