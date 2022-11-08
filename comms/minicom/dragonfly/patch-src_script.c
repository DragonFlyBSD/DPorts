--- src/script.c.orig	2022-10-04 22:03:53.223933000 +0200
+++ src/script.c	2022-10-04 22:04:05.933645000 +0200
@@ -1092,9 +1092,6 @@
 #if 0 /* Shouldn't need this.. */
   signal(SIGHUP, SIG_IGN);
 #endif
-  /* On some Linux systems SIGALRM is masked by default. Unmask it */  
-  sigrelse(SIGALRM);  
-
   /* initialize locale support */
   setlocale(LC_ALL, "");
   bindtextdomain(PACKAGE, LOCALEDIR);
