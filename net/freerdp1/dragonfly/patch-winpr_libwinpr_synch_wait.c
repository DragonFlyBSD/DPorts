--- winpr/libwinpr/synch/wait.c.orig	2014-09-11 22:46:32 UTC
+++ winpr/libwinpr/synch/wait.c
@@ -38,6 +38,8 @@
 #endif
 #endif
 
+#include <signal.h> /* for pthread_kill() */
+
 #include <assert.h>
 #include <errno.h>
 
