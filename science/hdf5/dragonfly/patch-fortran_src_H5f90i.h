--- fortran/src/H5f90i.h.intermediate	2013-06-25 06:17:28.075042000 +0000
+++ fortran/src/H5f90i.h
@@ -74,7 +74,7 @@ typedef float             real_f;
 #endif /*APPLE*/
 
 /* LINUX definitions */
-#if (defined(linux) || defined(__gnu_linux__) || defined(__linux__) || defined(__FreeBSD__))
+#if defined(linux) || defined(__gnu_linux__) || defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 /* Common definitions */
 typedef char              *_fcd;
