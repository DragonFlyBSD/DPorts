--- src/fixVMware.c.orig	2001-03-14 17:33:53 UTC
+++ src/fixVMware.c
@@ -22,6 +22,8 @@
 #include <signal.h>
 #include <unistd.h>
 #include <pthread.h>
+#include <strings.h> /* for bzero() */
+#include <stdlib.h> /* for atoi() */
 
 #include "hotkeys.h"
 
