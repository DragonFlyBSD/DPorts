--- dlls/winebus.sys/main.c.orig	2026-01-19 21:07:17 UTC
+++ dlls/winebus.sys/main.c
@@ -598,7 +598,7 @@ static BOOL is_hidraw_enabled(WORD vid, WORD pid, cons
 
     if (options.disable_sdl && options.disable_input) prefer_hidraw = TRUE;
     if (is_dualshock4_gamepad(vid, pid)) prefer_hidraw = TRUE;
-    if (is_dualsense_gamepad(vid, pid)) prefer_hidraw = TRUE;
+    if (is_dualsense_gamepad(vid, pid)) prefer_hidraw = FALSE;
 
     switch (vid)
     {
