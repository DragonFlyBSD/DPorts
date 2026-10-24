diff --git ui/events/keycodes/dom/keycode_converter.cc ui/events/keycodes/dom/keycode_converter.cc
index c37a329cfac9..b1591a8e4a54 100644
--- ui/events/keycodes/dom/keycode_converter.cc
+++ ui/events/keycodes/dom/keycode_converter.cc
@@ -18,7 +18,8 @@
 #include "ui/events/keycodes/dom/dom_code.h"
 #include "ui/events/keycodes/dom/dom_key.h"
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
+  BUILDFLAG(IS_DRAGONFLY)
 #include <linux/input.h>
 #endif
 
@@ -70,7 +71,8 @@ struct DomKeyMapEntry {
 #undef DOM_KEY_UNI
 #undef DOM_KEY_MAP_DECLARATION_END
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
+  BUILDFLAG(IS_DRAGONFLY)
 
 // The offset between XKB Keycode and evdev code.
 constexpr int kXkbKeycodeOffset = 8;
@@ -191,7 +193,8 @@ int KeycodeConverter::DomCodeToNativeKeycode(DomCode code) {
   return UsbKeycodeToNativeKeycode(static_cast<uint32_t>(code));
 }
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
+  BUILDFLAG(IS_DRAGONFLY)
 // static
 DomCode KeycodeConverter::XkbKeycodeToDomCode(uint32_t xkb_keycode) {
   // Currently XKB keycode is the native keycode.
