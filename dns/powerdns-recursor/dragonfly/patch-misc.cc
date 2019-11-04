--- misc.cc.orig	2019-07-15 08:32:59 UTC
+++ misc.cc
@@ -57,7 +57,7 @@
 #include <sys/types.h>
 #include <pwd.h>
 #include <grp.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <pthread_np.h>
 #endif
 #ifdef __NetBSD__
