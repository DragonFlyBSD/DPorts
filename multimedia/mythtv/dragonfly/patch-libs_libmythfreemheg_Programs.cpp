--- libs/libmythfreemheg/Programs.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmythfreemheg/Programs.cpp
@@ -34,7 +34,7 @@
 #if HAVE_GETTIMEOFDAY == 0
 #include <sys/timeb.h>
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #else
 #include <time.h>
