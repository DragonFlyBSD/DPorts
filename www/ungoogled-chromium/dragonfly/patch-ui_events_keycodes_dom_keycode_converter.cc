diff --git ui/events/keycodes/dom/keycode_converter.cc ui/events/keycodes/dom/keycode_converter.cc
index 0f84130178d..3efb236cac4 100644
--- ui/events/keycodes/dom/keycode_converter.cc
+++ ui/events/keycodes/dom/keycode_converter.cc
@@ -11,7 +11,8 @@
 #include "ui/events/keycodes/dom/dom_code.h"
 #include "ui/events/keycodes/dom/dom_key.h"
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
+  BUILDFLAG(IS_DRAGONFLY)
 #include <linux/input.h>
 #endif
 
@@ -58,7 +59,8 @@ struct DomKeyMapEntry {
 #undef DOM_KEY_MAP
 #undef DOM_KEY_UNI
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
+  BUILDFLAG(IS_DRAGONFLY)
 
 // The offset between XKB Keycode and evdev code.
 constexpr int kXkbKeycodeOffset = 8;
@@ -139,7 +141,8 @@ int KeycodeConverter::DomCodeToNativeKeycode(DomCode code) {
   return UsbKeycodeToNativeKeycode(static_cast<uint32_t>(code));
 }
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
+  BUILDFLAG(IS_DRAGONFLY)
 // static
 DomCode KeycodeConverter::XkbKeycodeToDomCode(uint32_t xkb_keycode) {
   // Currently XKB keycode is the native keycode.
