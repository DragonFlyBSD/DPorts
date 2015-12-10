--- src/process.c.orig	2015-10-22 15:44:25.000000000 +0200
+++ src/process.c	2015-12-06 11:51:52.076604000 +0100
@@ -268,9 +268,10 @@ int initprocesstree(ProcessTree_T **pt_r
         }
 
         /* The main process in Solaris zones and FreeBSD host doesn't have pid 1, so try to find process which is parent of itself */
+        /* Note: on DragonFly, main process is swapper with pid 0 and ppid -1, so take also this case into consideration */
         int root = -1;
         for (int i = 0; i < *size_r; i++) {
-                if (pt[i].pid == pt[i].ppid) {
+                if ((pt[i].pid == pt[i].ppid) || (pt[i].ppid == -1)) {
                         root = i;
                         break;
                 }
