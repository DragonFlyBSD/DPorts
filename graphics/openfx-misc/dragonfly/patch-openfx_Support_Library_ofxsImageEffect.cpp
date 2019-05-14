--- openfx/Support/Library/ofxsImageEffect.cpp.orig	2018-04-25 16:03:37 UTC
+++ openfx/Support/Library/ofxsImageEffect.cpp
@@ -56,7 +56,7 @@ England
 #endif
 #include "ofxsCore.h"
 
-#if defined __APPLE__ || defined __linux__ || defined __FreeBSD__
+#if defined __APPLE__ || defined __linux__ || defined __FreeBSD__ || __DragonFly__
 # if __GNUC__ >= 4
 #  define EXPORT __attribute__((visibility("default")))
 #  define LOCAL  __attribute__((visibility("hidden")))
