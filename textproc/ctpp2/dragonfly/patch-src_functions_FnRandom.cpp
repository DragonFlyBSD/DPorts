--- src/functions/FnRandom.cpp.orig	2012-11-10 22:36:30.000000000 +0200
+++ src/functions/FnRandom.cpp
@@ -51,7 +51,7 @@ namespace CTPP // C++ Template Engine
 //
 FnRandom::FnRandom()
 {
-#if defined(__FreeBSD__) || defined(_MSC_VER)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(_MSC_VER)
 	srandomdev();
 #else
 	srandom(time(NULL));
