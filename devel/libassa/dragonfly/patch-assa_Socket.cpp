--- assa/Socket.cpp.orig	2006-09-24 20:35:33.000000000 +0300
+++ assa/Socket.cpp
@@ -15,7 +15,7 @@
 //------------------------------------------------------------------------
 
 #include <sstream>
-#if defined (__FreeBSD__) || defined(__FreeBSD_kernel__) || defined (__CYGWIN32__)
+#if defined (__DragonFly__) || defined (__FreeBSD__) || defined(__FreeBSD_kernel__) || defined (__CYGWIN32__)
 #  include <sys/ioctl.h>
 #endif
 
