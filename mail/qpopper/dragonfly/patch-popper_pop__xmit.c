--- popper/pop_xmit.c.orig	2011-05-30 19:13:40 UTC
+++ popper/pop_xmit.c
@@ -236,7 +236,7 @@ POP *p;
                              temp_xmit, STRERROR(errno), errno );
                 (void) _exit ( 1 );
             }
-            (void) execl ( p->pMail_command, "send-mail", "-t", "-i", "-oem", NULLCP );
+            (void) execl ( p->pMail_command, "sendmail", "-t", "-i", "-oem", NULLCP );
             (void) _exit ( 1 );
 
         case -1:
