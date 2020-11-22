--- camlibs/ptp2/ptpip.c.orig	2019-02-05 07:18:06 UTC
+++ camlibs/ptp2/ptpip.c
@@ -46,6 +46,7 @@
 #else
 # include <sys/socket.h>
 # include <netinet/in.h>
+# include <arpa/inet.h>	/* for inet_aton() */
 #endif
 
 #include <gphoto2/gphoto2-library.h>
