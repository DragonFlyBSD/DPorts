--- usr/sbin/pkcsslotd/log.c.orig	2018-11-16 14:53:03 UTC
+++ usr/sbin/pkcsslotd/log.c
@@ -10,6 +10,7 @@
 
 #include <stdio.h>
 #include <stdlib.h>
+#include <stdint.h>
 #include <string.h>
 #include <syslog.h>
 #include <stdarg.h>
@@ -463,8 +464,8 @@ BOOL PKCS_Log(pLogHandle phLog, char *Fo
 #endif                          /* DEV */
 
         if (WriteNow) {
-            fprintf(stderr, "%s[%d.%d]: %s\n", pInfo->Descrip, getpid(),
-                    (int) pthread_self(), Buffer);
+            fprintf(stderr, "%s[%d.%ju]: %s\n", pInfo->Descrip, getpid(),
+                    (uintmax_t) pthread_self(), Buffer);
         }
     }
 
