--- hardware/plugins/Include/pyport.h.orig	2019-05-10 09:37:55 UTC
+++ hardware/plugins/Include/pyport.h
@@ -447,7 +447,7 @@ extern "C" {
  *    This isn't reliable.  See Py_OVERFLOWED comments.
  *    X is evaluated more than once.
  */
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || (defined(__hpux) && defined(__ia64))
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__OpenBSD__) || (defined(__hpux) && defined(__ia64))
 #define _Py_SET_EDOM_FOR_NAN(X) if (isnan(X)) errno = EDOM;
 #else
 #define _Py_SET_EDOM_FOR_NAN(X) ;
