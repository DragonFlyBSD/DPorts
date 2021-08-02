--- tinyxml2.cpp.orig	2021-07-30 08:13:46.222163000 +0200
+++ tinyxml2.cpp	2021-07-30 08:14:04.981735000 +0200
@@ -103,7 +103,7 @@
 #if defined(_WIN64)
 	#define TIXML_FSEEK _fseeki64
 	#define TIXML_FTELL _ftelli64
-#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__ANDROID__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__ANDROID__) || defined(__DragonFly__)
 	#define TIXML_FSEEK fseeko
 	#define TIXML_FTELL ftello
 #elif defined(__unix__) && defined(__x86_64__)
