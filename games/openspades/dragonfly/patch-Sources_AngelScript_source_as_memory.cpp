--- Sources/AngelScript/source/as_memory.cpp.orig	2014-06-23 14:55:03.000000000 +0300
+++ Sources/AngelScript/source/as_memory.cpp
@@ -38,7 +38,7 @@
 
 #include <stdlib.h>
 
-#if !defined(__APPLE__) && !defined( __SNC__ ) && !defined( __ghs__ ) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined( __SNC__ ) && !defined( __ghs__ ) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
