--- jsnativestack.cpp.orig	2013-02-11 22:33:22 UTC
+++ jsnativestack.cpp
@@ -19,7 +19,7 @@
 #elif defined(XP_MACOSX) || defined(DARWIN) || defined(XP_UNIX)
 # include <pthread.h>
 
-# if defined(__FreeBSD__) || defined(__OpenBSD__)
+# if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #  include <pthread_np.h>
 # endif
 
