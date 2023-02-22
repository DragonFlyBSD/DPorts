--- CPP/7zip/UI/Common/UpdateCallback.cpp.orig	2023-02-04 17:04:13.468382000 +0100
+++ CPP/7zip/UI/Common/UpdateCallback.cpp	2023-02-04 17:04:25.168587000 +0100
@@ -9,7 +9,7 @@
 // #include <pwd.h>
 
 // for major()/minor():
-#if defined(__FreeBSD__) || defined(BSD)
+#if defined(__FreeBSD__) || defined(BSD) || defined(__DragonFly__)
 #include <sys/types.h>
 #else
 #include <sys/sysmacros.h>
