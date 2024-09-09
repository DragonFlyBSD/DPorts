diff --git media/base/media_switches.h media/base/media_switches.h
index 1b938b935cd..3473ec1b207 100644
--- src/3rdparty/chromium/media/base/media_switches.h
+++ src/3rdparty/chromium/media/base/media_switches.h
@@ -42,7 +42,7 @@ MEDIA_EXPORT extern const char kDisableBackgroundMediaSuspend[];
 MEDIA_EXPORT extern const char kReportVp9AsAnUnsupportedMimeType[];
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
-    BUILDFLAG(IS_SOLARIS)
+  BUILDFLAG(IS_SOLARIS) || BUILDFLAG(IS_DRAGONFLY)
 MEDIA_EXPORT extern const char kAlsaInputDevice[];
 MEDIA_EXPORT extern const char kAlsaOutputDevice[];
 #endif
