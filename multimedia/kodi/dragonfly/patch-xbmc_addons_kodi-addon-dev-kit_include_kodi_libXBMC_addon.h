--- xbmc/addons/kodi-addon-dev-kit/include/kodi/libXBMC_addon.h.orig	2018-07-30 19:23:03.332737000 +0200
+++ xbmc/addons/kodi-addon-dev-kit/include/kodi/libXBMC_addon.h	2018-07-30 19:24:56.585164000 +0200
@@ -91,6 +91,8 @@ typedef intptr_t      ssize_t;
 #define ADDON_HELPER_ARCH       "aarch64"
 #elif defined(__mips__)
 #define ADDON_HELPER_ARCH       "mips"
+#elif defined(__DragonFly__)	// dragonfly
+#define ADDON_HELPER_ARCH       "x86_64-dragonfly"
 #else
 #define ADDON_HELPER_ARCH       "i486-linux"
 #endif
