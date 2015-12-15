--- src/ipaudit.c.orig	2015-12-05 17:19:07.823588000 +0100
+++ src/ipaudit.c	2015-12-05 17:21:00.874659000 +0100
@@ -48,6 +48,7 @@ Include Files
 #include <fcntl.h>
 #include <time.h>
 #include <netinet/in.h>
+#include <errno.h>
 #include "hash.h"
 
 
@@ -217,7 +218,6 @@ typedef struct {
 Global variables
 ------------------------------------------------------------------------
 */
-extern int errno;
 extern char pcap_version[];
 
 
