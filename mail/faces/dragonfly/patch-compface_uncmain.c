--- compface/uncmain.c.orig	Wed Nov  5 22:02:58 2025
+++ compface/uncmain.c	Wed Nov
@@ -15,6 +15,8 @@
 
 #include <errno.h>
 #include <fcntl.h>
+#include <string.h>
+#include <unistd.h>
 #include <stdio.h>
 #include "compface.h"
 
