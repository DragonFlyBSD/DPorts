--- modules/event_xmlrpc/xmlrpc_send.c.orig	2017-11-27 15:44:50 UTC
+++ modules/event_xmlrpc/xmlrpc_send.c
@@ -30,6 +30,7 @@
 #include "../../pt.h"
 #include "xmlrpc_send.h"
 #include "event_xmlrpc.h"
+#include <sys/uio.h>	/* for writev() */
 #include <fcntl.h>
 #include <unistd.h>
 
