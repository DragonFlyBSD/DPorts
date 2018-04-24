--- src/sys/rump/net/lib/libshmif/shmif_user.c.orig	2018-04-05 11:39:14 UTC
+++ src/sys/rump/net/lib/libshmif/shmif_user.c
@@ -48,6 +48,8 @@
 
 #include <stdlib.h>
 
+#include <unistd.h>
+
 int
 rumpcomp_shmif_watchsetup(int *kqp, int fd)
 {
@@ -102,7 +104,6 @@ rumpcomp_shmif_watchwait(int kq)
 
 #include <limits.h>
 #include <stdio.h>
-#include <unistd.h>
 
 int
 rumpcomp_shmif_watchsetup(int *inotifyp, int fd)
@@ -171,7 +172,6 @@ rumpcomp_shmif_watchwait(int kq)
 
 #else
 #include <stdio.h>
-#include <unistd.h>
 
 /* a polling default implementation */
 int
