--- src/CImg.h.orig	2026-03-21 17:28:13 UTC
+++ src/CImg.h
@@ -663,7 +663,7 @@ extern "C" {
 #endif
 
 // Define cimg_use_pthread
-#if defined(PTHREAD_H) || defined(_PTHREAD_H)
+#if defined(PTHREAD_H) || defined(_PTHREAD_H) || defined(_PTHREAD_H_)
 #define cimg_use_pthread 1
 #else
 #define cimg_use_pthread 0
