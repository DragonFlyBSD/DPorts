diff --git media/base/media_switches.h media/base/media_switches.h
index 206d0adaf7f4..7ccab05132a1 100644
--- media/base/media_switches.h
+++ media/base/media_switches.h
@@ -44,7 +44,7 @@ MEDIA_EXPORT extern const char kDisableBackgroundMediaSuspend[];
 MEDIA_EXPORT extern const char kReportVp9AsAnUnsupportedMimeType[];
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
-    BUILDFLAG(IS_SOLARIS)
+  BUILDFLAG(IS_SOLARIS) || BUILDFLAG(IS_DRAGONFLY)
 MEDIA_EXPORT extern const char kAlsaInputDevice[];
 MEDIA_EXPORT extern const char kAlsaOutputDevice[];
 #endif
