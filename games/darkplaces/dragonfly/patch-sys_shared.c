--- sys_shared.c.orig	2013-07-24 14:44:30.000000000 +0300
+++ sys_shared.c
@@ -69,7 +69,7 @@ void Sys_AllowProfiling(qboolean enable)
 	else
 		moncleanup();
 #endif
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	extern int moncontrol(int);
 	moncontrol(enable);
 #endif
@@ -493,7 +493,7 @@ static const char *Sys_FindExecutableNam
 #else
 	static char exenamebuf[MAX_OSPATH+1];
 	ssize_t n = -1;
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	n = readlink("/proc/curproc/file", exenamebuf, sizeof(exenamebuf)-1);
 #elif defined(__linux__)
 	n = readlink("/proc/self/exe", exenamebuf, sizeof(exenamebuf)-1);
