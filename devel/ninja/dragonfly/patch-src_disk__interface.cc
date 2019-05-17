--- src/disk_interface.cc.orig	2019-01-30 18:58:59 UTC
+++ src/disk_interface.cc
@@ -206,7 +206,7 @@ TimeStamp RealDiskInterface::Stat(const
   return ((int64_t)st.st_mtimespec.tv_sec * 1000000000LL +
           st.st_mtimespec.tv_nsec);
 #elif (_POSIX_C_SOURCE >= 200809L || _XOPEN_SOURCE >= 700 || defined(_BSD_SOURCE) || defined(_SVID_SOURCE) || \
-       defined(__BIONIC__) || (defined (__SVR4) && defined (__sun)) || defined(__FreeBSD__))
+       defined(__BIONIC__) || (defined (__SVR4) && defined (__sun)) || defined(__FreeBSD__) || defined(__DragonFly__))
   // For glibc, see "Timestamp files" in the Notes of http://www.kernel.org/doc/man-pages/online/pages/man2/stat.2.html
   // newlib, uClibc and musl follow the kernel (or Cygwin) headers and define the right macro values above.
   // For bsd, see https://github.com/freebsd/freebsd/blob/master/sys/sys/stat.h and similar
