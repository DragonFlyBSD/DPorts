--- src/support.c.orig	2006-07-14 13:53:59.000000000 +0000
+++ src/support.c
@@ -27,10 +27,6 @@
 
 #define FOREVER for(;;)
 
-extern int  errno;		/*
-				 * ...seems that errno.h doesn't define this
-				 * * everywhere 
-				 */
 extern void outofmemory();
 
 #if !defined( HAVE_STRTOKEN )
