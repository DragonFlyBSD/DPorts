--- CPP/7zip/UI/Common/UpdateCallback.cpp.orig	2023-05-03 12:00:00 UTC
+++ CPP/7zip/UI/Common/UpdateCallback.cpp
@@ -14,7 +14,7 @@ functions: gnu_dev_makedev(), gnu_dev_ma
 */
 // for major()/minor():
 #include <sys/types.h>
-#if defined(__FreeBSD__) || defined(BSD) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(BSD) || defined(__APPLE__) || defined(__DragonFly__)
 #else
 #ifndef major
 #include <sys/sysmacros.h>
