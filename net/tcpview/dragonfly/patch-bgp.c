--- bgp.c.orig	1993-04-22 20:39:47 UTC
+++ bgp.c
@@ -36,11 +36,16 @@ static char rcsid[] =
 #endif
 
 #include <stdio.h>
+#include <stdlib.h>
+#include <ctype.h>
 #include <sys/types.h>
 #include <netinet/in.h>
+#include <arpa/inet.h> /* for inet_ntoa() */
 #include "os.h"
 #include "md.h"
 
+int hexread(void *, int);
+
 int PrintFrames = 0;
 
 #ifdef __STDC__
@@ -150,6 +155,7 @@ void bgp_update(length)
 {
   int j, tpal, nets;
   long ip;
+  struct in_addr inet_saddr;
 
   printf("UPDATE ");
   tpal = getword(); /* Total Path Attributes Length */
@@ -169,7 +175,8 @@ void bgp_update(length)
   j = 0;
   while(nets--) {
     ip = getlword();
-    printf("\t%s ",inet_ntoa(htonl(ip)));
+    inet_saddr.s_addr = htonl(ip);
+    printf("\t%s ",inet_ntoa(inet_saddr));
     if ( j++ == 4 ) {
       j = 0;
       putchar('\n');
@@ -337,6 +344,7 @@ int len;
   int attr_flag, attr_type, extended;
   int i, adl, origin, asn;
   long ip;
+  struct in_addr inet_saddr;
 
   while(len) {
     attr_flag = getbyte();
@@ -381,7 +389,8 @@ int len;
     case 3:
       ip = getlword();
       len -= 4;
-      printf("NEXT_HOP: %s  ",inet_ntoa(htonl(ip)));
+      inet_saddr.s_addr = htonl(ip);
+      printf("NEXT_HOP: %s  ",inet_ntoa(inet_saddr));
       break;
     case 4:
       printf("UNREACHABLE  ");
