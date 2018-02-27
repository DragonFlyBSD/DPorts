--- kmplot/view.cpp.orig	2013-06-28 17:20:41.814867000 +0000
+++ kmplot/view.cpp
@@ -79,7 +79,7 @@ using namespace std;
 
 //BEGIN nan & inf
 
-#if defined(__APPLE__) || defined(_MSC_VER)
+#if defined(__APPLE__) || defined(_MSC_VER) || defined(__DragonFly__)
 // work around an OSX <cmath> bug; is there a proper way to fix this?
 #ifndef isnan
 extern "C" int isnan(double);
