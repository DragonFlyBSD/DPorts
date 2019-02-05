--- src/libxsmm_trace.c.orig	2019-02-05 19:24:48.000000000 +0000
+++ src/libxsmm_trace.c	2019-02-05 19:29:49.000000000 +0000
@@ -77,8 +77,18 @@
   fst.fst_bytesalloc = 0;
   return fcntl(fd, F_PREALLOCATE, &fst);
 }
+# elif defined(__DragonFly__)
+/* XXX - This is obviously not completely okay. posix_fallocate() makes sure the 
+ * data is actually allocated in the filesystem whereas ftruncate could just be
+ * creating a sparse file. Let's hope this does not blow something up :-)
+ */
+LIBXSMM_API_INLINE int posix_fallocate(int fd, off_t __unused offset, off_t length)
+{
+  return ftruncate(fd, length);
+}
 # elif (!defined(_XOPEN_SOURCE) || 600 > _XOPEN_SOURCE) && \
-       (!defined(_POSIX_C_SOURCE) || 200112L > _POSIX_C_SOURCE)
+       (!defined(_POSIX_C_SOURCE) || 200112L > _POSIX_C_SOURCE) && \
+       !defined(__DragonFly__)
 /* C89: avoid warning about posix_fallocate declared implicitly */
 LIBXSMM_EXTERN int posix_fallocate(int, off_t, off_t);
 # endif
