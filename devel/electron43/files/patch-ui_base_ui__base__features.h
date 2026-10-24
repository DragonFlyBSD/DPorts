--- ui/base/ui_base_features.h.orig	2026-06-23 23:37:18 UTC
+++ ui/base/ui_base_features.h
@@ -142,7 +142,7 @@ BASE_DECLARE_FEATURE(kWaylandExternalBeginFrameSource)
 BASE_DECLARE_FEATURE(kWaylandExternalBeginFrameSource);
 #endif  // BUILDFLAG(IS_OZONE)
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 COMPONENT_EXPORT(UI_BASE_FEATURES)
 BASE_DECLARE_FEATURE(kGlobalShortcutsPortalPreferredTrigger);
 #endif
