--- common/pipe.c.orig	1995-05-09 08:06:46 UTC
+++ common/pipe.c
@@ -23,6 +23,8 @@
 
 #include <errno.h>
 #include <stdio.h>
+#include <stdlib.h> /* for exit() */
+#include <string.h> /* for strcpy() */
 #include <fcntl.h>
 
 #include "magic.h"
