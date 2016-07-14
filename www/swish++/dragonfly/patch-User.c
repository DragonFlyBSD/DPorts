--- User.c.orig	2005-01-02 22:10:25.000000000 +0200
+++ User.c
@@ -20,6 +20,7 @@
 */
 
 // standard
+#include <cstdlib> // for exit()
 #include <pwd.h>                                /* for getpwnam(3) */
 
 // local
