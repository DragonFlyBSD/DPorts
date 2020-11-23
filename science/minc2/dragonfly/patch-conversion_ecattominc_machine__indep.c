--- conversion/ecattominc/machine_indep.c.orig	2012-09-24 17:35:36 UTC
+++ conversion/ecattominc/machine_indep.c
@@ -1,6 +1,7 @@
 #include <stdint.h>
 #include <stdlib.h>
 #include <string.h>
+#include <arpa/inet.h>
 
 #ifdef _WIN32
 unsigned short ntohs(unsigned short us) {
