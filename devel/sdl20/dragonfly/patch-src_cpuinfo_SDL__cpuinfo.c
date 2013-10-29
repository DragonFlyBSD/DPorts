--- src/cpuinfo/SDL_cpuinfo.c.orig	2013-10-24 04:05:29.000000000 +0000
+++ src/cpuinfo/SDL_cpuinfo.c
@@ -621,7 +621,7 @@ SDL_GetSystemRAM(void)
 #endif
 #ifdef HAVE_SYSCTLBYNAME
         if (SDL_SystemRAM <= 0) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #ifdef HW_REALMEM
             int mib[2] = {CTL_HW, HW_REALMEM};
 #else
