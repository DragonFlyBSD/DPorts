--- src/qcommon/qcommon.h.orig
+++ src/qcommon/qcommon.h
@@ -1395,7 +1395,7 @@
 #define Sys_GetDLLName(x) x "_mp_" ARCH_STRING DLL_EXT
 #elif __OpenBSD__ // TODO: detect the *BSD variant
 #define Sys_GetDLLName(x) x ".mp.obsd." ARCH_STRING DLL_EXT
-#elif __FreeBSD__ // TODO: detect the *BSD variant
+#elif __FreeBSD__ || __DragonFly__ // TODO: detect the *BSD variant
 #define Sys_GetDLLName(x) x ".mp.fbsd." ARCH_STRING DLL_EXT
 #elif __NetBSD__ // TODO: detect the *BSD variant
 #define Sys_GetDLLName(x) x ".mp.nbsd." ARCH_STRING DLL_EXT
