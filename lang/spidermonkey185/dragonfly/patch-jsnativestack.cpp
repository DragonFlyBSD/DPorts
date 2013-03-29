--- jsnativestack.cpp.orig	2011-03-31 19:08:36.000000000 +0000
+++ jsnativestack.cpp
@@ -50,7 +50,7 @@
 #elif defined(XP_MACOSX) || defined(DARWIN) || defined(XP_UNIX)
 # include <pthread.h>
 
-# if defined(__FreeBSD__)
+# if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <pthread_np.h>
 # endif
 
