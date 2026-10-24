--- Socket.cpp.orig
+++ Socket.cpp
@@ -18,7 +18,7 @@
 #include <sys/types.h>
 #include <sys/utsname.h>
 
-#if defined(__CYGWIN32__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__sun)
+#if defined(__CYGWIN32__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__sun)
 #include <netinet/in_systm.h>
 #endif
 
@@ -39,7 +39,7 @@
 // System specific defines.
 //
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__sun)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__sun)
 #define SOL_IP  IPPROTO_IP
 #endif
 
