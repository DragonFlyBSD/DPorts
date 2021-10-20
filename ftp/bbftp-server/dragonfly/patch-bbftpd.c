--- bbftpd.c.intermediate	2021-03-10 08:13:02.000000000 +0000
+++ bbftpd.c
@@ -72,6 +72,7 @@
 #include <syslog.h>
 #include <sys/socket.h>
 #include <sys/wait.h>
+#include <ctype.h> /* for toupper() */
 #if TIME_WITH_SYS_TIME
 # include <sys/time.h>
 # include <time.h>
@@ -382,6 +383,7 @@ gss_cred_id_t   server_creds;
 */
 struct  timeval  tstart;
 
+int
 main (argc,argv,envp)
     int     argc ;
     char    **argv ;
@@ -1304,6 +1306,7 @@ loopv1:
             }
         }
     }
+    return 0;
 }
 
 void clean_child() 
