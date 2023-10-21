--- src/joystick/linux/SDL_sysjoystick.c.orig	2023-10-01 19:12:03 UTC
+++ src/joystick/linux/SDL_sysjoystick.c
@@ -586,7 +586,9 @@ static int SDL_inotify_init1(void)
     return fd;
 }
 #endif
+#endif
 
+#ifdef HAVE_INOTIFY
 static void LINUX_InotifyJoystickDetect(void)
 {
     union
