--- xbmc/windowing/WinEvents.cpp.orig	2018-08-04 16:03:45.206998000 +0200
+++ xbmc/windowing/WinEvents.cpp	2018-08-04 16:04:25.047860000 +0200
@@ -42,11 +42,11 @@
 #include "WinEventsFreeBSD.h"
 #define WinEventsType CWinEventsFreeBSD
 
-#elif (defined(TARGET_FREEBSD) || defined(TARGET_LINUX)) && defined(HAS_SDL_WIN_EVENTS)
+#elif (defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_LINUX)) && defined(HAS_SDL_WIN_EVENTS)
 #include "WinEventsSDL.h"
 #define WinEventsType CWinEventsSDL
 
-#elif (defined(TARGET_FREEBSD) || defined(TARGET_LINUX)) && defined(HAS_X11_WIN_EVENTS)
+#elif (defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_LINUX)) && defined(HAS_X11_WIN_EVENTS)
 #include "WinEventsX11.h"
 #define WinEventsType CWinEventsX11
 
