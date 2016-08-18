--- rxfn.c.orig	2000-11-01 20:04:28.000000000 +0200
+++ rxfn.c
@@ -41,8 +41,10 @@
 # ifdef linux
 #  define _CNT(fp) ((fp)->_IO_read_end - (fp)->_IO_read_ptr)
 # else
-#  ifdef __FreeBSD__
+#  if defined(__FreeBSD__)
 #   define _CNT(fp) ((fp)->_r)
+#  elif defined(__DragonFly__)
+#   define _CNT(fp) (((struct __FILE_public *)fp)->_r)
 #  else
 #   define _CNT(fp) ((fp)->_cnt)
 #  endif
