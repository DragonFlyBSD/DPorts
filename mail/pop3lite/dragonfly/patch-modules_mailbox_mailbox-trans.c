--- modules/mailbox/mailbox-trans.c.orig	2001-08-19 06:18:12.000000000 +0200
+++ modules/mailbox/mailbox-trans.c
@@ -48,7 +48,9 @@
 
 static const char rcsid[]="$Id: mailbox-trans.c,v 1.16.2.1 2001/08/19 04:18:12 algernon Exp $";
 
+#ifndef __DragonFly__
 extern int errno;
+#endif
 
 /*
  * FORWARD DECLARATIONS
