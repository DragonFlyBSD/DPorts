--- tac_plus/report.c.orig	2000-08-04 09:27:20.000000000 +0000
+++ tac_plus/report.c
@@ -69,7 +69,6 @@ va_dcl				/* no terminating semi-colon *
 
 
     if (console) {
-	extern int errno;
 	
 	if (!ostream)
 	    ostream = fopen("/dev/console", "w");
