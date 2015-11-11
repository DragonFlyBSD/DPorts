--- src/miniacc.h.orig	2010-11-01 14:40:44 UTC
+++ src/miniacc.h
@@ -459,7 +459,7 @@
 #  if defined(_AIX) || defined(__AIX__) || defined(__aix__)
 #    define ACC_OS_POSIX_AIX        1
 #    define ACC_INFO_OS_POSIX       "aix"
-#  elif defined(__FreeBSD__)
+#  elif defined(__FreeBSD__) || defined __DragonFly__
 #    define ACC_OS_POSIX_FREEBSD    1
 #    define ACC_INFO_OS_POSIX       "freebsd"
 #  elif defined(__hpux__) || defined(__hpux)
