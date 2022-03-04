--- src/item.c.orig	2021-10-12 09:17:56 UTC
+++ src/item.c
@@ -26,6 +26,7 @@
 #include<unistd.h>
 #include<string.h>
 #include<errno.h>
+#include<signal.h>
 #include<sys/wait.h>
 #include<linux/input-event-codes.h>
 
