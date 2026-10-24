--- chrome/browser/glic/public/features.cc.orig	2026-06-23 23:37:18 UTC
+++ chrome/browser/glic/public/features.cc
@@ -64,7 +64,7 @@ BASE_FEATURE(kGlicLiveMode,
 
 // When off, disables both live mode and the glic floating panel.
 BASE_FEATURE(kGlicLiveMode,
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
              base::FEATURE_DISABLED_BY_DEFAULT
 #else
              base::FEATURE_ENABLED_BY_DEFAULT
