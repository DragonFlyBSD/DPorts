--- spa/plugins/support/loop.c.orig	2023-10-06 09:37:06 UTC
+++ spa/plugins/support/loop.c
@@ -8,6 +8,7 @@
 #include <signal.h>
 #include <stdlib.h>
 #include <stdio.h>
+#include <stdint.h>
 #include <pthread.h>
 
 #include <spa/support/loop.h>
