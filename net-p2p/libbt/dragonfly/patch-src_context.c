--- src/context.c.orig	2007-05-29 21:10:47 UTC
+++ src/context.c
@@ -259,7 +259,9 @@ btresponse( btContext *ctx, int download
     int i,j, skip=0;
     struct sockaddr_in target;
     time_t now;
-  
+
+    target.sin_port = 0; /* suppress gcc warning */
+
     if (!dl) 
     {
 	/* fix for thread timing in interactive clients */
