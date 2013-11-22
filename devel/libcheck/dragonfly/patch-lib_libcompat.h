--- lib/libcompat.h.orig	2013-11-05 02:02:22.000000000 +0000
+++ lib/libcompat.h
@@ -173,11 +173,13 @@ struct itimerspec
  */
 typedef int timer_t;
 
+#ifndef __DragonFly__
 /*
  * As the functions which use clockid_t are not defined on the system,
  * the clockid_t type probably also is not defined.
  */
 typedef int clockid_t;
+#endif
 
 /* 
  * Do a simple forward declaration in case the struct is not defined.
