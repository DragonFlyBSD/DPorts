--- src/minicom.c.orig	2022-10-04 22:05:37.531569000 +0200
+++ src/minicom.c	2022-10-04 22:05:46.961356000 +0200
@@ -1543,9 +1543,6 @@
   }
 #endif
 
-  /* On some Linux systems SIGALRM is masked by default. Unmask it */  
-  sigrelse(SIGALRM);
-
   keyboard(KINSTALL, 0);
 
   if (strcmp(P_BACKSPACE, "BS") != 0)
