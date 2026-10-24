--- ui/gfx/render_text_harfbuzz.cc.orig	2026-06-23 23:37:18 UTC
+++ ui/gfx/render_text_harfbuzz.cc
@@ -184,7 +184,7 @@ const char* GetPlatformColorEmojiFontName() {
   return "Segoe UI Emoji";
 #elif BUILDFLAG(IS_APPLE)
   return "Apple Color Emoji";
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return "Noto Color Emoji";
 #else
   return nullptr;
