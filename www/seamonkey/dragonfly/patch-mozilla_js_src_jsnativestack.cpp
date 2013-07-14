--- mozilla/js/src/jsnativestack.cpp.orig	2013-06-18 11:01:26.000000000 +0000
+++ mozilla/js/src/jsnativestack.cpp
@@ -19,7 +19,7 @@
 #elif defined(XP_MACOSX) || defined(DARWIN) || defined(XP_UNIX)
 # include <pthread.h>
 
-# if defined(__FreeBSD__) || defined(__OpenBSD__)
+# if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #  include <pthread_np.h>
 # endif
 
@@ -117,7 +117,8 @@ js::GetNativeStackBaseImpl()
     pthread_attr_init(&sattr);
 #  if defined(__OpenBSD__)
     stack_t ss;
-#  elif defined(PTHREAD_NP_H) || defined(_PTHREAD_NP_H_) || defined(NETBSD)
+#  elif defined(PTHREAD_NP_H) || defined(_PTHREAD_NP_H_) || defined(NETBSD) || \
+   defined(__DragonFly__)
     /* e.g. on FreeBSD 4.8 or newer, neundorf@kde.org */
     pthread_attr_get_np(thread, &sattr);
 #  else
