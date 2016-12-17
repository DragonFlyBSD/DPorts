--- src/yafraycore/buffer.h.orig	2016-12-17 13:01:39.000000000 +0200
+++ src/yafraycore/buffer.h
@@ -28,6 +28,7 @@
 #endif
 
 #include <cstdio>
+#include <cstdlib>
 #include <iostream>
 #include "color.h"
 
@@ -43,7 +44,7 @@ class YAFRAYCORE_EXPORT gBuf_t
 			if (data==NULL)
 			{
 				std::cerr << "Error allocating memory in cBuffer\n";
-				exit(1);
+				std::exit(1);
 			}
 			mx = x;
 			my = y;
@@ -59,7 +60,7 @@ class YAFRAYCORE_EXPORT gBuf_t
 			if(data==NULL)
 			{
 				std::cerr << "Error allocating memory in cBuffer\n";
-				exit(1);
+				std::exit(1);
 			}
 			mx = x;
 			my = y;
@@ -153,7 +154,7 @@ Buffer_t<T>::Buffer_t(int x, int y)
 	if(data==NULL)
 	{
 		std::cout<<"Error allocating memory in cBuffer\n";
-		exit(1);
+		std::exit(1);
 	}
 	mx=x;
 	my=y;
@@ -175,7 +176,7 @@ void Buffer_t<T>::set(int x, int y)
 	if(data==NULL)
 	{
 		std::cout<<"Error allocating memory in cBuffer\n";
-		exit(1);
+		std::exit(1);
 	}
 	mx=x;
 	my=y;
