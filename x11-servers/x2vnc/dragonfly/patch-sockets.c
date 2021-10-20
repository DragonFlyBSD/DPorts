--- sockets.c.orig	2006-05-20 04:23:38 UTC
+++ sockets.c
@@ -30,6 +30,7 @@
 #include <netdb.h>
 #include <x2vnc.h>
 
+int tunnel(char *, char *, int);
 void PrintInHex(char *buf, int len);
 
 Bool errorMessageFromReadExact = True;
