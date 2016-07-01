--- xjdclient.c.orig	1998-08-31 12:56:56.000000000 +0200
+++ xjdclient.c
@@ -40,7 +40,11 @@
 
 #define CVERBOSE 0
 int chk_cnt=0;
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 unsigned char host[51] = {"localhost"};
 unsigned char yn[2];
 unsigned int portno = XJ_PORTNO;
