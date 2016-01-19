--- clunk/source.cpp.orig	2014-09-29 09:48:48.000000000 +0300
+++ clunk/source.cpp
@@ -25,7 +25,7 @@
 #include <clunk/clunk_assert.h>
 #include <clunk/mixer.h>
 
-#if defined _MSC_VER || __APPLE__ || __FreeBSD__
+#if defined _MSC_VER || __APPLE__ || __FreeBSD__ || __DragonFly__
 #	define pow10f(x) powf(10.0f, (x))
 #	define log2f(x) (logf(x) / M_LN2)
 #endif
