--- clunk/source.cpp.orig	2009-08-05 00:23:14.000000000 +0300
+++ clunk/source.cpp
@@ -27,7 +27,7 @@
 #include <assert.h>
 #include "clunk_assert.h"
 
-#if defined _MSC_VER || __APPLE__ || __FreeBSD__
+#if defined _MSC_VER || __APPLE__ || __FreeBSD__ || __DragonFly__
 #	define pow10f(x) powf(10.0f, (x))
 #	define log2f(x) (logf(x) / M_LN2)
 #endif
