--- js/src/jsnativestack.cpp.orig	2013-09-11 03:22:33.000000000 +0000
+++ js/src/jsnativestack.cpp
@@ -114,7 +114,8 @@ js::GetNativeStackBaseImpl()
     pthread_attr_init(&sattr);
 #  if defined(__OpenBSD__)
     stack_t ss;
-#  elif defined(PTHREAD_NP_H) || defined(_PTHREAD_NP_H_) || defined(NETBSD)
+#  elif defined(PTHREAD_NP_H) || defined(_PTHREAD_NP_H_) || defined(NETBSD) \
+     || defined(__DragonFly__)
     /* e.g. on FreeBSD 4.8 or newer, neundorf@kde.org */
     pthread_attr_get_np(thread, &sattr);
 #  else
