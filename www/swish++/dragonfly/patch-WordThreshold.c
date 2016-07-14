--- WordThreshold.c.orig	2005-01-02 22:10:25.000000000 +0200
+++ WordThreshold.c
@@ -22,6 +22,7 @@
 // standard
 #include <sys/types.h>                          /* needed by FreeBSD systems */
 #include <unistd.h>                             /* for geteuid(2) */
+#include <cstdlib> // for exit()
 
 // local
 #include "exit_codes.h"
