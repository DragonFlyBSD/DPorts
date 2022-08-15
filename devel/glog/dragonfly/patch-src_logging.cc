--- src/logging.cc.orig	2022-04-04 22:03:27 UTC
+++ src/logging.cc
@@ -2525,7 +2525,8 @@ int posix_strerror_r(int err, char *buf,
       return 0;
     } else {
       buf[0] = '\000';
-#if defined(GLOG_OS_MACOSX) || defined(GLOG_OS_FREEBSD) || defined(GLOG_OS_OPENBSD)
+#if defined(GLOG_OS_MACOSX) || defined(GLOG_OS_FREEBSD) || defined(GLOG_OS_OPENBSD) || \
+    defined(GLOG_OS_DRAGONFLY)
       if (reinterpret_cast<intptr_t>(rc) < sys_nerr) {
         // This means an error on MacOSX or FreeBSD.
         return -1;
