--- arp_lookup_bsd.c.orig	2020-04-27 17:30:04 UTC
+++ arp_lookup_bsd.c
@@ -29,6 +29,9 @@ See the GNU General Public License for m
 #include <arpa/inet.h>
 #include <sys/sysctl.h>
 #include <sys/types.h>
+#include <stdio.h>
+#include <stdlib.h>
+#include <string.h>
 #include "arp.h"
 
 #define ROUNDUP(a) \
