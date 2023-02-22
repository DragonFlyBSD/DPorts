--- CPP/7zip/Common/FileStreams.cpp.orig	2023-02-04 17:01:56.046115000 +0100
+++ CPP/7zip/Common/FileStreams.cpp	2023-02-04 17:02:06.476283000 +0100
@@ -12,7 +12,7 @@
 #include <pwd.h>
 
 // for major()/minor():
-#if defined(__FreeBSD__) || defined(BSD)
+#if defined(__FreeBSD__) || defined(BSD) || defined(__DragonFly__)
 #include <sys/types.h>
 #else
 #include <sys/sysmacros.h>
