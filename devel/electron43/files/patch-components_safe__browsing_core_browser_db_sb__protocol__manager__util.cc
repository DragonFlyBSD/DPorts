--- components/safe_browsing/core/browser/db/sb_protocol_manager_util.cc.orig	2026-06-23 23:37:18 UTC
+++ components/safe_browsing/core/browser/db/sb_protocol_manager_util.cc
@@ -121,7 +121,7 @@ PlatformType GetCurrentPlatformType() {
 PlatformType GetCurrentPlatformType() {
 #if BUILDFLAG(IS_WIN)
   return WINDOWS_PLATFORM;
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return LINUX_PLATFORM;
 #elif BUILDFLAG(IS_IOS)
   return IOS_PLATFORM;
