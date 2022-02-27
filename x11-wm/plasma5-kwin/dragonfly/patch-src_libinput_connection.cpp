Workaround until x11/libinput is updated to at least 1.14

--- src/libinput/connection.cpp.orig	2022-01-04 08:58:39 UTC
+++ src/libinput/connection.cpp
@@ -280,9 +280,12 @@ KWin::TabletToolId createTabletId(libinp
     case LIBINPUT_TABLET_TOOL_TYPE_LENS:
         toolType = InputRedirection::Lens;
         break;
+#ifndef __DragonFly__
+// not available in older libinput version 1.12
     case LIBINPUT_TABLET_TOOL_TYPE_TOTEM:
         toolType = InputRedirection::Totem;
         break;
+#endif
     }
     QVector<InputRedirection::Capability> capabilities;
     if (libinput_tablet_tool_has_pressure(tool)) {
