--- xfer/nntpxfer.c.bak	2016-06-16 18:28:18.000000000 +0300
+++ xfer/nntpxfer.c
@@ -478,7 +478,12 @@ char *buf;
 		rd_fp->_flag |= _SIERR;
 #else
 # if defined(BSD_44) && !defined(__osf__)
+#ifdef __DragonFly__
+		struct __FILE_public *fpp = (struct __FILE_public*)rd_fp;
+		fpp->_flags |= __SERR;
+#else
 		rd_fp->_flags |= __SERR;
+#endif
 # else
 		rd_fp->_flag |= _IOERR;		/* set stdio error */
 # endif
