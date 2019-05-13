--- Sources/AngelScript/source/as_memory.cpp.orig	2019-01-04 07:21:49 UTC
+++ Sources/AngelScript/source/as_memory.cpp
@@ -38,7 +38,7 @@
 
 #include <stdlib.h>
 
-#if !defined(__APPLE__) && !defined(__SNC__) && !defined(__ghs__) && !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(__APPLE__) && !defined(__SNC__) && !defined(__ghs__) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
