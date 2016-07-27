--- src/serial.cpp.orig	2010-11-01 02:08:53.000000000 +0200
+++ src/serial.cpp
@@ -94,7 +94,7 @@ using std::ios;
 #define MAX_CANON MAX_INPUT
 #endif
 
-#ifdef  __FreeBSD__
+#if  defined(__FreeBSD__) || defined(__DragonFly__)
 #undef  _PC_MAX_INPUT
 #undef  _PC_MAX_CANON
 #endif
