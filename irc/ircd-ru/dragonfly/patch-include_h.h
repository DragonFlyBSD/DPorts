--- include/h.h.orig	2006-07-14 13:53:59.000000000 +0000
+++ include/h.h
@@ -27,6 +27,7 @@
 
 /* $Id: h.h,v 1.1.1.3.2.23 2003/08/02 08:41:55 rzhe Exp $ */
 
+#include <errno.h>
 #include "send.h"
 #include "ircsprintf.h"
 #ifdef DO_DNSBL
@@ -168,7 +169,7 @@ extern char 	 *getreply(int);
 extern char 	 *strerror(int);
 extern int  	  dgets(int, char *, int);
 extern char 	 *inetntoa(char *);
-extern int  	  dbufalloc, dbufblocks, debuglevel, errno, h_errno;
+extern int  	  dbufalloc, dbufblocks, debuglevel, h_errno;
 extern int  	  highest_fd, debuglevel, portnum,
     debugtty, maxusersperchannel;
 extern int  	  readcalls, udpfd, resfd;
