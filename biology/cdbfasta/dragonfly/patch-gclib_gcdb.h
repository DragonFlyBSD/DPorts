--- gclib/gcdb.h.orig	2009-12-03 22:12:11.000000000 +0200
+++ gclib/gcdb.h
@@ -109,8 +109,12 @@ class GCDBuffer {
 //-------------     cdb utils       -------------------
 //=====================================================
 #ifndef __WIN32__
+#ifdef __DragonFly__
+#include <errno.h>
+#else
  extern int errno;
 #endif
+#endif
 extern int error_intr;
 extern int error_nomem;
 extern int error_proto;
