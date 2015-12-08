--- sources/darkplaces/sys_shared.c.orig	2009-01-28 08:41:40.000000000 +0200
+++ sources/darkplaces/sys_shared.c
@@ -31,7 +31,7 @@ void Sys_Quit (int returnvalue)
 	exit(returnvalue);
 }
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__)
 #ifdef __cplusplus
 extern "C"
 #endif
@@ -40,7 +40,7 @@ int moncontrol(int);
 
 void Sys_AllowProfiling(qboolean enable)
 {
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__)
 	moncontrol(enable);
 #endif
 }
