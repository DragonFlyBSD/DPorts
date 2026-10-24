--- usr/sbin/pkcsslotd/log.c.orig
+++ usr/sbin/pkcsslotd/log.c
@@ -464,7 +464,7 @@
 
         if (WriteNow) {
             fprintf(stderr, "%s[%d.%lu]: %s\n", pInfo->Descrip, getpid(),
-                    pthread_self(), buf);
+                    (unsigned long) pthread_self(), buf);
         }
     }
 
@@ -483,7 +483,7 @@
 
             /* Date/Time stamp, descrip, Error message */
             fprintf(fd, "%s %s[%d.%lu]: ", timebuf, pInfo->Descrip, getpid(),
-                    pthread_self());
+                    (unsigned long) pthread_self());
             fprintf(fd, "%s\n", buf);
             fflush(fd);
             fclose(fd);
