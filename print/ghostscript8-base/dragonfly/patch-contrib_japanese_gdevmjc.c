--- contrib/japanese/gdevmjc.c.orig	2007-09-25 13:31:24 UTC
+++ contrib/japanese/gdevmjc.c
@@ -54,6 +54,12 @@ copies.  */
 #include "gdevpcl.h"
 #include "gdevmjc.h"
 
+#ifndef __WORDSIZE
+#ifdef __DragonFly__
+#define __WORDSIZE	64
+#endif
+#endif
+
 /***
  *** Note: Original driver gdevcdj.c for HP color printer was written 
  ***       by a user,  George Cameron.
