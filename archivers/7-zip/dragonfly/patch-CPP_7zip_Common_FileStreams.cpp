--- CPP/7zip/Common/FileStreams.cpp.orig	2023-05-03 12:00:00 UTC
+++ CPP/7zip/Common/FileStreams.cpp
@@ -13,7 +13,7 @@
 
 // for major()/minor():
 #include <sys/types.h>
-#if defined(__FreeBSD__) || defined(BSD) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(BSD) || defined(__APPLE__) || defined(__DragonFly__)
 #else
 #ifndef major
 #include <sys/sysmacros.h>
