--- Source/ThirdParty/SDL/src/cpuinfo/SDL_cpuinfo.c.orig	2019-05-24 15:51:45 UTC
+++ Source/ThirdParty/SDL/src/cpuinfo/SDL_cpuinfo.c
@@ -735,7 +735,7 @@ SDL_GetSystemRAM(void)
 #endif
 #ifdef HAVE_SYSCTLBYNAME
         if (SDL_SystemRAM <= 0) {
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__DragonFly__)
 #ifdef HW_REALMEM
             int mib[2] = {CTL_HW, HW_REALMEM};
 #else
