--- js/src/jsnativestack.cpp.orig	2012-11-30 04:12:25.000000000 +0100
+++ js/src/jsnativestack.cpp	2012-12-26 13:38:18.131938000 +0100
@@ -19,10 +19,16 @@
 #elif defined(XP_MACOSX) || defined(DARWIN) || defined(XP_UNIX)
 # include <pthread.h>
 
-# if defined(__FreeBSD__) || defined(__OpenBSD__)
+# if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #  include <pthread_np.h>
 # endif
 
+# if defined(__FreeBSD__) 
+_Pragma("GCC visibility push(default)")
+#  include <pthread_np.h>
+_Pragma("GCC visibility pop")
+# endif
+
 #else
 # error "Unsupported platform"
 
@@ -114,7 +120,8 @@
     pthread_attr_init(&sattr);
 #  if defined(__OpenBSD__)
     stack_t ss;
-#  elif defined(PTHREAD_NP_H) || defined(_PTHREAD_NP_H_) || defined(NETBSD)
+#  elif defined(PTHREAD_NP_H) || defined(_PTHREAD_NP_H_) || defined(NETBSD) || \
+   defined(__DragonFly__)
     /* e.g. on FreeBSD 4.8 or newer, neundorf@kde.org */
     pthread_attr_get_np(thread, &sattr);
 #  else
