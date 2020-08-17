Hmmmmmm

--- lib/ipc_setup.c.orig	2020-05-01 11:55:06 UTC
+++ lib/ipc_setup.c
@@ -34,6 +34,9 @@
 #ifdef HAVE_SYS_MMAN_H
 #include <sys/mman.h>
 #endif
+#ifdef __DragonFly__
+#include <sys/ucred.h> /* for struct ucred */
+#endif
 
 #include <qb/qbatomic.h>
 #include <qb/qbipcs.h>
