--- qd/agent/callback.c.orig	2000-08-25 21:33:14 UTC
+++ qd/agent/callback.c
@@ -146,7 +146,7 @@ int forward_msg(work, pszDest, ln, debug
       tracef(ln, 0, "fdopen error");
     }
     
-    execl(MAIL_COMMAND, "send-mail", "-t", "-i", "-oem", 0);
+    execl(MAIL_COMMAND, "sendmail", "-t", "-i", "-oem", 0);
     _exit(1);
     
   case -1: /* fork error */
@@ -254,7 +254,7 @@ int reply_msg(work, pszText, flags, ln,
 	tracef(ln, 0, "fdopen error");
       }
       
-      execl(MAIL_COMMAND, "send-mail", "-t", "-i", "-oem", 0);
+      execl(MAIL_COMMAND, "sendmail", "-t", "-i", "-oem", 0);
       _exit(1);
       
     case -1: /* fork error */
