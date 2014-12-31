--- COLLADABaseUtils/include/COLLADABUPlatform.h.orig	2014-05-27 23:55:46 UTC
+++ COLLADABaseUtils/include/COLLADABUPlatform.h
@@ -23,7 +23,8 @@
 #  define COLLADABU_OS_WIN64
 #elif (defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__))
 #  define COLLADABU_OS_WIN32
-#elif defined(__linux__) || defined(__linux) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__linux) || defined(__FreeBSD__) \
+   || defined(__DragonFly__)
 #  define COLLADABU_OS_LINUX
 #endif
 
