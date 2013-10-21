--- src/formats.c.orig	2013-01-13 19:57:39.000000000 +0000
+++ src/formats.c
@@ -407,8 +407,14 @@ static void UNUSED rewind_pipe(FILE * fp
 /* _FSTDIO is for Torek stdio (i.e. most BSD-derived libc's)
  * In theory, we no longer need to check _NEWLIB_VERSION or __APPLE__ */
 #if defined _FSTDIO || defined _NEWLIB_VERSION || defined __APPLE__
+#  ifdef __DragonFly__
+  struct __FILE_public *fpp = (struct __FILE_public *)fp;
+  fpp->_p -= PIPE_AUTO_DETECT_SIZE;
+  fpp->_r += PIPE_AUTO_DETECT_SIZE;
+#  else
   fp->_p -= PIPE_AUTO_DETECT_SIZE;
   fp->_r += PIPE_AUTO_DETECT_SIZE;
+#  endif
 #elif defined __GLIBC__
   fp->_IO_read_ptr = fp->_IO_read_base;
 #elif defined _MSC_VER || defined _WIN32 || defined _WIN64 || defined _ISO_STDIO_ISO_H
