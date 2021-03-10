--- include/fxdefs.h.orig	2020-08-18 15:28:43 UTC
+++ include/fxdefs.h
@@ -346,7 +346,7 @@ typedef FXint                   FXInputH
 #endif
 
 // Thread ID type
-#if defined(WIN32)
+#if defined(WIN32) || defined(__DragonFly__)
 typedef void*                   FXThreadID;
 #else
 typedef unsigned long           FXThreadID;
