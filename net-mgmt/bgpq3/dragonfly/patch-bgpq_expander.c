--- bgpq_expander.ci.orig	2016-10-14 18:55:28.000000000 +0300
+++ bgpq_expander.c
@@ -3,6 +3,7 @@
 #endif
 
 #include <sys/types.h>
+#include <sys/select.h> /* for select() */
 #include <sys/socket.h>
 
 #include <assert.h>
