--- extern/libmv/third_party/glog/src/logging.cc.orig	2015-06-30 03:05:23.000000000 +0300
+++ extern/libmv/third_party/glog/src/logging.cc
@@ -1986,7 +1986,7 @@ int posix_strerror_r(int err, char *buf,
       return 0;
     } else {
       buf[0] = '\000';
-#if defined(OS_MACOSX) || defined(OS_FREEBSD) || defined(OS_OPENBSD)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD) || defined(OS_OPENBSD) || defined(__DragonFly__)
       if (reinterpret_cast<intptr_t>(rc) < sys_nerr) {
         // This means an error on MacOSX or FreeBSD.
         return -1;
