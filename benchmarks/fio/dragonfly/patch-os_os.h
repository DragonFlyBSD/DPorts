--- os/os.h.orig	2016-12-20 08:12:56.000000000 +0200
+++ os/os.h
@@ -81,6 +81,7 @@ typedef struct aiocb os_aiocb_t;
 #define POSIX_FADV_DONTNEED	(0)
 #define POSIX_FADV_SEQUENTIAL	(0)
 #define POSIX_FADV_RANDOM	(0)
+#define POSIX_FADV_NORMAL	(0)
 #endif
 
 #ifndef FIO_HAVE_CPU_AFFINITY
