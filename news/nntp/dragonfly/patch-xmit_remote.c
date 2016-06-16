--- xmit/remote.c.bak	2016-06-16 18:06:13.000000000 +0300
+++ xmit/remote.c
@@ -345,7 +345,12 @@ FILE	*fp;
 		fp->_flag |= _SIERR;
 #else
 #if defined(BSD_44) && !defined(__osf__)
+#ifdef __DragonFly__
+		struct __FILE_public *fpp = (struct __FILE_public*)fp;
+		fpp->_flags |= __SERR;		/* set stdio error */
+#else
 		fp->_flags |= __SERR;		/* set stdio error */
+#endif
 # else
 		fp->_flag |= _IOERR;		/* set stdio error */
 # endif
