--- general/tinyxml2.cpp.orig	2021-07-29 22:31:59 UTC
+++ general/tinyxml2.cpp
@@ -103,7 +103,7 @@ distribution.
 #if defined(_WIN64)
 	#define TIXML_FSEEK _fseeki64
 	#define TIXML_FTELL _ftelli64
-#elif defined(__APPLE__) || (__FreeBSD__)
+#elif defined(__APPLE__) || (__FreeBSD__) || defined(__DragonFly__)
 	#define TIXML_FSEEK fseeko
 	#define TIXML_FTELL ftello
 #elif defined(__unix__) && defined(__x86_64__)
