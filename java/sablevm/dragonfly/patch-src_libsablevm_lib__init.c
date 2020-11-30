--- src/libsablevm/lib_init.c.orig	2006-08-29 18:52:35 UTC
+++ src/libsablevm/lib_init.c
@@ -6,7 +6,7 @@
  * modification of this source file.                               *
  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
 
-static pthread_once_t _svmv_init_once = { PTHREAD_ONCE_INIT };	/* internal_init should only be called once! */
+static pthread_once_t _svmv_init_once = PTHREAD_ONCE_INIT;	/* internal_init should only be called once! */
 static int _svmv_init_result = JNI_ERR;	/* JNI_OK when internal_init succeeds */
 
 /*
