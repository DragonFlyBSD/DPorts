--- src/OCP_DataStreamInput_Thread.cpp.orig	2020-07-15 18:02:29 UTC
+++ src/OCP_DataStreamInput_Thread.cpp
@@ -32,7 +32,7 @@
 #endif
 
 #ifdef __POSIX__
-    #ifdef __OCPN__ANDROID__
+    #if defined(__OCPN__ANDROID__) || defined(__DragonFly__)
         #include <termios.h>
     #else
 	#include <sys/termios.h>
