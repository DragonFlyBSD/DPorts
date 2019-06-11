--- contrib/japanese/gdevmjc.c.orig	2019-04-04 07:43:14 UTC
+++ contrib/japanese/gdevmjc.c
@@ -53,6 +53,12 @@ copies.  */
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
