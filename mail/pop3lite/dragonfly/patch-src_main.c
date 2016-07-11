--- src/main.c.orig	2001-05-30 14:38:57.000000000 +0200
+++ src/main.c
@@ -47,7 +47,9 @@
 #	include <netinet/in.h>
 #	include <netdb.h>
 #	include "standalone.h"
+#ifndef __DragonFly__
 int errno;
+#endif
 unsigned long child_cnt = 0;
 char *pidfn = LOCALSTATEDIR "/run/pop3lite.pid";
 pid_t main_pid;
