--- chrome/browser/ui/color/native_chrome_color_mixer.cc.orig	2022-10-01 07:40:07 UTC
+++ chrome/browser/ui/color/native_chrome_color_mixer.cc
@@ -7,7 +7,7 @@
 #include "build/build_config.h"
 
 #if !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_MAC) && \
-    !BUILDFLAG(IS_WIN)
+    !BUILDFLAG(IS_WIN) && !BUILDFLAG(IS_BSD)
 void AddNativeChromeColorMixer(ui::ColorProvider* provider,
                                const ui::ColorProviderManager::Key& key) {}
 #endif
