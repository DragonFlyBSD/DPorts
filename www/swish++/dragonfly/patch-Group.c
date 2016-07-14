--- Group.c.orig	2005-01-02 22:10:25.000000000 +0200
+++ Group.c
@@ -20,6 +20,7 @@
 */
 
 // standard
+#include <cstdlib> // for exit()
 #include <sys/types.h>                          /* needed by FreeBSD systems */
 #include <grp.h>                                /* for getgrnam(3) */
 
