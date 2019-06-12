--- libsm/notify.c.orig	2019-02-15 10:30:19 UTC
+++ libsm/notify.c
@@ -16,6 +16,7 @@
 #include <sm/notify.h>
 
 #include <sys/types.h>
+#include <sys/select.h>
 #include <signal.h>
 #include <stdio.h>
 #include <stdlib.h>
