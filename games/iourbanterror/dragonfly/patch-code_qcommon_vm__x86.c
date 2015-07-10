--- code/qcommon/vm_x86.c.orig	2013-08-31 18:38:27.200826000 +0000
+++ code/qcommon/vm_x86.c
@@ -26,7 +26,7 @@ Foundation, Inc., 51 Franklin St, Fifth
 #ifdef _WIN32
   #include <windows.h>
 #else
-  #ifdef __FreeBSD__
+  #if defined(__FreeBSD__) || defined(__DragonFly___)
   #include <sys/types.h>
   #endif
 
