--- src/common/XAuth.cpp.orig
+++ src/common/XAuth.cpp
@@ -31,7 +31,7 @@
 #include <unistd.h>
 #include <X11/Xauth.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define HOST_NAME_MAX _POSIX_HOST_NAME_MAX
 #endif
 
