--- src/logging.cc.orig	2024-10-06 14:10:30.016894000 +0200
+++ src/logging.cc	2024-10-06 14:11:07.137006000 +0200
@@ -2610,7 +2610,7 @@ int posix_strerror_r(int err, char* buf,
     } else {
       buf[0] = '\000';
 #if defined(GLOG_OS_MACOSX) || defined(GLOG_OS_FREEBSD) || \
-    defined(GLOG_OS_OPENBSD)
+    defined(GLOG_OS_OPENBSD) || defined(GLOG_OS_DRAGONFLY)
       if (reinterpret_cast<intptr_t>(rc) < sys_nerr) {
         // This means an error on MacOSX or FreeBSD.
         return -1;
