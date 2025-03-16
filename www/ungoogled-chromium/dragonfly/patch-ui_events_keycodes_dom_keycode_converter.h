diff --git ui/events/keycodes/dom/keycode_converter.h ui/events/keycodes/dom/keycode_converter.h
index 80f86f4ad686..5634bbefa1b8 100644
--- ui/events/keycodes/dom/keycode_converter.h
+++ ui/events/keycodes/dom/keycode_converter.h
@@ -64,7 +64,8 @@ class KeycodeConverter {
   // Convert a DomCode into a native keycode.
   static int DomCodeToNativeKeycode(DomCode code);
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
+  BUILDFLAG(IS_DRAGONFLY)
   // Convert a XKB keycode into a DomCode.
   static DomCode XkbKeycodeToDomCode(uint32_t xkb_keycode);
 
