--- src/ipstrings.c.orig	2015-12-05 17:20:28.844356000 +0100
+++ src/ipstrings.c	2015-12-05 17:21:19.714838000 +0100
@@ -49,6 +49,7 @@ Include Files
 #include <limits.h>
 #include <unistd.h>
 #include <time.h>
+#include <errno.h>
 
 
 
@@ -247,7 +248,6 @@ typedef struct {
 Global variables
 ------------------------------------------------------------------------
 */
-extern int errno;
 extern char *pcap_version[];
 
 
