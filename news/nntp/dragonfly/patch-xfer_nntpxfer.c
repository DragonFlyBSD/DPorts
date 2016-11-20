--- xfer/nntpxfer.c.intermediate	2016-11-20 17:02:34.000000000 +0200
+++ xfer/nntpxfer.c
@@ -479,7 +479,12 @@ char *buf;
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
