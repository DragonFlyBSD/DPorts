--- misc.cc.orig	2020-07-15 21:43:28 UTC
+++ misc.cc
@@ -58,7 +58,7 @@
 #include <pwd.h>
 #include <grp.h>
 #include <limits.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <pthread_np.h>
 #endif
 #ifdef __NetBSD__
