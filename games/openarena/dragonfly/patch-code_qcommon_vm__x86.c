--- code/qcommon/vm_x86.c.intermediate	2013-08-31 15:21:11.582738000 +0000
+++ code/qcommon/vm_x86.c
@@ -26,7 +26,7 @@ Foundation, Inc., 51 Franklin St, Fifth
 #include <windows.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #endif
 
