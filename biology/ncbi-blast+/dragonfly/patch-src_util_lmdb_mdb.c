--- src/util/lmdb/mdb.c.orig	2017-06-29 14:56:04 UTC
+++ src/util/lmdb/mdb.c
@@ -120,7 +120,7 @@ typedef SSIZE_T	ssize_t;
 #include <resolv.h>	/* defines BYTE_ORDER on HPUX and Solaris */
 #endif
 
-#if defined(__APPLE__) || defined (BSD) || defined(__FreeBSD_kernel__)
+#if defined(__APPLE__) || defined (BSD) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 # define MDB_USE_POSIX_SEM	1
 # define MDB_FDATASYNC		fsync
 #elif defined(ANDROID)
