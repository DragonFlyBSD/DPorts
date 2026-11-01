diff --git media/base/media_switches.h media/base/media_switches.h
index 6b0422272b45..8b1de7b755da 100644
--- media/base/media_switches.h
+++ media/base/media_switches.h
@@ -43,7 +43,7 @@ MEDIA_EXPORT extern const char kDisableBackgroundMediaSuspend[];
 MEDIA_EXPORT extern const char kReportVp9AsAnUnsupportedMimeType[];
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
-    BUILDFLAG(IS_SOLARIS)
+  BUILDFLAG(IS_SOLARIS) || BUILDFLAG(IS_DRAGONFLY)
 MEDIA_EXPORT extern const char kAlsaInputDevice[];
 MEDIA_EXPORT extern const char kAlsaOutputDevice[];
 #endif
