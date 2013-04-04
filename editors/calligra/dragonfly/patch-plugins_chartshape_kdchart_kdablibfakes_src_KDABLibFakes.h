--- plugins/chartshape/kdchart/kdablibfakes/src/KDABLibFakes.h.orig	2013-03-11 08:29:40.000000000 +0000
+++ plugins/chartshape/kdchart/kdablibfakes/src/KDABLibFakes.h
@@ -52,7 +52,7 @@
 #include <float.h>
 #define ISNAN(x ) _isnan(x )
 #define ISINF(x ) (!(_finite(x ) + _isnan(x ) ) )
-#elif defined (Q_OS_DARWIN) || defined (Q_OS_CYGWIN)
+#elif defined (Q_OS_DARWIN) || defined (Q_OS_CYGWIN) || defined (__DragonFly__)
 #define ISNAN(x) std::isnan(x)
 #define ISINF(x) std::isinf(x)
 #else
